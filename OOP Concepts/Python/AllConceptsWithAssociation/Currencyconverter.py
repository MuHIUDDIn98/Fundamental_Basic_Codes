import time  # Import the time module for timestamps

# --- Logger Class ---
class Logger:
    #Handles logging of currency conversions.

    def __init__(self, log_file="conversion_log.txt"):
       #Initializes the logger.
        self.log_file = log_file

    def log(self, user, from_currency, to_currency, amount, result):
        #Logs a conversion event with a timestamp.
        try:
            timestamp = time.strftime("%Y-%m-%d %H:%M:%S")  # Get formatted time
            with open(self.log_file, "a") as f:
                log_entry = (
                    f"[{timestamp}] User: {user}, "
                    f"Converted: {amount:.2f} {from_currency} "
                    f"to {result:.2f} {to_currency}\n"
                )
                f.write(log_entry)
            print("Log saved successfully.")
        except IOError as e:
            print(f"Error: Could not write to log file {self.log_file}. {e}")





# --- CurrencyConverter Class ---
class CurrencyConverter:
    #Handles currency conversion logic.

    __exchange_rates = {           #protected property of Currencycoverter
        'USD': 1.0, 
        'EUR': 0.92,
        'GBP': 0.79,
        'BDT': 117.50,
    }

    def __init__(self, amount, from_currency, to_currency, logger_instance):
        #Initializes the converter.
        self.amount = float(amount)
        self.from_currency = from_currency.upper()
        self.to_currency = to_currency.upper()
        self.logger = logger_instance #assosiation

    @staticmethod
    def is_valid_currency(currency_code):
        #Static Method: Checks if currency code exists.
        return currency_code.upper() in CurrencyConverter.__exchange_rates

    @classmethod
    def update_rates(cls, new_rates):
        #Class Method: Updates exchange rates.
        cls.__exchange_rates.update(new_rates)
        print("Exchange rates updated successfully.")

    @classmethod
    def get_rates(cls):
        #Class Method: Gets current rates.
        return cls.__exchange_rates

    def convert(self, user="DefaultUser"): #pass user name to add username into log file
        #$Instance Method: Performs conversion.
        rates = CurrencyConverter.__exchange_rates
        rate_from = rates[self.from_currency]
        rate_to = rates[self.to_currency]

        amount_in_usd = self.amount / rate_from
        converted_amount = amount_in_usd * rate_to
        # add to log file
        self.logger.log(
            user, self.from_currency, self.to_currency,
            self.amount, converted_amount
        )
        return converted_amount

# --- Main Application Function ---
def main_CLI_Apps():
    """Runs the Command Line Interface."""
    print("--- Welcome to Currency Converter CLI App ---")
    my_logger = Logger()

    while True:
        print("\nCurrent Available Currencies and Rates (vs USD):")
        available_rates = CurrencyConverter.get_rates()
        print(available_rates)
        available_codes = list(available_rates.keys())
        print(f"Valid codes: {available_codes}")
        print("-" * 40)

        print("Choose an option:")
        print("1. Convert Currency")
        print("2. Update Exchange Rate")
        print("3. Exit")
        choice = input("Enter your choice (1, 2, or 3): ")
        print("-" * 40)

        if choice == '1':
            # --- Simple validation loop for 'amount' ---
            amount = 0.0
            is_amount_valid = False
            while not is_amount_valid:
                amount_str = input("Enter the amount to convert: ")
                try:
                    amount = float(amount_str)  # Try converting to number
                    if amount > 0:
                        is_amount_valid = True  # It's a positive number, exit loop
                    else:
                        print("Error: Amount must be greater than 0.")
                except ValueError:
                    print("Error: Invalid input. Please enter a number.")

            # --- Simple validation loop for 'from' currency ---
            from_curr = ""
            is_from_valid = False
            while not is_from_valid:
                from_curr = input(f"Enter the 'from' currency code: ").upper()
                if CurrencyConverter.is_valid_currency(from_curr):
                    is_from_valid = True
                else:
                    print(f"Error: Invalid code. Choose from {available_codes}")

            # --- Simple validation loop for 'to' currency ---
            to_curr = ""
            is_to_valid = False
            while not is_to_valid:
                to_curr = input(f"Enter the 'to' currency code: ").upper()
                if CurrencyConverter.is_valid_currency(to_curr):
                    is_to_valid = True
                else:
                    print(f"Error: Invalid code. Choose from {available_codes}")

            user_name = input("Enter your name/ID for logging: ")

            converter = CurrencyConverter(amount, from_curr, to_curr, my_logger)
            result = converter.convert(user_name)

            if result is not None:
                print(f"\n>>> {amount:.2f} {from_curr} is equal to {result:.2f} {to_curr}\n")

        elif choice == '2':
            curr_code = input("Enter currency code to update/add: ").upper()
            # You could add validation for the rate input here as well
            new_rate_str = input(f"Enter new rate for {curr_code} (vs USD): ")
            try:
                new_rate = float(new_rate_str)
                if new_rate > 0:
                   CurrencyConverter.update_rates({curr_code: new_rate})
                else:
                   print("Error: Rate must be greater than 0.")
            except ValueError:
                print("Error: Please enter a valid number for the rate.")

        elif choice == '3':
            print("Thank you for using the App!")
            break

        else:
            print("Invalid choice. Please enter 1, 2, or 3.")

        input("\nPress Enter to continue...")
        print("\n" + "*=" * 50 + "\n")

# --- Run the main function ---
if __name__ == "__main__":
    main_CLI_Apps()
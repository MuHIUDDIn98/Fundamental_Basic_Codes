import datetime

# --- Data for the Report ---
user_data = {
    "username": "anik_bd",
    "user_id": 1024,
    "email": "anik@example.com",
    "join_date": datetime.date(2023, 11, 15),
    "last_login": datetime.datetime(2025, 4, 30, 20, 55, 10), # Using current year from context
    "location": "Dhaka",
    "country": "Bangladesh"
}

activity_data = {
    "logins_month": 85,
    "posts_created": 12,
    "comments_made": 153,
    "data_usage_gb": 7.538,
    "profile_completeness": 0.92, # Represents 92%
    "account_balance": 1250.75,
    "warning_code": 3 # An integer code
}

report_config = {
    "title_width": 50,
    "field_width": 25,
    "value_width": 25,
    "padding_char": "-"
}

# Get current time (using the time provided in the context)
# Note: In a real app, use datetime.datetime.now()
current_time_context = datetime.datetime(2025, 5, 1, 0, 20, 35)


# --- Function using %-Formatting (Older Style) ---
def generate_report_percent_format(user, activity, config):
    print("\n--- Report Section (using %-formatting) ---")
    header = "User Report for %s (ID: %d)" % (user['username'], user['user_id'])
    print(header)
    print(config['padding_char'] * len(header))

    # Basic string and integer formatting
    print("Email: %s" % user['email'])

    # Date formatting (limited with %)
    print("Joined On: %s" % user['join_date']) # Default string representation

    # Padding and alignment (less flexible with %)
    print("Logins (Month): %04d" % activity['logins_month']) # Zero-padding to 4 digits
    print("Posts Created: %10d" % activity['posts_created']) # Right-aligned in 10 spaces

    # Floating point formatting
    print("Data Usage (GB): %.2f GB" % activity['data_usage_gb']) # 2 decimal places
    print("Account Balance: $%.2f" % activity['account_balance'])

    # Less common: using a dictionary directly (requires matching keys)
    # print("Location: %(location)s, Country: %(country)s" % user)


# --- Function using str.format() ---
def generate_report_str_format(user, activity, config, current_time):
    print("\n--- Report Section (using str.format()) ---")

    # Centered title using named arguments and width from config
    title = "User Activity Details".center(config['title_width'], '=')
    print(title)

    # Using positional arguments
    print("Report generated on: {}".format(current_time))

    # Using named arguments (keys from dictionary) and format_map
    print("User Info".center(config['title_width'], '-'))
    print("Username: {username:<{field_width}} ID: {user_id:0>6d}".format(
        username=user['username'],
        user_id=user['user_id'],
        field_width=config['field_width'] - len("Username: ") # Calculate remaining width
    ))
    # Using format_map for cleaner access to dictionary keys
    print("Location: {location}, {country}".format_map(user))

    # Date/Time formatting
    print("Joined: {join_date:%Y-%m-%d}".format_map(user)) # Format date YYYY-MM-DD
    print("Last Seen: {last_login:%A, %b %d, %Y at %I:%M:%S %p}".format_map(user)) # Detailed format

    # Number formatting with alignment and specifiers
    print("\nActivity Stats".center(config['title_width'], '-'))
    field_fmt = "{:<{fw}}" # Reusable format spec for left-aligned field name
    value_fmt_int = "{:>{vw},d}" # Reusable format spec for right-aligned integer with comma
    value_fmt_float = "{:>{vw}.2f}" # Reusable format spec for right-aligned float
    value_fmt_percent = "{:>{vw}.1%}" # Reusable format spec for right-aligned percentage

    print(field_fmt.format("Logins This Month", fw=config['field_width']), end="")
    print(value_fmt_int.format(activity['logins_month'], vw=config['value_width']))

    print(field_fmt.format("Comments Made", fw=config['field_width']), end="")
    print(value_fmt_int.format(activity['comments_made'], vw=config['value_width']))

    print(field_fmt.format("Avg Data Usage (GB)", fw=config['field_width']), end="")
    print(value_fmt_float.format(activity['data_usage_gb'], vw=config['value_width']))

    print(field_fmt.format("Profile Completeness", fw=config['field_width']), end="")
    print(value_fmt_percent.format(activity['profile_completeness'], vw=config['value_width']))

    print(field_fmt.format("Warning Code (Hex)", fw=config['field_width']), end="")
    print("{:>{vw}X}".format(activity['warning_code'], vw=config['value_width'])) # Hex uppercase


# --- Function using f-strings (Modern Style) ---
def generate_report_f_string(user, activity, config, current_time):
    print("\n--- Report Section (using f-strings) ---")

    # Basic interpolation and expressions
    title = f"PROFILE SUMMARY: {user['username'].upper()}"
    print(f"{title:=^{config['title_width']}}") # Center align title, pad with '='

    print(f"Report Time: {current_time:%Y-%m-%d %H:%M:%S}") # Format time directly
    print(f"Location Context: {user['location']}, {user['country']}")

    # Alignment and padding
    print(f"{'User ID:':<{config['field_width']}}{user['user_id']:0>{config['value_width']}}") # Left field, right+zero-pad value
    print(f"{'Email:':<{config['field_width']}}{user['email']:>{config['value_width']}}") # Left field, right value

    # Date/Time formatting
    print(f"{'Joined On:':<{config['field_width']}}{user['join_date']:%d/%m/%y}") # DD/MM/YY format
    print(f"{'Last Login:':<{config['field_width']}}{user['last_login']:%H:%M (%Z)}") # HH:MM (Timezone - might be blank)

    # Number formatting
    print("\n" + f"{'Monthly Activity':-^{config['title_width']}}")
    total_interactions = activity['logins_month'] + activity['posts_created'] + activity['comments_made']
    print(f"{'Total Interactions:':<{config['field_width']}}{total_interactions:>{config['value_width']},d}") # Comma separator
    print(f"{'Data Usage (GB):':<{config['field_width']}}{activity['data_usage_gb']:>{config['value_width']}.1f}") # 1 decimal place
    print(f"{'Profile Status:':<{config['field_width']}}{activity['profile_completeness']:>{config['value_width']}.0%}") # 0 decimal percentage
    print(f"{'Balance:':<{config['field_width']}}${activity['account_balance']:>{config['value_width'] - 1},.2f}") # Comma and 2 decimals, adjust width for $

    # Debugging feature (Python 3.8+)
    print(f"\nDebug Info:")
    print(f"{user['user_id']=}") # Prints variable name and value
    print(f"{activity['warning_code']=:b}") # Prints name, value, and binary representation


# --- Main Execution ---
if __name__ == "__main__":
    print(f"Report Generation Tool - Running on {current_time_context:%Y-%m-%d} in {user_data['location']}")
    print("=" * 60)

    # Run report generation using each method
    generate_report_percent_format(user_data, activity_data, report_config)
    generate_report_str_format(user_data, activity_data, report_config, current_time_context)
    generate_report_f_string(user_data, activity_data, report_config, current_time_context)

    print("\n" + "=" * 60)
    print("Report generation complete.")
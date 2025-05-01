import random

# ASCII art for Rock (0), Paper (1), Scissors (2)
rock = """
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
"""

paper = """
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
"""

scissors = """
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
"""

# Store the game images in a list for easy access
game_images = [rock, paper, scissors]

# Get user input
try:
    your_choice = int(input("What do you choose? Type 0 for Rock, 1 for Paper or 2 for Scissors.\n"))

    # --- Input Validation ---
    if your_choice < 0 or your_choice > 2:
        print("Invalid number. You lose!")
    else:
        # --- Display User Choice ---
        print("You chose:")
        print(game_images[your_choice])

        # Generate computer choice
        computer_choice = random.randint(0, 2)
        print("Computer chose:")
        print(game_images[computer_choice]) # Display computer's ASCII art

        # --- Determine the Winner ---
        if your_choice == computer_choice:
            print("It's a draw!")
        elif (your_choice == 0 and computer_choice == 2) or \
             (your_choice == 2 and computer_choice == 1) or \
             (your_choice == 1 and computer_choice == 0):
            print("You win!") # Corrected typo
        else:
            print("You lose!!")

except ValueError:
    print("Invalid input. Please enter a number (0, 1, or 2). You lose!")
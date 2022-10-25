def rockpaperscissors():
    import random
    print("Welcome to Rock Paper Scissors")
    print("Choose your weapon")
    print("1. Rock")
    print("2. Paper")
    print("3. Scissors")
    print("4. Quit")
    player = input("Enter your choice: ")
    if player == "1":
        print("You chose Rock")
    elif player == "2":
        print("You chose Paper")
    elif player == "3":
        print("You chose Scissors")
    elif player == "4":
        print("You chose to quit")
        return
    else:
        print("Invalid input")
        return
    print("Now it's the computer's turn")
    computer = random.randint(1,3)
    if computer == 1:
        print("The computer chose Rock")
    elif computer == 2:
        print("The computer chose Paper")
    elif computer == 3:
        print("The computer chose Scissors")
    if player == computer:
        print("It's a tie")
    elif player == "1" and computer == 2:
        print("You lose")
    elif player == "1" and computer == 3:
        print("You win")
    elif player == "2" and computer == 1:
        print("You win")
    elif player == "2" and computer == 3:
        print("You lose")
    elif player == "3" and computer == 1:
        print("You lose")
    elif player == "3" and computer == 2:
        print("You win")
    else:
        print("Invalid input")
    print("Thanks for playing")
    return
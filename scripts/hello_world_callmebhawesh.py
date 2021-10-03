user_input = input("Write hello world here\n")
small_user_input = user_input.lower()


if (small_user_input == "hello world"):
    print(f"You've succesfully written {small_user_input}")
else:
    print("I don't know what but there's something wrong.")
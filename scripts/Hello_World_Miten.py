from termcolor import colored
import time

def print_color(text, color):
    print(colored(text, color))

def unique_hello_world():
    message = "Hello, World!"

    for char in message:
        colored_char = colored(char, color="white", on_color="on_blue")
        print_color(colored_char, "white")
        time.sleep(0.1)

if __name__ == "__main__":
    unique_hello_world()

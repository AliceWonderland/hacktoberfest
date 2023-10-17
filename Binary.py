def binary_to_decimal(binary_str):
    decimal = 0
    for digit in binary_str:
        decimal = decimal * 2 + int(digit)
    return decimal

def decimal_to_binary(decimal):
    binary_str = ""
    while decimal > 0:
        binary_str = str(decimal % 2) + binary_str
        decimal //= 2
    return binary_str

if __name__ == "__main__":
    while True:
        print("Binary Converter")
        print("1. Binary to Decimal")
        print("2. Decimal to Binary")
        print("3. Exit")
        choice = input("Enter your choice (1/2/3): ")

        if choice == '1':
            binary_input = input("Enter a binary number: ")
            decimal_result = binary_to_decimal(binary_input)
            print("Decimal equivalent: ", decimal_result)
        elif choice == '2':
            decimal_input = int(input("Enter a decimal number: "))
            binary_result = decimal_to_binary(decimal_input)
            print("Binary equivalent: ", binary_result)
        elif choice == '3':
            print("Goodbye!")
            break
        else:
            print("Invalid choice. Please select 1, 2, or 3.")

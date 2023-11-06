# Convert binary to decimal
binary_num = '101010'  # Example binary number
decimal_num = int(binary_num, 2)
print(f"The decimal equivalent is: {decimal_num}")

# Performing bitwise operations
a = 5  # 101 in binary
b = 3  # 011 in binary

# Bitwise AND
print(f"Bitwise AND: {a & b}")

# Bitwise OR
print(f"Bitwise OR: {a | b}")

# Bitwise XOR
print(f"Bitwise XOR: {a ^ b}")

# Bitwise NOT
print(f"Bitwise NOT of a: {~a}")

# Left shift
print(f"Left shift of a by 1: {a << 1}")

# Right shift
print(f"Right shift of a by 1: {a >> 1}")

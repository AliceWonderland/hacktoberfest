
//Using NumPy
import numpy as np

def print_grid(size):
    grid = np.full((size, size), "#")
    for row in grid:
        print(" ".join(row))

print_grid(5)


//Using Nested Loops
def print_grid(size):
    for i in range(size):
        for j in range(size):
            print("# ", end="")
        print()

print_grid(5) 


//Using List Comprehensions
def print_grid(size):
    grid = [["#" for _ in range(size)] for _ in range(size)]
    for row in grid:
        print(" ".join(row))

print_grid(5)

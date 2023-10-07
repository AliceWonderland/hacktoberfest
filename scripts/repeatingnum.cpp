#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6}; // Our array of integers
    
    for (int i = 1; i <= 6; i++) {
        int count = 0;
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] == i) {
                count++;
            }
        }
        if (count == 2) {
            std::cout << i << " is a repeating number." << std::endl;
        }
        else if (count == 0) {
            std::cout << i << " is a missing number." << std::endl;
        }
    }
    
    return 0;
}

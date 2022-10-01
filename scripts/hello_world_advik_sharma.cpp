// Name: Advik Sharma - https://github.com/advik-student-dev
// LANGUAGE: C++
// Visual Studio Code


// Imports
#include <iostream>
#include <cstdlib>

int main()
{
    float x = rand();  // Random  number generator
    if (x == 69)
    {
        std::cout << x << " = Noice." << std::endl;
    }
    else if (x >= 100000)
    {
        std::cout << x << " = Green." <<  std::endl;
    }
    else 
    {
        std::cout << x << " = Red." << std::endl;
    }
    return 0;
}
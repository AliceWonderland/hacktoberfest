// LANGUAGE: c++
// ENV: g++
// AUTHOR: Pratham A Kadekar
// GITHUB: https://github.com/pratham-ak2004

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<char>name = {'H','e','l','l','o',' ','W','o','r','l','d'};
    for(auto ch : name){
        std::cout << ch;
    }
    return 0;
}
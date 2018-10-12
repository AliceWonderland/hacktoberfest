/*
Lang: C++
Env: Shell
Aut: thisfro
GitHub: https://github.com/thisfro
*/

#include <iostream>
#include <numeric>
#include <chrono>

bool isHacktober();
int getYear();
int getMonth();
int getDay();

int main(int argc, char const *argv[]) {

  if(isHacktober())
    std::cout << "Hacktoberfest!" << std::endl;
  else
    std::cout << "Hello World!" << std::endl;

  return 0;
}

#include <iostream>
#include <string>
#include <ctime>

bool isHacktober()
{
  int year = getYear();
  int month = getMonth();
  int day = getDay();

  if(year == 2018 && month == 10 && day <= 30 && day >= 1)
    return true;
  return false;
}

int getYear()
{
  std::time_t t = std::time(0);
  std::tm* now = std::localtime(&t);
  return (now->tm_year + 1900);
}

int getMonth()
{
  std::time_t t = std::time(0);
  std::tm* now = std::localtime(&t);
  return (now->tm_mon + 1);
}

int getDay()
{
  std::time_t t = std::time(0);
  std::tm* now = std::localtime(&t);
  return (now->tm_mday);
}

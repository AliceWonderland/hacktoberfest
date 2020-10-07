// LANGUAGE: C++
// AUTHOR: Muhammad Farras Rayhand
// GITHUB: https://github.com/farrasrayhand
#include <iostream>
#include <windows.h>

using namespace std;
void pos(short C, short R)
{
    COORD xy ;
    xy.X = C ;
    xy.Y = R ;
    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), xy);
}
void cls( )
{
    pos(0,0);
    for(int j=0;j<100;j++)
    cout << string(100, ' ');
    pos(0,0);
}
int main()
{
    float a, b;
    char jenis;
    char pilih;
    cout << "Masukkan Nilai a : ";
    cin >> a;
    cout << "Masukkan Nilai b : ";
    cin >> b;
    cout << "Masukkan jenis perhitungan (+, -, *, /) : ";
    cin >> jenis;

    switch(jenis)
    {
        case '+':
            cout << a + b <<endl;
            break;
        case '-':
            cout << a - b <<endl;
            break;
        case '*':
            cout << a * b <<endl;
            break;
        case '/':
            cout << a / b <<endl;
            break;

        default:
            cout << "Jenis Perhitungan salah" <<endl;
            cls();
            return main();
            break;
    }

    cout << "Apakah anda ingin menghitung lagi? [y/n]";
    cin >> pilih;
    switch(pilih)
    {
        case 'y':
            cls();
            return main();
            break;

        case 'n':
            return 0;
            break;
        default:
            cout << "Salah Input" <<endl;
            cls();
            return main();
            break;
    }
}

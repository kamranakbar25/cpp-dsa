#include<iostream>
using namespace std;

int main(){
    // Bitwise operator
    cout << (4 & 3) << endl;
    cout << (4 | 8) << endl;
    cout << (4 ^ 9) << endl;
    cout << (10 << 2) << endl;
    cout << (8 >> 2) << endl;

    cout << endl;

    // Data type modifiers
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(long long int) << endl;
    cout << sizeof(short int) << endl;
    cout << unsigned(-10) << endl;


    // Homework:
    // Q1. Write a function to reverse an integer N.
    int num = 125, revNum = 0;
    while (num > 0){
        int remNum = num % 10;
        revNum = revNum * 10 + remNum;
        num /= 10;
    }
    cout << revNum << endl;
    
    return 0;
}

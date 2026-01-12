#include<iostream>
using namespace std;


// Decimal to binary
int decToBin(int decNum){
    int ans = 0, power = 1;
    while (decNum > 0){
        int binNum = decNum % 2;
        decNum /= 2;
        ans += (binNum * power);
        power *= 10;
    }
    return ans;
}

// Binary to decimal
int binToDec(int binNum){
    int ans = 0, power = 1; // power = 1 means 2^0.
    while (binNum > 0){
        int binRem = binNum % 10;
        binNum /= 10;
        ans += binRem * power;
        power *= 2;
    }
    return ans;
}

// Main
int main(){
    cout << decToBin(50) << endl;
    cout << binToDec(101) << endl;


    return 0;
}
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
int main(){
    cout << decToBin(50) << endl;


    return 0;
}
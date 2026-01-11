#include<iostream>
using namespace std;


// Sum of 2 nums.
int sum(int a, int b){
    int result = a + b;
    return result;
}

// Find min of 2 nums.
int minNum(int a, int b){
    if (a > b){
        return b;
    }
    else{
        return a;
    }
}

// Calculate the sum of numbers from 1 to N.
int sumNum(int n){
    int givenNum = n;
    int sum = 0;
    for (int i = 0; i <= n; i++){
        sum += i;
    }
    return sum;
}


int main(){
    cout << sum(3, 7) << endl;
    cout << "Min num: " << minNum(3, 1) << endl;
    cout << "Total sum: " << sumNum(4) << endl;
    return 0;
}
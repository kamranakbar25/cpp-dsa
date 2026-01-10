#include<iostream>
using namespace std;
int main(){
    // HOMEWORK ->
    // Q1. Sum of all numbers from 1 to N which are divisible by 3.
    int N = 10, sumDiv = 0;
    for (int i = 1; i <= N; i++){
        if (i % 3 == 0){
            sumDiv += i;
        }
    }
    cout << sumDiv << endl;


    // Q2. Print factorial of a number N.
    int factNum = 5, factorial = 1;
    for (int i = 1; i <= factNum; i++){
        factorial *= i;
    }
    cout << factorial << endl;
}
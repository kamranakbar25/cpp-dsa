#include<iostream>
using namespace std;

// Q1. Write a function to check if a number is prime or not.
int primeOrNot(int num){
    bool isPrime = true;
    for (int i = 2; i < num; i++){
        if (num % i == 0){
            isPrime = false;
            break;
        }
    }
    if (isPrime){
        return true;
    }
    else{
        return false;
    }
}

// Q2. Write a function to print all prime number from 1 to N.
int printPrime(int numPrime){
    for (int i = 2; i < numPrime; i++){
        if (primeOrNot(i)){
            cout << i << " ";
        }
    }
}

// Q3. Write a function to print nth Fibonacci.
int nthFibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int prev = 0, curr = 1;

    for (int i = 2; i <= n; i++) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}


int main(){
    cout << "Is num prime: " << primeOrNot(6) << ", 1 is for true & 0 is for false" << endl;
    cout << printPrime(15) << endl;
    cout << "nth Fabonacci: " << nthFibonacci(6) << endl;

    return 0;
}
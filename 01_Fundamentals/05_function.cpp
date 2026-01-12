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
int sumNum(int givenNum){
    int sum = 0;
    for (int i = 0; i <= givenNum; i++){
        sum += i;
    }
    return sum;
}

// Calculate N factorial.
int factNum(int factNum){
    int mulNum = 1;
    for (int i = 1; i <= factNum; i++){
        mulNum *= i;
    }
    return mulNum;
}

// Calculate sum of digits of a number.
int digSum(int dgts){
    int digitSum = 0;
    while (dgts > 0){
        int lastDig = dgts % 10;
        dgts /= 10;
        digitSum += lastDig;
    }
    return digitSum;
}

// Calculate nCr binomial coefficient for n & r.
int nCr(int n, int r){
    int factOfn = factNum(n);
    int factOfr = factNum(r);
    int factOfnr = factNum((n-r));
    int result = factOfn/(factOfr * factOfnr);
    return result;
}


int main(){
    cout << sum(3, 7) << endl;
    cout << "Min num: " << minNum(3, 1) << endl;
    cout << "Total sum: " << sumNum(10) << endl;
    cout << "Factorial: " << factNum(5) << endl;
    cout << "Sum of digits of num: " << digSum(1453) << endl;
    cout << "nCr: " << nCr(8, 2) << endl;
    return 0;
}
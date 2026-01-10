// Variables, Data Types & Operators

// Boilerplate Code
// #include<iostream>
// using namespace std;

// int main(){
    
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    cout << "Kamran" << '\n' << "Akbar" << endl;

    // Variables
    int age = 18;
    float PI = 3.14f;
    char grade = 'A';
    bool isSafe = true; // ture -> 1 & false -> 0
    double price = 199.99;
    
    cout << age << endl;
    cout << PI << endl;
    cout << grade << endl;
    cout << isSafe << endl;
    cout << price << endl;
    cout << sizeof(age) << endl;



    // Type Casting
    char grde = 'A';
    int val = grade;
    cout << val << endl;

    double cost = 100.99;
    int newCost = (int)cost;
    cout << newCost << endl;



    //  Taking user input
    // int num;
    // cout << "Enter any number: ";
    // cin >> num;
    // cout << "Number is: " << num << endl;




    // Operators
    int a = 11, b = 5;
    cout << "Sum: " << a+b << endl;
    cout << "Diff: " << a-b << endl;
    cout << "Mul: " << a*b << endl;
    cout << "Div: " << a/b << endl;
    cout << "Modulo: " << a%b << endl;


    cout << (3 < 5) << endl; // true -> 1
    cout << (3 > 5) << endl; // false -> 0
    cout << (3 <= 5) << endl; // true -> 1
    cout << (3 >= 5) << endl; // false -> 0
    cout << (3 == 5) << endl; // false -> 0
    cout << (3 != 5) << endl; // true -> 1


    cout << !(3 < 5) << endl; // true -> 1 then ! will make it false -> 0
    cout << !(3 < 1) << endl; // false -> 0 then ! will make it true -> 1

    cout << ((3 < 4) || (4 > 6)) << endl;
    cout << ((3 > 4) && (4 > 6)) << endl;


    // Q1. Sum of two numbers.
    int n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << "Sum is: " << (n1 + n2) << endl;

    return 0;
}
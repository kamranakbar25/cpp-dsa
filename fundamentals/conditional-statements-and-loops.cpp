// Conditional Statements & Loops

#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout << "Enter any number: ";
    // cin >> n;
    // if (n % 2 == 0){
    //     cout << "n is even number." << endl;
    // }
    // else{
    //     cout << "n is odd number." << endl;
    // }

    // int marks;
    // cout << "Enter your marks: ";
    // cin >> marks;
    // if (marks > 90){
    //     cout << "Grade: A" << endl;
    // }
    // else if (marks > 80){
    //     cout << "Grade: B" << endl;
    // }
    // else if (marks > 60){
    //     cout << "Grade: C" << endl;
    // }
    // else if (marks > 45){
    //     cout << "Grade: D" << endl;
    // }
    // else{
    //     cout << "Grade: Fail" << endl;
    // }
    

    // Find character lowercase or uppercase.
    // Method - 1
    // char chr;
    // cout << "Enter any Alphabet: ";
    // cin >> chr;
    // int ch = chr;
    // if (ch <= 122 && ch >= 97){
    //     cout << "You written " << chr << " in lowercase" << endl;
    // }
    // else if (ch <=90 && ch >= 65)
    // {
    //     cout << "You written " << chr << " in uppercase" << endl; 
    // }
    // else{
    //     cout << "Please enter only between A-Z or a-z";
    // }
    // // Method - 2 {More easy more straight forward but not impressive.}
    // if (chr >= 'a' && chr <= 'z'){
    //     cout << "You written " << chr << " in lowercase" << endl;
    // }
    // else if (chr >= 'A' && chr <= 'Z'){
    //     cout << "You written " << chr << " in uppercase" << endl;
    // }

    // int n1 = 45;
    // cout << (n1 >= 0 ? "Positive" : "Negative") << endl;


    // Loops.
    // print numlber from 1 to n.
    // int n2 = 1;
    // while (n2 <= 5){
    //     cout << n2 << endl;
    //     n2++;
    // }

    // for (int i = 1; i <= 5; i++){
    //     cout << i << endl;
    // }
    // int sum = 0;
    // for (int i = 1; i <= 5; i++){
    //     sum += i;
    // }
    // cout << sum << endl;
    // int total = 0;
    // while (n2 <= 50){
    //     total += n2;
    //     n2++;
    //     if (n2 == 11){
    //         break;
    //     }
    // }
    // cout << total << endl;


    // Sum of all odd numbers from 1 to n.
    // Method - 1
    int sum1 = 0;
    for (int i = 1; i <= 10; i += 2){
        sum1 += i;
    }
    cout << sum1 << endl;

    // Method - 2
    int sum2 = 0;
    for (int i = 1; i <= 10; i++){
        // Method - 1
        // if (i % 2 == 0){
        //     continue;
        // }
        // sum2 += i;

        // Method - 2
        if (i % 2 != 0){
            sum2 += i;
        }
    }
    cout << sum2 << endl;

    // Sum of all even numbers from 1 to n.
    int evenSum = 0;
    for (int i = 1; i <= 10; i++){
        if (i % 2 == 0){
            evenSum += i;
        }
    }
    cout << evenSum << endl;

    int cont = 10;
    int i = 1;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= cont);
    cout << endl;
    

    // Check if a number is prime or not.
    int primeNum;
    cout << "Enter any number: ";
    cin >> primeNum;
    for (int i = 2; i <= (primeNum - 1); i++){
        if (primeNum % i == 0){
            cout << "It is not a prime number.";
        }
        else{
            cout << "It is a prime number.";
        }
    }

    return 0;
}
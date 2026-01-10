#include<iostream>
using namespace std;
int main(){
    // Square pattern.
    int sqrPtrn = 3;
    for (int i = 0; i < sqrPtrn; i++){
        for (int j = 0; j < sqrPtrn; j++){
            cout << j << "  ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < sqrPtrn; i++){
        for (int j = 0; j < sqrPtrn; j++){
            cout << "*  ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < sqrPtrn; i++){
        char chSqr = 'A';
        for (int j = 0; j < sqrPtrn; j++){
            cout << chSqr << "  ";
            chSqr++;
        }
        cout << endl;
    }
    cout << endl;

    int num = 1;
    for (int i = 0; i < sqrPtrn; i++){
        for (int j = 0; j < sqrPtrn; j++){
            cout << num << "  ";
            num++;
        }
        cout << endl;
    }
    cout << endl;

    char chSqr = 'A';
    for (int i = 0; i < sqrPtrn; i++){
        for (int j = 0; j < sqrPtrn; j++){
            cout << chSqr << "  ";
            chSqr++;
        }
        cout << endl;
    }
    cout << endl;


    // Triangle pattern.
    int triPtrn = 4;
    for (int i = 0; i < triPtrn; i++){
        for (int j = 0; j < i+1; j++){
            cout << "*  ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < triPtrn; i++){
        for (int j = 0; j < i+1; j++){
            cout << i+1 << "  ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < triPtrn; i++){
        for (int j = 0; j < i+1; j++){
            cout << j+1 << "  ";
        }
        cout << endl;
    }
    cout << endl;

    char triChar = 'A';
    for (int i = 0; i < triPtrn; i++){
        for (int j = 0; j < i+1; j++){
            cout << triChar << "  ";
        }
        triChar++;
        cout << endl;
    }
    cout << endl;

    return 0;
}
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

    // Reverse triangle pattern.
    for (int i = 0; i < triPtrn; i++){
        for (int j = i + 1; j > 0; j--){
            cout << j << "  ";
        }
        cout << endl;
    }
    cout << endl;


    // Reverse triangle char pattern.
    for (int i = 0; i < triPtrn; i++){
        char triRev = 'A' + i;
        for (int j = 0; j <= i; j++){
            cout << triRev << "  ";
            triRev--;
        }
        cout << endl;
    }
    cout << endl;


    // Floyd's triangle pattern.
    int fldPtrn = 1;
    for (int i = 0; i < triPtrn; i++){
        for (int j = 0; j <= i; j++){
            cout << fldPtrn << "  ";
            fldPtrn++;
        }
        cout << endl;
    }
    cout << endl;


    // Floyd's triangle char pattern.
    char fldChar = 'A';
    for (int i = 0; i < triPtrn; i++){
        for (int j = 0; j <= i; j++){
            cout << fldChar << "  ";
            fldChar++;
        }
        cout << endl;
    }
    cout << endl;


    // Inverted triangle pattern.
    for (int i = 0; i < triPtrn; i++){
        // Spaces.
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        // Numbers.
        for (int k = 0; k < triPtrn-i; k++){
            cout << i+1;
        }
        cout << endl;
    }
    cout << endl;

    char invrPtrn = 'A';
    for (int i = 0; i < triPtrn; i++){
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        for (int k = 0; k < triPtrn - i; k++){
            cout << invrPtrn;
        }
        invrPtrn++;
        cout << endl;
    }
    cout << endl;


    // Pyramid pattern.
    for (int i = 0; i < triPtrn; i++){
        // spaces. -> triPtrn - i - 1
        for (int j = 0; j < triPtrn-i-1; j++){
            cout << " ";
        }
        // num1. -> i + 1
        for (int k = 1; k <= i+1; k++){
            cout << k;
        }
        // num2.
        for (int l = i; l >= 1; l--){
            cout << l;
        }
        cout << endl;
    }
    cout << endl;


    // Hollow diamond pattern.
    int hlwDmd = 4;
    // top
    for ( int i = 0; i < hlwDmd; i++){
        for (int j = 0; j < hlwDmd-i-1; j++){
            cout << " ";
        }
        cout << "*";
        
        if (i != 0){
            for (int l = 0; l < 2*i-1; l++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;

        
    }

    // bottom
    for (int i = 0; i < hlwDmd - 1; i++){
        for (int j = 0; j < i+1; j++){
            cout << " ";
        }
        cout << "*";
        
        if (i != hlwDmd-2){
            for (int j = 0; j < 2*(hlwDmd-i) - 5; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
#include<iostream>
#include<climits>
using namespace std;


// Pass by reference
void changeArr(int arr[], int size){
    cout << "In function" << endl;
    for (int i = 0; i < size; i++){
        arr[i] = 2 * arr[i];
    }
}

int main(){
    int marks[5] = {99, 89, 76, 68, 93};
    double price[] = {199.99, 59.89, 100.99};

    cout << marks[0] << endl;

    marks[0] = 72;

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    cout << endl;

    cout << price[0] << endl;
    cout << price[1] << endl;
    cout << price[2] << endl;

    cout << endl;

    // Find size of an array:
    cout << sizeof(marks) / sizeof(int) << endl;

    cout << endl;

    // Loop on arrays: 0 to size - 1.
    int size = 5;
    for (int i = 0; i < size; i++){
        cout << marks[i] << endl;
    }

    cout << endl;

    // Taking array input using loops.
    int arrSize = 5;

    int mainArray[arrSize];
    for (int i = 0; i < arrSize; i++){
        cin >> mainArray[i];
    }
    for (int i = 0; i < arrSize; i++){
        cout << mainArray[i] << endl;
    }

    cout << endl;

    // Find smallest/largest in an array.
    int intArr[5] = {56, 23, 65, -12, 78};
    int sizeArr = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    // Method 1.
    for (int i = 0; i < sizeArr; i++){
        if (intArr[i] < smallest){
            smallest = intArr[i];
        }
    }
    for (int i = 0; i < sizeArr; i++){
        if (intArr[i] > largest){
            largest = intArr[i];
        }
    }
    cout << "Smallest num: " << smallest << endl;
    cout << "Largest num: " << largest << endl;

    cout << endl;

    // Method 2.
    for (int i = 0; i < sizeArr; i++){
        smallest = min(intArr[i], smallest);
        largest = max(intArr[i], largest);
    }
    cout << "Smallest num: " << smallest << endl;
    cout << "Largest num: " << largest << endl;

    cout << endl;


    // Find smallest/largest element's index of an array.
    int idxArr[] = {4, 5, 3, 45, 9};
    int idxSize = 5, smallestIdx = 0, largestIdx = 0;
    for (int i = 0; i < idxSize; i++){
        if (idxArr[i] < idxArr[smallestIdx]){
            smallestIdx = i;
        }
    }
    for (int i = 0; i < idxSize; i++){
        if (idxArr[i] > idxArr[largestIdx]){
            largestIdx = i;
        }
    }
    cout << smallestIdx << endl;
    cout << largestIdx << endl;

    cout << endl;

    // Pass by reference
    int psByRfrnc[] = {1, 2, 3};
    changeArr(psByRfrnc, 3);
    cout << "In main\n";
    for (int i = 0; i < 3; i++){
        cout << psByRfrnc[i] << " ";
    }
    cout << endl;

    return 0;
}
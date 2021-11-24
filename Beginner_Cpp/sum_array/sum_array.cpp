// Prompts the user for length of array and inputs each index

#include <iostream>
using namespace std;

int main(){
    int size;
    int sum;

    cout << "\nWhat is the size of your array? ";
    cin >> size;
    int array[size];

    cout << "\nWhat are the values for each index? \n";
    for (int i=0; i<size; i++) {
        cin >> array[i];
    }

    for (int i=0; i<size; i++) {
        sum += array[i];
    }

    cout << "\nThe values of each index is: ";
    for (int i = 0; i<size; i++) {
        cout << array [i] << " ";
    }
    cout << "\nThe sum of values in the array is: " << sum;
}
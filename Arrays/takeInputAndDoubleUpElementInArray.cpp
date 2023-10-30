#include <iostream>
using namespace std;


const int MAX_SIZE = 100;


//Taking Inputs in an array 
void takeInputInArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << "Enter your " << i+1 << "th Element : " ;
        cin >> arr[i];
        if (cin.fail()) {
            cerr << "Invalid input. Please enter an integer." << endl;
            exit(1);
        }
    }
}
//Printing an Array
void printArray(int arr[], int size){
    cout << "The elements in your array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}

//Doubleing every element in an Array 
void doubleAllElemet (int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
    
}


int main(){
    int arr[MAX_SIZE];
    int size;
    cout <<"Enter the length of your array : ";
    cin >> size;
    if (cin.fail()) {
            cerr << "Invalid input. Please enter an integer." << endl;
            exit(1);
    }
    if (size <= 0 || size > MAX_SIZE) {
        cout << "Enter a valid array length between 1 and " << MAX_SIZE << endl;
        return 1; // Returning a non-zero value to indicate an error
    }

    
    takeInputInArray(arr,size);
    doubleAllElemet(arr,size);
    printArray(arr,size);

    return 0;
}
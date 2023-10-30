//Question : Sum all the Element preasent in an Array
#include <iostream>
using namespace std;

const int MAX_ARRAY_SIZE = 100;

//Taking input in an Array 
void takeInputInArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << "Enter your : " << i+1 << "th element in the Array : ";
        cin >> arr[i];
        if(cin.fail()){
            cout << "Invalid input. Pleas enter an integer" << endl;
            exit(1);
        }
    }
}

//Sum all the Element in the Array 
void sumAllTheElementInArray(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum = sum + arr[i];
    }
    cout << "The Sum of all the Elements in your array is : " << sum <<  endl;
}

int main(){
    int arr[MAX_ARRAY_SIZE];
    int size;
    cout<<"Enter the size of your Array : ";
    cin>>size;
    if(cin.fail()){
        cout << "Invalid input. Enter an valid integer " << endl;
        return 1;
    }
    if(size <= 0 || size > MAX_ARRAY_SIZE){
        cout << "Enter a valid length of array size betwen 1 to " << MAX_ARRAY_SIZE << endl;
        return 1;
    }
    takeInputInArray(arr,size);
    sumAllTheElementInArray(arr,size);
    return 0;
}
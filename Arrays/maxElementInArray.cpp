#include <iostream>
#include <limits.h>
using namespace std;

//Function to find the maximum element in the array
void findMaxElement(int arr[], int size){
    if(size <= 0){
        cout <<"The Array is Empty give an non-Empty Array" << endl;
        return;
    }
    int max = INT_MIN;
    for(int i = 0; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    cout << "The max Element in the Array is: " << max <<endl;
}

int main(){
    int arr[] = {-1,-2,-13,-4};
    int size = 4;
    findMaxElement(arr,size);

}
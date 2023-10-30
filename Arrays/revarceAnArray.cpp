#include <iostream>
using namespace std;


void printAnArray(int arr[],int size){
    cout << "Your Array : " ;
    for (int i = 0; i < size; i++)
    {
     cout << arr[i] << " " ;   
    }
    
}

void swapElementsInArray(int arr[], int elementOneIndex, int elementTwoIndex){
    int temp = arr[elementOneIndex];
    arr[elementOneIndex] = arr[elementTwoIndex];
    arr[elementTwoIndex] = temp;
}

void reverseAnArray(int arr[], int size){
    for (int i = 0; i < size/2; i++)
    {
        swapElementsInArray(arr,i,(size-i-1));
    }
    
}
//
int main(){
    int arr[] = {1,4,6,7,0,1,3};
    int size = 7;
    reverseAnArray(arr,size);
    printAnArray(arr,size);
}
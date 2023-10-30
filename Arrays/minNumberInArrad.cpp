#include <iostream>
#include <libc.h>
using namespace std;

void findTheMinNumber(int arr[], int size){
    int minNumber = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] < minNumber){
            minNumber = arr [i];
        }
    }
    
    cout << " So the min umberd in the array is : "<<minNumber << endl;
}

int main()
{
    int arr[] = {1,4,6,7,0,1,3,4,};
    int size = 7;
    findTheMinNumber(arr,size);

    return 0;
}

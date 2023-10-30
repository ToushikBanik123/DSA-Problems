#include <iostream>
using namespace std;

//Finding an Unique Element in an array on Singler Element in an Array
int findUniqueElementInArray(int arr[], int size){
    int uniqueElement  = 0;
    for (int i = 0; i < size; i++)
    {
        uniqueElement = uniqueElement ^ arr[i];
    }
    return uniqueElement;
}

int main(){
    int size = 9;
    int arr[] = {2,10,11,10,2,13,15,13,15};
    int uniqueElement  = findUniqueElementInArray(arr,size);
    cout << "So the unique element in an array is : " << uniqueElement << endl;
    return 0;
}
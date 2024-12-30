#include <iostream>
using namespace std;

// Function to sort an array using pointers
int* sortArray(int* arr, int size) {
        for(int i=0;i<size-1;i++) {
                for(int j=0;j<size-i-1;j++) {
                        if(*(arr+j)>*(arr+j+1)) {
                                //Swapping the elements
                                int temp=*(arr+j);
                                *(arr+j)=*(arr+j+1);
                                *(arr+j+1)=temp;
                        }
                }
        }
        return arr;
}

int main() {
        int arr[10]={12,4,7,9,5,2,10,8,3,6};
        int size=sizeof(arr)/sizeof(arr[0]);
        //Print the original array
        cout<<"Original Array: ";
        for(int i=0;i<size;i++) cout<<arr[i]<<" ";
        cout<<endl;
        int* sortedArray=sortArray(arr,size);
        //Print the sorted array
        cout<<"Sorted Array: ";
        for(int i=0;i<size;i++) cout<<*(sortedArray+i)<<" ";
        cout<<endl;
        return 0;
}


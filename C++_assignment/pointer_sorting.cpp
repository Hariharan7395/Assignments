#include <iostream>
using namespace std;

// Function to sort an array using pointers
int* sortArray(int* array, int size) {
        for(int i=0;i<size-1;i++) {
                for(int j=0;j<size-i-1;j++) {
                        if(*(array+j)>*(array+j+1)) {
                                //Swapping the elements
                                int temp=*(array+j);
                                *(array+j)=*(array+j+1);
                                *(array+j+1)=temp;
                        }
                }
        }
        return array;
}

int main() {
        int array[10]={12,4,7,9,5,2,10,8,3,6};
        int size=sizeof(array)/sizeof(array[0]);
        //Print the original array
        cout<<"Original Array: ";
        for(int i=0;i<size;i++) cout<<array[i]<<" ";
        cout<<endl;
        int* sortedArray=sortArray(array,size);
        //Print the sorted array
        cout<<"Sorted Array: ";
        for(int i=0;i<size;i++) cout<<*(sortedArray+i)<<" ";
        cout<<endl;
        return 0;
}


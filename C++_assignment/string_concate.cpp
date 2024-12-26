#include <iostream>
using namespace std;

// Function to concatenate two strings
void concatenateStrings(char* str1,char* str2,char* result){
        // Copy characters of str1 to result
        int i=0;
        while(str1[i] != '\0'){
                result[i]=str1[i];
                i++;
        }
        // Copy characters of str2 to result
        int j = 0;
        while(str2[j]!='\0') {
                result[i+j]=str2[j];
                j++;
        }
        result[i + j]='\0';
}

int main(){
        char str1[] = "Programming";
        char str2[] = " is awesome.";
        int size1=sizeof(str1)/sizeof(str1[0]);
        int size2=sizeof(str2)/sizeof(str2[0]);
        char result[size1+size2-1]; 
        //Calling the concatenate function
        concatenateStrings(str1,str2,result);
        //Print the result
        cout<<"Concatenated String:"<<result<<endl;
        return 0;
}


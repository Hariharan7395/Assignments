#include <iostream>
using namespace std;

// Function to concatenate two strings
void concatenateStrings(char* string1, char* string2, char* result){
        // Copy characters of string1 to result
        int i = 0;
        while(string1[i] != '\0'){
                result[i] = string1[i];
                i++;
        }
        // Copy characters of string2 to result
        int j = 0;
        while(string2[j] != '\0') {
                result[i + j] = string2[j];
                j++;
        }
        result[i + j] = '\0';
}

int main(){
        char string1[] = "Programming";
        char string2[] = " is awesome.";
        int size1 = sizeof(string1) / sizeof(string1[0]);
        int size2 = sizeof(string2) / sizeof(string2[0]);
        char result[size1 + size2 - 1]; 
        // Calling the concatenate function
        concatenateStrings(string1, string2, result);
        // Print the result
        cout << "Concatenated String: " << result << endl;
        return 0;
}


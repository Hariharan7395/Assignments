#include <bits/stdc++.h>
using namespace std;

//Function to capitalize the first letter of each word
string capitalizeWords(string &line){
        stringstream ss(line);
        string word;
        string result;
        while(ss >> word) {
                if(!word.empty()){
                        word[0]=toupper(word[0]);  // Capitalize the first letter
                }
                result=result+word+" ";
        }
        if(!result.empty()){
                result.pop_back(); // Remove the trailing space
        }
        return result;
}

int main() {
        string inputFile="file_in.txt";
        string outputFile="file_out.txt";
        // Open the input and output files
        ifstream inFile(inputFile);
        ofstream outFile(outputFile);
        if(!inFile.is_open()){
                cout <<"Could not open input file"<<endl;
                return 1;
        }
        if(!outFile.is_open()){
                cout <<"Could not open output file"<<endl;
                return 1;
        }
        string line;
        // Read the input file line by line
        while (getline(inFile, line)) {
                string modifiedLine = capitalizeWords(line);
                outFile << modifiedLine << endl;            // Write to output file
        }
        inFile.close();
        outFile.close();
        cout << "The output file is ready" << endl;
        return 0;
}


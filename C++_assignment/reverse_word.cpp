#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
        string sentence;
        getline(cin,sentence);
        stringstream ss(sentence);
        string word;
        vector<string> words;
        //Extract words and store them in vector
        while(ss>>word){
                words.push_back(word);
        }
        //Reversing the vector
        reverse(words.begin(),words.end());
        //Output the words in reverse order
        for(auto word_out:words){
                cout<<word_out<<" ";
        }
        return 0;
}


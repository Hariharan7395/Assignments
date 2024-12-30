#include<bits/stdc++.h>
using namespace std;

int main(){
        stack<int>myStack;
        //Initial stack elements
        myStack.push(6);
        myStack.push(7);
        myStack.push(2);
        myStack.push(1);
        //Push operation: Adding 4 to the top of the stack
        cout<<"Pushing 4 onto the stack\n";
        myStack.push(4);
        //Display the stack after pushing 4
        cout<<"Stack after pushing 4:\n";
        stack<int>tempStack=myStack;
        while(!tempStack.empty()){
                cout<<tempStack.top()<<endl;
                tempStack.pop();
        }
        //Pop operation: Removing the top element (4) from the stack
        cout<<"\nPopping the top element\n";
        myStack.pop();
        //Display the stack after popping the top element
        cout<<"Stack after popping the top element:\n";
        tempStack=myStack;
        while(!tempStack.empty()){
                cout<<tempStack.top()<<endl;
                tempStack.pop();
        }
        return 0;
}


#include<iostream>
using namespace std;

class Stack {
private:
    int* array;           // Array to store stack elements
    int capacity;         // Maximum capacity of the stack
    int top;              // Index of the top element

public:
    // Constructor to initialize stack
    Stack(int size) {
        capacity = size;
        array = new int[capacity];  // Dynamically allocating memory for stack
        top = -1;                   // Initializing top as -1 (empty stack)
    }

    // Destructor to free allocated memory
    ~Stack() {
        delete[] array;  // Free dynamically allocated memory
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to check if the stack is full
    bool isFull() {
        return top == capacity - 1;
    }

    // Function to push an element onto the stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow" << endl;
            return;
        }
        array[++top] = value;  // Increment top and insert the element
        cout << value << " pushed to stack" << endl;
    }

    // Function to pop an element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return -1;  
        }
        return array[top--];  // Return top element and decrement top
    }

    // Function to get the top element of the stack
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;  
        }
        return array[top];
    }

    // Function to display stack elements
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

// Main function
int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;
    Stack stack(size);  // Creating a stack with user-defined capacity
    int choice, value;
    do {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                cout << stack.pop() << " popped from stack" << endl;
                break;
            case 3:
                cout << "Top element is " << stack.peek() << endl;
                break;
            case 4:
                stack.display();
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    } while (choice!= 5);
    return 0;
}


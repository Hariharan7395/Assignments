#include <bits/stdc++.h>
using namespace std;

//Structure for creating a node
struct Node{
        int data;
        Node* next;
};

// Function to add a new node
void append(Node** head,int data){
        Node* newnode=new Node();
        newnode->data=data;
        newnode->next=nullptr;
        //If the list is empty, make the new node the head
        if(*head==nullptr){
                *head=newnode;
        }
        else{
                Node* temp=*head;
                while(temp->next!=nullptr){
                        temp=temp->next;
                }
                temp->next = newnode;
        }
}

// Function to print the linked list
void print_list(Node* head){
        Node* temp=head;
        while(temp != nullptr){
                cout<<temp->data<< " ";
                temp=temp->next;
        }
        cout<<endl;
}

// Function to do the sorting (Bubble Sort)
void bubblesort(Node** head){
        if(*head==nullptr){
                return;
        }
        bool swapped;
        Node* ptr1;
        Node* lptr=nullptr;
        do{
                swapped=false;
                ptr1=*head;
                while(ptr1->next != lptr) {
                        if(ptr1->data>ptr1->next->data) {
                                //Swapping the data
                                int temp=ptr1->data;
                                ptr1->data = ptr1->next->data;
                                ptr1->next->data = temp;
                                swapped = true;
                        }
                        ptr1 = ptr1->next;
                }
                lptr = ptr1;
        }while(swapped);  
}

int main(){
        Node* head = nullptr;
        // Input array
        int arr[]={50, 34, 67, 2, 81, 46};
        int array_size=sizeof(arr) / sizeof(arr[0]);
        //Creating a linked list from the input array
        for(int i=0;i<array_size;i++) {
                append(&head,arr[i]);
        }
        //To print the original linked list
        cout << "The original linked list is: ";
        print_list(head);
        //Sorting the linked list using Bubble Sort
        bubblesort(&head);
        //Printing the sorted list
        cout << "The sorted linked list is: ";
        print_list(head);
        return 0;
}


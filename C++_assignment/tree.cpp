#include <iostream>
using namespace std;

//Structure for a node
struct Node{
        int data;
        Node* left;
        Node* right;
        // Constructor to initialize the node
        Node(int val){
                data=val;
                left=nullptr;
                right=nullptr;
        }
};

// Function to insert a node in the BST
Node* insert(Node* root,int data){
        if(!root){
                return new Node(data);
        }
        if(data < root->data){
                root->left = insert(root->left,data);
        }
        else{
                root->right = insert(root->right, data);
        }
        return root;
}

//Pre-order traversal (Root, Left, Right)
void preOrder(Node* root){
        if(root){
                cout<< root->data <<" ";
                preOrder(root->left);
                preOrder(root->right);
        }
}

//Post-order traversal (Left, Right, Root)
void postOrder(Node* root){
        if(root){
                postOrder(root->left);
                postOrder(root->right);
                cout<<root->data<<" ";
        }
}

// In-order traversal (Left, Root, Right)
void inOrder(Node* root){
        if(root){
                inOrder(root->left);
                cout<<root->data<<" ";
                inOrder(root->right);
        }
}

int main(){
        Node* root=nullptr;
        //Insert nodes into the BST
        int nodes[]={9,4,15,6,12,17,2};
        for(int i=0;i<7;i++){
                root = insert(root, nodes[i]);
        }
        //Output the Pre-order, Post-order and In-order traversals
        cout << "Pre-Order: ";
        preOrder(root);
        cout << endl;
        cout << "Post-Order: ";
        postOrder(root);
        cout << endl;
        cout << "In-Order: ";
        inOrder(root);
        cout << endl;
        return 0;
}


#include <iostream>
using namespace std;

class Node{
        public:
                int data;
                Node* left;
                Node* right;
                // Constructor to initialize the node
                Node(int val) {
                        data = val;
                        left = nullptr;
                        right = nullptr;
                }
};

class BST {
        private:
                Node* root;
                // Private helper function to insert a node
                Node* insert(Node* node, int data){
                        if(!node){
                                return new Node(data);
                        }
                        if(data < node->data){
                                node->left = insert(node->left, data);
                        } 
                        else{
                                node->right = insert(node->right, data);
                        }
                        return node;
                }

                // Pre-order traversal (Root, Left, Right)
                void preOrder(Node* node){
                        if (node){
                                cout << node->data << " ";
                                preOrder(node->left);
                                preOrder(node->right);
                        }
                }

                // Post-order traversal (Left, Right, Root)
                void postOrder(Node* node){
                        if (node){
                                postOrder(node->left);
                                postOrder(node->right);
                                cout << node->data << " ";
                        }
                }

                // In-order traversal (Left, Root, Right)
                void inOrder(Node* node){
                        if (node) {
                                inOrder(node->left);
                                cout << node->data << " ";
                                inOrder(node->right);
                        }
                }

        public:
                // Constructor to initialize the tree
                BST() : root(nullptr){}

                // Public method to insert a node
                void insert(int data) {
                        root = insert(root, data);
                }

                // Public method to perform Pre-order traversal
                void preOrder(){
                        cout << "Pre-Order: ";
                        preOrder(root);
                        cout << endl;
                }

                // Public method to perform Post-order traversal
                void postOrder(){
                        cout << "Post-Order: ";
                        postOrder(root);
                        cout << endl;
                }

                // Public method to perform In-order traversal
                void inOrder(){
                        cout << "In-Order: ";
                        inOrder(root);
                        cout << endl;
                }
};

int main() {
        BST bst;

        // Insert nodes into the BST
        int nodes[] = {9, 4, 15, 6, 12, 17, 2};
        for (int i = 0; i < 7; i++) {
                bst.insert(nodes[i]);
        }

        // Output the Pre-order, Post-order, and In-order traversals
        bst.preOrder();
        bst.postOrder();
        bst.inOrder();

        return 0;
}


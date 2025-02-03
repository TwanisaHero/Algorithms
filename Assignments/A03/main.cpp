//Antwan Taylor
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left, * right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};

class Bst {
private:
    Node* root;

    // Helper function to insert a node recursively
    void _insert(Node*& sub_root, int x) {
        if (!sub_root) {
            sub_root = new Node(x);
        }
        else if (x < sub_root->data) {
            _insert(sub_root->left, x);
        }
        else {
            _insert(sub_root->right, x);
        }
    }

    // Helper function to print the tree in reverse in-order
    void _print(Node* root) {
        if (!root) return;
        _print(root->right);
        cout << root->data << " ";
        _print(root->left);
    }

    // Helper function to find the minimum node in a subtree
    Node* _findMin(Node* sub_root) {
        while (sub_root->left) sub_root = sub_root->left;
        return sub_root;
    }

    // Helper function to delete a node recursively
    Node* _delete(Node* sub_root, int x) {
        if (!sub_root) return sub_root;

        if (x < sub_root->data) {
            sub_root->left = _delete(sub_root->left, x);
        }
        else if (x > sub_root->data) {
            sub_root->right = _delete(sub_root->right, x);
        }
        else {
            // Case 1: No child (leaf node)
            if (!sub_root->left && !sub_root->right) {
                delete sub_root;
                return nullptr;
            }
            // Case 2: One child (left or right)
            if (!sub_root->left) { // Only right child exists
                Node* temp = sub_root->right;
                delete sub_root;
                return temp;
            }
            else if (!sub_root->right) { // Only left child exists
                Node* temp = sub_root->left;
                delete sub_root;
                return temp;
            }
            // Case 3: Two children
            // Find the in-order successor (smallest node in right subtree)
            Node* temp = _findMin(sub_root->right);
            sub_root->data = temp->data; // Copy successor value to current node
            sub_root->right = _delete(sub_root->right, temp->data); // Delete the successor
        }
        return sub_root;
    }

public:
    Bst() { root = nullptr; }

    void insert(int x) {
        _insert(root, x);
    }

    void deleteNode(int x) {
        root = _delete(root, x);
    }

    void print() {
        _print(root);
    }
};

int main() {
    Bst tree;
    tree.insert(8);
    tree.insert(3);
    tree.insert(1);
    tree.insert(11);
    tree.insert(7);
    tree.insert(15);

    cout << "Tree before deletion:\n";
    tree.print();

    tree.deleteNode(3); // Deleting node with value 3

    cout << "\nTree after deleting 3:\n";
    tree.print();
}
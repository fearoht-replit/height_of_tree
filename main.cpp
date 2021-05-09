#include <iostream>

class Node{
public: 
  int data;
  Node* left;
  Node* right;

  Node(){
  }

  ~Node(){
  }
};

int tree_height(Node* root) {
    if (root == NULL) 
        return 0;
    else {
        int left_height = tree_height(root->left);
        int right_height = tree_height(root->right);
        return std::max(left_height, right_height) + 1;
    }
}

int main() {
  std::cout << "Hello World!\n";
}
//
//  main.cpp
//  BST
//
//  Created by Rasmi on 7/7/18.
//  Copyright © 2018 Rasmi. All rights reserved.
//

#include <iostream>
using namespace std;

class BST{
private:
    typedef struct Node{
        int key;
        Node *parent,*left, *right;
    }*nodeptr;
    nodeptr root;
    
public:
    BST();
    ~BST();
    void insert(struct node* root, int addvalue);
    void remove(int delvalue);
    void Inorder_tree_walk(Node *parent);
    void preorder_tree_walk();
    void postorder_tree_walk();
    Node *search(int lookval);
    void remove_tree();
    
};
BST::BST(){
    root=NULL;
}

void::BST:: Inorder_tree_walk(Node *parent){
    if(parent!=NULL){
        Inorder_tree_walk(parent->right);
        cout<<parent<<endl;
        Inorder_tree_walk(parent->left);
    }
}

void::BST::insert(struct node* node, int addvalue){
    if(node==NULL){
        node->key=addvalue;
    }
    else{}
    
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

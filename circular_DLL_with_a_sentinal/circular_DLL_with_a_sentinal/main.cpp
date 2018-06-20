//
//  main.cpp
//  circular_DLL_with_a_sentinal
//
//  Created by Rasmi on 6/16/18.
//  Copyright © 2018 Rasmi. All rights reserved.
//

#include <iostream>
class Circular_DLL{
private:
    typedef struct Node{
        int key;
        Node* next;
        Node * prev;
    }*nodeptr;
    nodeptr head;
    nodeptr tail;
    nodeptr curr;
public:
    Node * search(int lookdata);
    void Insert(int adddata);
    void remove(int deldata);
    void traverse_back();
    void traverse_front();
};
void Circular_DLL::remove(int deldata){
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

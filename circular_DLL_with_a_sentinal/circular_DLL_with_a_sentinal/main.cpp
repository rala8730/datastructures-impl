//
//  main.cpp
//  circular_DLL_with_a_sentinal
//
//  Created by Rasmi on 6/16/18.
//  Copyright © 2018 Rasmi. All rights reserved.
//

#include <iostream>
using namespace std;
class Circular_DLL{
private :
    typedef struct Node{
        int key;
        Node* next;
        Node * prev;
    }*nodeptr;
    Node *sentinal=NULL;
    
    
public:
    
    Circular_DLL();
    ~Circular_DLL();
    Node *search(int lookdata);
    void Insert(int adddata);
    void remove(int deldata);
    void traverse_back();
    void traverse_front();
};
Circular_DLL::Circular_DLL(){
    //sentinal->key=NULL;
    //sentinal->next=sentinal->prev=sentinal;
}
Circular_DLL::~Circular_DLL(){}
void Circular_DLL::Insert(int adddata){
    nodeptr n= new Node;
    n->key=adddata;
    n->next=sentinal->next;
    sentinal->next->prev=n;
    sentinal->next=n;
    n->prev=sentinal;
}
Circular_DLL :: Node *Circular_DLL :: search(int lookdata){
    nodeptr n=new Node;
    n=sentinal->next;
    while (n->next!=sentinal & n->key!=lookdata) {
        n=n->next;
    }
    return n;
}
void Circular_DLL::remove(int deldata){
    nodeptr n=new Node;
    n=search(deldata);
    n->prev->next=n->next;
    n->next->prev=n->prev;
}
void Circular_DLL::traverse_back(){
    nodeptr n= new Node;
    n=sentinal->prev;
    while (n->prev!=sentinal) {
        cout<<n->key<<endl;
        n=n->prev;
    }
}
void Circular_DLL::traverse_front(){
    nodeptr n= new Node;
    n=sentinal->next;
    while (n->next!=sentinal) {
        cout<<n->key<<endl;
        n=n->next;
    }
}

int main(int argc, const char * argv[]) {
    Circular_DLL mylist;
    int arr[]={1,3,4,2,5};
    for(int i=0; i<4; i++){
        mylist.Insert(arr[i]);
    }
    mylist.traverse_back();
    return 0;
}

//
//  main.cpp
//  Doubly_linked_list
//
//  Created by Rasmi on 6/14/18.
//  Copyright © 2018 Rasmi. All rights reserved.
//

#include <iostream>
using namespace std;
class Doubly_linked_list{
private:
    typedef struct Node{
        int key;
        Node *next, *prev;
    }*nodeptr;
    nodeptr head;
    nodeptr tail;
    nodeptr curr;
    
public:
    Doubly_linked_list();
    ~Doubly_linked_list();
    Node *search(int lookval);
    void list_insert_front(int adddata);
    void list_delete(int deldata);
    void traverse_backward();
    void traverse_forward();
};
Doubly_linked_list::Doubly_linked_list(){
    head=NULL;
    tail=NULL;
    curr=NULL;
}
Doubly_linked_list::~Doubly_linked_list(){}

//This function is simply inserting in the front of the list
void Doubly_linked_list::list_insert_front(int adddata){
    nodeptr temp=new Node;
    temp->key=adddata;
    temp->prev=NULL;
    temp->next=head; //temp is pointing to head
    if(head!=NULL){//if list exist
        head->prev=temp;//head previous pointer points to temp
    }
    head=temp;//temp becomes new head
    cout<<adddata<<": is added in the front "<<endl;
    
}

//this function is searching if the lookval exist if it does it returns the node
 Doubly_linked_list::Node *Doubly_linked_list::search(int lookval){
    nodeptr n=head;
     
    while(n!=NULL && n->key!=lookval){//using the while loop to move the pointer n to lookval's node
        n=n->next;
    }
    if(n==NULL){//if lookval not found it returns null
        cout<<lookval<<": is not found"<<endl;
        return NULL;
        
    }else{//if lookval is found returns the n node;
        return n;
    }
}

void Doubly_linked_list::list_delete(int deldata){
    nodeptr delptr=search(deldata);//getting acces to searched node n from search function
        if(delptr->prev!=NULL){//if the delptr is not head
        delptr->prev->next=delptr->next;//the pointer that points from left(-->) is pointing to next of delptr
    }
    else{
        head=delptr->next;//if it is head then head is pointing to next node
    }
    if(delptr->next!=NULL){//it delpter is not the last element
        delptr->next->prev=delptr->prev;// the pointer that points from right(<--) is pointing to prev of delptr
    }
    cout<<deldata<<": is deleted"<<endl;
}
//this function just traaverse the list forward
void Doubly_linked_list::traverse_forward(){
    curr=head;
    while(curr!=NULL){
        cout<<curr->key<<" ";
        curr=curr->next;
    }
    cout <<" is the list"<<endl;
}
void Doubly_linked_list::traverse_backward(){
    curr=tail;
    cout<<tail<<endl;
    while(curr!=NULL){
        cout<<curr->key<<" "<<tail<<" ";
        curr=curr->prev;
    }
    cout <<endl;
    cout<<"end of traverse backward"<<endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Doubly_linked_list mylist;
    mylist.list_insert_front(8);
    mylist.list_insert_front(0);
    mylist.list_insert_front(3);
    mylist.list_insert_front(1);
    
    mylist.traverse_forward();
    mylist.search(0);
    mylist.search(5);
    
    mylist.list_delete(0);
    mylist.list_delete(1);
    mylist.list_delete(8);
    
    mylist.traverse_forward();
    
    mylist.search(67);
    
    mylist.list_insert_front(2);
    mylist.list_insert_front(0);
    
    mylist.traverse_forward();

    mylist.list_delete(3);
    mylist.list_delete(0);
    mylist.list_delete(2);
    mylist.list_delete(8);
    
    mylist.traverse_forward();
    mylist.traverse_backward();
    
    
    return 0;
}

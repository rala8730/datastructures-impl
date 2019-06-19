//
//  main.cpp
//  Linked_List
//
//  Created by Rasmi on 5/17/18.
//  Copyright © 2018 Rasmi. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;


class singly_Linked_list{
    int key;
private:
    typedef struct Node{ //
        int key;//integer value
        Node *next; //node pointer that point to next or previous node
    }* nodePtr;
    
    //creating nodepointer
    nodePtr head;
    nodePtr curr;
    nodePtr tmp;

    
public://function goes here
    singly_Linked_list();
    void printlist();
    void insert(int adddata);
    void remove(int deldata);
    bool search(int serdata);
    
};
singly_Linked_list::singly_Linked_list(){
    head=NULL;
    curr=NULL;
    tmp=NULL;
}
void singly_Linked_list :: printlist(){
    curr=head;
    while(curr!=NULL){
        cout<<curr->key<<endl;
        curr=curr->next;
    }
    
}
void singly_Linked_list::insert(int adddata){
                           //_   ______________
    nodePtr n=new Node; // |n|->|prev|key|next|
                        //  ```   ``````````````
    n->next=NULL;
    n->key=adddata;
    //if list exist
    if(head!=NULL){
        curr=head;
        while(curr->next!=NULL){ //adds to the end of the list
            curr= curr->next;
        }
        curr->next=n;
    }
    //if list doesnot exit
    else{
        head=n; //head is pointing where t is pointing
    }
}
void singly_Linked_list::remove(int deldata){
    nodePtr delptr;
    curr=head;
    tmp=head;
    //exiting when curr is equal to null(end of the list) or key value =deldata
    while(curr!=NULL && curr->key!=deldata){
        tmp=curr;
        curr=curr->next;
    }
    //if cur is null(end of list) just delete the deldata pointer
    if(curr==NULL){
        cout<<deldata<<" was not in the list"<<endl;
    }
    //if the value deldata is found then remove it and patch the list
    else{
        delptr=curr;
        curr=curr->next;
        tmp->next=curr;
        if(delptr==head){
            head=head->next;
        }
        delete delptr;
        cout<<deldata<<" is deleted"<<endl;
    }
    
    
}
bool singly_Linked_list::search(int serdata){
    curr=head;
    while(curr!=NULL && curr->key!=serdata){
        curr= curr->next;
    }
    if(curr==NULL){
        return false;
    }
    else{
        return true;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    singly_Linked_list Nilesh;
    Nilesh.insert(2);
    Nilesh.insert(3);
    Nilesh.insert(5);
    Nilesh.insert(7);
    Nilesh.printlist();
    Nilesh.search(0);
    Nilesh.search(1);
    
    Nilesh.remove(0);
    Nilesh.printlist();
    
    Nilesh.remove(5);
    Nilesh.remove(2);
    Nilesh.printlist();
    
    return 0;
}

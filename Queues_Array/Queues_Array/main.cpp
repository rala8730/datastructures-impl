//
//  main.cpp
//  Queues_Array
//
//  Created by Rasmi on 5/16/18.
//  Copyright © 2018 Rasmi. All rights reserved.
//

#include <iostream>
#include <string>



using namespace std;
class Queues{
private:
    int max_queue;
    int number_of_element;
    int head,tail;
public:
    void Enqueue(int x);
    int Dequeue();
    bool IsEmpty();
    Queues();
    ~Queues();
    
};
Queues:: Queues(){
    max_queue=5;
    head=0;
    tail=0;
    number_of_element=0;
}
Queues::~Queues(){}
void Queues::Enqueue(int x){
   
    if(tail>=max_queue){
        cout<<"overflow"<<endl;
    }
    else{
        
        Q[tail]=x;
        tail=tail+1;
        cout<<x<<" : Enqued"<<"  tail is : "<<tail<<"  head is : " <<head<<endl;
    }
    
}
int Queues::Dequeue(){
    
        if(IsEmpty()){
            cout<<"underflow"<<endl;
            return false;
        }
    
    else{
        
        cout<<Q[head]<<" : dequeueing"<<endl;
        head=head+1;
        cout<<"head is : "<<head<<endl;
        return head;
    }
}
bool Queues::IsEmpty(){
    if(head==tail-1){
        return true;
    }
    else{
        return false;
    }

}

int main(int argc, const char * argv[]) {
    // insert code here...
    
     Queues q;
    q.Enqueue(5);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(0);
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Enqueue(2);
    
    return 0;
}

//
//  main.cpp
//  Queues_Array
//
//  Created by Rasmi on 5/16/18.
//  Copyright © 2018 Rasmi. All rights reserved.
//

#include <iostream>
#include <string>

#define Max 3

using namespace std;
class Queues{
    int Q[Max];
    int head,tail;
public:
    bool Enqueue(int x);
    int Dequeue();
    bool IsEmpty();
    Queues(){tail=0;head=0;}
    
};

bool Queues::Enqueue(int x){
    if(tail>=Max){
        cout<<"overflow"<<endl;
        return false;
    }
    else{
        Q[tail]=x;
        tail=tail+1;
        cout<<x<<" : Enqued"<<"  tail is : "<<tail<<"  head is : " <<head<<endl;
        return true;
        
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
        return true;
    }
}
bool Queues::IsEmpty(){
    if(head==tail){
        return true;
    }
    else{
        return false;
    }

}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    struct Queues q;
    q.Enqueue(5);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(0);
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    
    return 0;
}

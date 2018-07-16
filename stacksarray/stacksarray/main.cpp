//
//  main.cpp
//  stacksarray
//
//  Created by Rasmi on 5/15/18.
//  Copyright © 2018 Rasmi. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
#define Max 4

class Stack{
    int top;
public:
    int S[Max];
    Stack(){top =0;}
    void push(int x);
    int pop();
    bool isEmpty();
};

bool Stack:: isEmpty(){
    return top==0;
        
}
void Stack::push(int x){
    if (top== Max)
    {
        cout<<"stackoverflow"<<endl;
        
    }else{
        top= top+1;
        S[top]=x;
        cout<<x<<" : pushed"<<"  top is : "<<top<<endl;
    }
}

int Stack::pop(){
    if (isEmpty()){
        cout<<"stackunderflow"<<endl;
        return false;
    }
    else{
        cout<<S[top]<<" : poped"<<" top is : "<<top-1<<endl;
        top= top-1;
        int x=S[top+1];
        
        //cout<<x<<": x"<<endl;
        return x;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Stack s;
    /*s.push(10);
    s.push(20);
    s.push(11);
    s.push(22);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    */
    
    int A[5]={1,2,3,4,5};
    int B[5]={6,7,8,9,10};

    for(int i=0; i<5; i++){
        s.push( A[i]);
    }
    for(int i=0;i<5;i++){s.pop();}
    
    for(int i=0; i<5; i++){
        s.push( B[i]);
    }
    
    
    return 0;
}

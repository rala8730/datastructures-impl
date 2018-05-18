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
#define Max 2

class Stack{
    int top;
public:
    int S[Max];
    Stack(){top =0;}
    bool push(int x);
    int pop();
    bool isEmpty();
};

bool Stack:: isEmpty(){
    return (top<=0);
        
}
bool Stack::push(int x){
    if (top>= Max)
    {
        cout<<"stackoverflow"<<endl;
        return false;
        
    }else{
        top= top+1;
        S[top]=x;
        cout<<x<<" : pushed"<<"  top is : "<<top<<endl;
        return true;
    }
}

int Stack::pop(){
    if (isEmpty()){
        cout<<"stackunderflow"<<endl;
        return false;
    }
    else{
        cout<<S[top]<<" : poped"<<endl;
        top= top-1;
        int x=S[top];
        cout<<"now top is : "<<top<<endl;
        return x;
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    struct Stack s;
    s.push(10);
    s.push(20);
    s.push(11);
    s.push(22);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    
    return 0;
}

//
//  main.cpp
//  Hash_table
//
//  Created by Rasmi on 6/16/18.
//  Copyright © 2018 Rasmi. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;

/*
class Hashtable{
public:
    Hashtable();
    ~Hashtable();
    int hashsum(string key, int tablesize);
};
*/

int hashsum(string key, long tablesize){
    int sum=0;
    long index=key.length();
    for (int i=0; i<index;i++){
        cout<<key[i]<<" "<<(int)key[i]<<endl;
        sum=sum+key[i];
    }
    cout<<sum<<"%"<<tablesize<<endl;
    sum= sum % tablesize;
    cout<<sum<<endl;
    return sum;
}

int main(int argc, const char * argv[]) {
    //Hashtable hash;
    std::string key("Shawshank Redemption");

    hashsum(key,key.size());
    
    return 0;
}

//
//  main.cpp
//  The_HASH_TABLE_ADT
//
//  Created by Rasmi on 6/27/18.
//  Copyright © 2018 Rasmi. All rights reserved.
//

#include <iostream>
#include <list>
class Hashtable{
private:
    int tablesize;
    int hashtable[];
public:
    void init();
    void insert(int value);
    int search(int value);
    void remove(int value);
    void remove_table();
    
};
void Hashtable:: init(){}
void Hashtable::insert(int value){}
int Hashtable::search(int value){ return 0;}
void Hashtable::remove(int value){}
void Hashtable::remove_table(){}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

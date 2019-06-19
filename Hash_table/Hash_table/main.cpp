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

class movie{
public:
    string Title;
    int Ranking;
    int Year;

    int hashsum(string key, int tablesize);
};

int hashsum(string key, long tablesize){
    int sum=0;
    long index=key.length();
    for (int i=0; i<index;i++){
        //cout<<key[i]<<" "<<(int)key[i]<<endl;
        sum=sum+key[i];
    }
    //cout<<sum<<"%"<<tablesize<<endl;
    sum= sum % tablesize;
    //cout<<sum<<endl;
    return sum;
}

int main(int argc, const char * argv[]) {
    movie HashTable[50];
    movie m;//creating an instance of the movie
    m.Title="Shawshank Redemption";
    //using the index to store  movie "Shawshank Redemption"
    int index=hashsum(m.Title,7);
    HashTable[index]=m;
    cout<<index<<":index"<<endl;
    
    /*
    //retriving the record from a hash table perform the step in reverse
    index=hashsum("Shawshank Redemption", 50);//calculating hash value for key
    m=HashTable[index];// retriving the information at that index in the hash table
    */


    return 0;
}

#include<cstdlib>
#include<iostream>
#include<string>
#include "hash.h"

using namespace std;

hashMain::hashMain(){
    tableSize = 100;
}

int hashMain::Hash(string key){
    int hash = 0;
    int index;
    int size = key.length();

    for (int i = 0; i < size; i++){
        hash += (int)key[i];
        cout<< "Hash: "<< hash <<'\n';
    }

    index = hash % tableSize;

    return index;
}
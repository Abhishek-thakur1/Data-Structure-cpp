#include<cstdlib>
#include<iostream>
#include<string>
#include "hash.h"

using namespace std;

int hashMain::Hash(string key){
    int hash = 0;
    int index;

    index = key.length();

    for (int i = 0; i < index; i++){
        cout << i << " " << (int)key[i] << '\n';
    }

    return index;
}
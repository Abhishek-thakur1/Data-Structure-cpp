#include<cstdlib>
#include<iostream>
#include<string>

using namespace std;

#ifndef HASH_H
#define HASH_H

class hashMain{
    private:
        int tableSize;

    public:
        hashMain();
        int Hash(string key);
};

#endif
#include<cstdlib>
#include<iostream>
#include<string>

using namespace std;

#ifndef HASH_H
#define HASH_H

class hashMain{
    private:
        static const int tableSize = 20;
        
        struct Item {
            string name;
            string food;
            Item* next;
        };

        Item* Hashtable[tableSize];

    public:
        
        int Hash(string key);
};

#endif
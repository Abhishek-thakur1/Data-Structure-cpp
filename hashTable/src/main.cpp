#include<cstdlib>
#include<iostream>
#include<string>
#include "hash.cpp"

using namespace std;

int main(){

    int index;
    hashMain hashObj;
    index = hashObj.Hash("Cat");

    cout << "index- " << index << "\n";
}


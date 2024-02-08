#ifndef MapStorage_hpp
#define MapStorage_hpp
#include<bits/stdc++.h>
#include "Storage.hpp"
#include "Exceptions.hpp"

class MapStorage: public Storage{
private:
    map<string,string > storage;
    int capacity;

    bool is_storage_full() override{
        return (this->storage.size())== this->capacity;
    }

public:
    MapStorage(int capacity=0){
        this->capacity = capacity;
    }

    void add(string key, string value) override{
        if(this->is_storage_full()){
            throw StorageFullException();
        }
        this->storage[key]=value;
    }

    string get(string key) override{
        if(this->storage.count(key)==0){
            throw KeyNotFoundException();
        }
        return this->storage[key];
    }

    void update(string key, string value) override{
        if(this->storage.count(key)==0){
            throw KeyNotFoundException();
        }
        this->storage[key]=value;
    }

    void remove(string key) override{
        if(this->storage.count(key)==0){
            throw KeyNotFoundException();
        }
        this->storage.erase(key);
    }
};

#endif
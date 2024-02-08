#ifndef Cache_hpp
#define Cache_hpp

#include "bits/stdc++.h"
#include "MapStorage.hpp"
#include "LRU.hpp"
#include "Exceptions.hpp"

class Cache {
private:
    Storage *storage;
    EvictionPolicy *evictionPolicy;
public:
    Cache(){
        this->storage = nullptr;
        this->evictionPolicy = nullptr;
    }
    Cache(Storage *storage, EvictionPolicy *evictionPolicy){
        this->storage = storage;
        this->evictionPolicy = evictionPolicy;
    }
    void put(string key, string value){
        try{
            this->storage->add(key, value);
            this->evictionPolicy->key_accessed(key);
        }catch(StorageFullException &exp) {
            string evict_key = this->evictionPolicy->evict();
            this->storage->remove(evict_key);
            cout<<"Cache storage is full. Evicting key: "<<evict_key<<endl;
            put(key, value);
        }
    }

    string get(string key){
        string result;
        try {
            result = this->storage->get(key);
            this->evictionPolicy->key_accessed(key);
        }catch (KeyNotFoundException &e){
            cout<<"Key: "<<key<<" does not exist in cache"<<endl;
        }
        return result;
    }
};
#endif
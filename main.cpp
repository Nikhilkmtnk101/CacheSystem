#include <MapStorage.hpp>
#include <LRU.hpp>
#include <Cache.hpp>
#include <bits/stdc++.h>
using namespace std;

int main (){
    Storage *storage = new MapStorage(2);
    EvictionPolicy *evictionPolicy = new LRUEvictionPolicy();
    auto *cache = new Cache(storage, evictionPolicy);
    cache->put("Name", "Nikhil Kumar");
    cout<<cache->get("Name")<<endl;
    cache->put("Title", "Thakur");
    cout<<cache->get("Title")<<endl;
    cache->put("Company", "Coinswitch");
    cout<<cache->get("Company")<<endl;
}
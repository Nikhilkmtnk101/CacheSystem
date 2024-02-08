#ifndef Storage_hpp
#define Storage_hpp
#include<bits/stdc++.h>
class Storage{
private:
    virtual bool is_storage_full()=0;
public:
    virtual void add(string key, string value)=0;
    virtual string get(string key)=0;
    virtual void update(string key, string value)=0;
    virtual void remove(string key)=0;
};
#endif
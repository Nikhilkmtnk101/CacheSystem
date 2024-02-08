#ifndef LRUEvictionPolicy_hpp
#define LRUEvictionPolicy_hpp

#include "bits/stdc++.h"
#include "EvictionPolicy.hpp"
#include "DoublyLinkedList.hpp"

class LRUEvictionPolicy: public EvictionPolicy{
private:
    map<string, Node*> mapper;
    DoublyLinkedList *dll;
public:
    LRUEvictionPolicy(){
        dll= new DoublyLinkedList();
    }
    void key_accessed(string key) override{
        if (this->mapper.count(key)!=0){
            Node *node = this->mapper[key];
            this->dll->remove_node(node);
        }
        this->mapper[key] = this->dll->insert_node(key);
    }

    string evict() override{
        Node *head= this->dll->get_head();
        this->dll->remove_node(head);
        this->mapper.erase(head->get_data());
        return head->get_data();
    }

};
#endif
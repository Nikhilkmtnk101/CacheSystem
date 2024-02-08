#ifndef Node_hpp
#define Node_hpp

#include <bits/stdc++.h>

class Node {
private:
string data;
Node *left, *right;
public:
    Node(string data){
        this->data = data;
        this->left= this->right=nullptr;
    }

    void set_key(string key){
        this->data = key;
    }
    string get_data(){
        return this->data;
    }

    Node* get_left_node(){
        return this->left;
    }
    void set_left_node(Node *left_node){
        this->left = left_node;
    }

    Node* get_right_node(){
        return this->right;
    }
    void set_right_node(Node *right_node){
        this->right = right_node;
    }
};
#endif
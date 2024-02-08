#ifndef DoublyLinkedList_hpp
#define DoublyLinkedList_hpp

#include "Node.hpp"

class DoublyLinkedList {
private:
    Node *head;
public:
    DoublyLinkedList(){
        this->head=  nullptr;
    }

    Node* get_head(){
        return this->head;
    }

    Node* insert_node(string data){
        Node *node = new Node(data);
        node->set_right_node(this->head);
        this->head = node;
        return node;
    }

    void remove_node(Node *node){
        Node  *left, *right;
        left = node->get_left_node();
        right = node->get_right_node();
        if(left== nullptr && right== nullptr){
            this->head = nullptr;
            return;
        }
        if(left!= nullptr){
            left->set_right_node(right);
        }
        if(right!= nullptr){
            right->set_right_node(left);
        }
        node->set_right_node(nullptr);
        node->set_left_node(nullptr);
        if(left== nullptr){
            this->head = right;
        }
    }
};

#endif
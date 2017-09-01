/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedList.cpp
 * Author: bulmaro
 * 
 * Created on August 31, 2017, 9:26 AM
 */

#include <errno.h>
#include "LinkedList.h"

LinkedList::LinkedList() {
    root = last = 0;
}

LinkedList::LinkedList(const LinkedList& orig) {
    // TODO: May implement
}

LinkedList::~LinkedList() {
    Node * temp;
    for(Node * curr = root; curr != 0; curr = temp) {
        temp = curr -> next;
        delete curr;
    }
}

void LinkedList::add(int value) {
    if (root == 0) {
        root = last = new Node(value);
    }
    else {
        last = last->next = new Node(value);
    }
}

void LinkedList::del(int value) {
    // TODO: Take care of (last)!
    Node ** next_ptr = find(value);
    
    if (next_ptr == 0 || (*next_ptr) == 0 )
        return;
    
    Node * to_delete = * next_ptr;
    
    (* next_ptr) = ( * next_ptr ) -> next;
    
    delete to_delete;
}

Node** LinkedList::find(int value) {
    for(Node ** curr = &root; * curr != 0; curr = &((* curr)->next)) {
        if((*curr)->value == value)
            return curr;
    }
    return 0;
}

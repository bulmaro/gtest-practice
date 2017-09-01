/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedList.h
 * Author: bulmaro herrera
 *
 * Created on August 31, 2017, 9:26 AM
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
    public:
        Node * root;
        Node * last;    
        LinkedList();
        LinkedList(const LinkedList& orig);
        virtual ~LinkedList();
        void add(int);
        void del(int);
        Node ** find(int);
};

#endif /* LINKEDLIST_H */


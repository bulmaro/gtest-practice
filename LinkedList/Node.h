/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.h
 * Author: bulmaro
 *
 * Created on August 31, 2017, 2:16 PM
 */

#ifndef NODE_H
#define NODE_H

class Node {
    public:
        Node * next;
        int value;
        Node();
        Node(int n);
        Node(const Node& orig);
        virtual ~Node();
};

#endif /* NODE_H */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.cpp
 * Author: bulmaro
 * 
 * Created on August 31, 2017, 2:16 PM
 */

#include "Node.h"

Node::Node() {
}

Node::Node(const Node& orig) {
}

Node::Node(int n) {
    value = n;
    next = 0;
}


Node::~Node() {
}

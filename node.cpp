#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>
#include "node.h"

using namespace std;

Node::Node(Student* newstudent) { // assign the student this node is carrying in the constructor
  next = NULL;
  student = newstudent;
}
Node* Node::getNext() { // get the next node
  return next;
}
void Node::setNext(Node* newnext) { // set the next node
  next = newnext;
}
Student* Node::getStudent() { // get the student
  return student;
}
Node::~Node() { // destructor
  next = NULL;
  delete student;
}

#endif

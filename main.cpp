#include <iostream>
#include <cstring>
#include "node.h"

using namespace std;

int main() {
  Student* ayan = new Student(); // create student 1
  strcpy(ayan->name, "Ayan"); // set student 1 name

  Student* ehan = new Student(); // create student 2
  strcpy(ehan->name, "Ehan"); // set student 2 name
  
  Node* head = new Node(ayan); // first node carries student 1
  Node* head2 = new Node(ehan); // second node carries student 2
  
  head->setNext(head2); // next node in first node is second node
  
  cout << head->getNext()->getStudent()->name << endl; // obtain the name of student 2 using the first node
  
  return 0;
}

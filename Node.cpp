#include "Node.h"


Node::Node(Student *newStudent) {
  next = NULL;
  studentValue = newStudent;
}

Node::~Node(){
  delete &studentValue;
  next = NULL;
}

void Node::setStudent(Student * newStudent) {
  studentValue = newStudent;
}

char* Node::getStudent() {
  return studentValue -> getfirstName();
}

void Node::setNext(Node* newnext) {
  next = newnext;
}

Node* Node::getNext() {
  return next;
}

/*
Linked list class
*/
#ifndef _NODE_H_
#define _NODE_H_

class Node{
  public : 
    int data;
    Node *next;

    Node(int d){
      data = d;
      next = NULL;
    }
};

#endif
/*
You are given A which is the head of a linked list. Print
the linked list in space separated manner.

Note : The last node value must also be succeeded by a space and after 
printing the entire list you should print a new line
*/

#include <iostream>
#include <vector>

#include "LinkedList.h"

class PrintLinkedList{
  public:
    PrintLinkedList(){}
    ~PrintLinkedList(){}
    void printList(Node *head);
    void InsertAtLast(Node*& head, int data);
    void InsertInFront(Node*& head, int data);
    void InsertAtKthLoc(Node*& head, int k, int data);
    int getSize(Node*& head);
};

void PrintLinkedList::InsertAtLast(Node*& head, int data){
  Node *new_node = new Node(data);
  if(head == NULL){
    head = new_node;
    return;
  }
  Node *tmp = head;
  while(tmp->next != NULL){
    tmp = tmp->next;
  }
  //new_node->next = tmp->next;
  tmp->next = new_node;
}

void PrintLinkedList::InsertInFront(Node*& head, int data){
  Node *new_node = new Node(data);
  if(head == NULL){
    head = new_node;
    return;
  }
  new_node->next = head;
  head = new_node;
}

int PrintLinkedList::getSize(Node*& head){
  int count=0;
  Node *tmp = head;
  while(tmp!=NULL){
    count++;
  }
  return count;
}

void PrintLinkedList::InsertAtKthLoc(Node*& head, int k, int data){
  if(head == NULL){
    std::cout << "List is Empty" << std::endl;
  }
  int count = 0;
  Node* tmp = head;
  while(k-1>count){
    tmp = tmp->next;
    count++;
  }
  Node* new_node = new Node(data);
  new_node->next = tmp->next;
  tmp->next = new_node;
}

void PrintLinkedList::printList(Node *head){
  Node *tmp = head;
  while(tmp != NULL){
    std::cout << tmp->data << " ";
    tmp = tmp->next;
  }
  return;
}

int main(int argc, char* argv[]){
  PrintLinkedList *p = new PrintLinkedList();
  int size=1;
  Node *lt1 = NULL;
  while(size<argc){
    p->InsertAtLast(lt1, atoi(argv[size]));
    size++;
  }
  p->printList(lt1);
  p->InsertInFront(lt1, 9);
  std::cout << std::endl;
  p->printList(lt1);
  std::cout << std::endl;
  p->InsertAtKthLoc(lt1, 2, 8);
  p->printList(lt1);
  return 0;
}
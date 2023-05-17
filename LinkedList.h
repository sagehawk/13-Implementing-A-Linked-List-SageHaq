#include "Node.h"
#pragma once
template <typename T>

// YOU MUST CONVERT THIS TO USE A TEMPLATE, T
class LinkedList {
private:
  int size;
  Node<T> *head;
  Node<T> *tail;

public:
  // Add an item to the front of the LinkedList
  // return true if succesfull, false otherwise
  bool addItemToFront(T item);
  Node<T> *newNode = new Node<T>(item);
  newNode->next = head;
  head = newNode;
  if (tail == nullptr)
    tail = head;
  size++;
  return true;
  bool addItemToRear(T item);
  Node<T> *newNode = new Node<T>(item);
  if (tail == nullptr) {
    head = newNode;
    tail = newNode;
  } else {
    tail->next = newNode;
    tail = newNode;
  }
  size++;
  return true;
}
bool addItemAfter(T itemToFind, T itemToAddA);

// Add an item BEFORE the first occurence of itemToFind
// return true if succesfull, false otherwise
bool addItemBefore(T itemTofind, T itemToAdd);

// Returns true if itemToFind is in the list, false otherwise
bool contains(T itemTofind);

// Remove every occurence of item in the list
// return a count of the number of items removed (0 if not found)
int remove(T itemToRemove);

// Remove The front item from the list
// return the first item.  If the list is empty, throw an exception
T removeFromFront();

// Remove The Rear item from the list
// return the reart item.  If the list is empty, throw an exception
T removeFromRear();

// return the number of items in the list
int count();

// return true if the list is empty, false otherwise
bool isEmpty();
}
;
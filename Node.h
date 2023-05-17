#pragma once
template <typename T>
class Node
{
  T data;
Node* next;

Node(T data) {
  this->data = data;
  next = nullptr;
}
};
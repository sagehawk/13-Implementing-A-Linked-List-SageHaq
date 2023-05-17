#pragma once


// YOU MUST CONVERT THIS TO USE A TEMPLATE, T
class LinkedList
{
    public:
        // Add an item to the front of the LinkedList
        // return true if succesfull, false otherwise
        bool addItemToFront(T item); 

        // Add an item to the rear of the LinkedList
        // return true if succesfull, false otherwise
        bool addItemToRear(T item);  // Add item to rear

        // Add an item AFTER the first occurence of itemToFind
        // return true if succesfull, false otherwise
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
};
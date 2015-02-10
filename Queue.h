/**
 * Description:
 * This is the outlined header file for a Queue data structure that
 * is a FIFO data structure. These are the public and protected functions
 * and variables that a customer will have access to.
 *
 * @author Bradley Carrion
 * @version 1
 * @file Queue.h
 */
#include <iostream>

#ifndef QUEUE_H
#define QUEUE_H

const int MAX_QUEUE_SIZE = 100;
typedef int ItemType;

class Queue {
public:
    /** Default Constructor. */
    Queue();
    // copy constructor and desctructor are supplied by the compiler
    
    // Queue operations:
    
    /*
     * Compares the count value of q1 with the current class.
     * @returns true if q1's count is greater than this count
     */
    bool operator<(const Queue& q1);
    
    /*
     * Checks if the Queue is empty.
     * @returns true/false whether the count is 0.
     */
    bool isEmpty() const;
    /*
     * This will attempt to add 'newItem' to the end of the Queue
     * @pre The Queue is not full
     * @post The Queue will contain 1 new item.
     * @param This is the new item that will be added to the back of the Queue
     */
    virtual void enqueue(const ItemType& newItem);
    /*
     * Returns the value of count for non - member functions
     * @returns the count
     * @pre The Queue has been constructed
     */
    int getCount() const;
    /*
     * This will attept to remove the first item in the Queue
     * @pre The Queue contains, at minimum, 1 item
     * @post The Queue will have 1 less item
     */
    void dequeue();
    /*
     * Removes the first element in the Queue.
     * @pre The Queue must contain at least 1 element.
     * @returns The first element in the Queue.
     */
    ItemType getFront() const;
    /*
     * Allow the operator << to be overloaded outside of the class queue
     * @pre Queue q has been constructed and has some values
     * @returns a string representation of the items in Queue q
     */
    friend std::ostream& operator<<(std::ostream& os, const Queue& q);
    /*
     * This allows the Queue q to be displayed in a string representation to the console
     * @pre Queue q has been constructed
     */
    friend void display(const Queue& q);
    
protected:
    /* The array of size 'MAX_QUEUE_SIZE' to hold all elements in the Queue */
    ItemType items[MAX_QUEUE_SIZE];
    /*index to the front of the Queue*/
    int           front;
    /*index to back of the Queue*/
    int           back;
    /* Keeps track of how many items are in the Queue */
    int count;
    
}; // end Queue

#endif

/**
 * Description:
 * A PriorityQueue is a First In First Out structure. The only difference between
 * this and a normal Queue is that an item with higher priority will exit the
 * before any others with a lower priority. This is a child class of Queue Inheriting
 * all public and protected functions and variables while overriding the enqueue function.
 *
 * @author Bradley Carrion
 * @version 1
 * @date February 5, 2015
 * @file PQueue.h
 */


#ifndef PQUEUE_H
#define PQUEUE_H

#include "Queue.h"
#include <stdio.h>

class PriorityQueue : public Queue
{
public:
    /** Default Constructor */
    PriorityQueue();
    // Copy constructor and destructor provided by compiler
    
    /* 
     ** This function is overriding it's parent's member function 'enqueue'
     *
     * This overrides Queue's version of enqueue so that the
     * items being added are in sorted order by priority
     * @pre The array is not full
     * @post The Queue will contain 1 more item than before
     */
    void enqueue(const ItemType& item);
    
};  // End of PriorityQueue


#endif

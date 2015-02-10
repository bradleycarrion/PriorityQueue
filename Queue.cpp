/**
 * Description:
 * This is the implementation of a Queue data structure
 * using a static array to hold all of the values and
 * necessary helper functions and a 'count' variable to
 * keep track of the size of the Queue.
 *
 * @author Bradley Carrion
 * @version 1
 * @file Queue.cpp
 */

#include "Queue.h"
#include "QueueException.h"
#include <iostream>
#include <sstream>

using namespace std;

Queue::Queue() : count(0), front(0), back(0)
{
}   // end default constructor

bool Queue::operator<(const Queue& q1)
{
    return (count < q1.count);
}   // end operator < overloading

bool Queue::isEmpty() const
{
    if (count == 0)
        return true;
    return false;
}   // end isEmpty()

void Queue::enqueue(const ItemType& newItem)
{
    if (count == MAX_QUEUE_SIZE) {
        throw QueueException("Enqueue with full queue");
    } else {
    items[count] = newItem;
    count ++;
    front++;
    }
}   // end enqueue()

void Queue::dequeue()
{
    if (isEmpty())
        throw QueueException("Dequeue when empty");
    if (count == 1) {
        count--;
    }
    else {
        for (int i = 0; i < count; i++) {
            items[i] = items[i+1];
        }
        count--;
        front--;
    }
}   // end dequeue()

int Queue::getCount() const {
    return count;
}   // end getCount()

ItemType Queue::getFront() const
{
    if (isEmpty())
        throw QueueException("Can't get front. Queue is empty");
    return items[front];
}   // end getFront()

// End of implementation
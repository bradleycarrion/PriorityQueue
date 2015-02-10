/**
 * Description:
 * This is the implemenatation file for a PriorityQueue Data Structure.
 * This is a child class of Queue and inherits all public functions as well
 * as all protected variables. The only function that is being changed is
 * enqueue so that when each item is placed in the array it's placed in
 * order of priority.
 *
 * @author Bradley Carrion
 * @version 1
 * @file PQueue.cpp
 */

#include "PQueue.h"
#include "Queue.h"
#include "QueueException.h"
#include <iostream>

using namespace std;

PriorityQueue::PriorityQueue()
{
}   // End of Default Constructor

void PriorityQueue::enqueue(const ItemType& newItem)
{
    if (count == MAX_QUEUE_SIZE)
        throw QueueException("Enqueue with full queue");
    else if (isEmpty()) {
        items[count] = newItem;
        count++;
    } else if (items[count-1] <= newItem) {
        items[count] = newItem;
        count++;
    } else { // Executes this code if it's not full
        
        // This loop will start at index count and run until it finds a value
        // greater than 'newItem'
            for (int i = count-1; items[i] > newItem; i--) {
                items[i+1] = items[i];
                items[i] = newItem; //Assigning newItem to the open index
            }
        count++;
        front++;
        }
    
}   // End of enqueue()

// End of implementation file.
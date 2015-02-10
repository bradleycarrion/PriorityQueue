/* This client program shows the use of the the ADT Priority Queue.
 * Values of QueueItemType are enqueued in no particular order,
 * and then the item with highest priority is displayed to the 
 * console and then dequeued.
 */

#include <iostream>
#include "QueueException.h"
#include "Queue.h"
#include "PQueue.h"

using namespace std;

bool operator>(const Queue& q1, const Queue& q2);

void display(const Queue& q);

int main()
{
	cout << "\nTest for PQueue\n";
	PriorityQueue q1;
	for (int i = 0; i < 6; i++)
	{
		q1.enqueue(i);
	}
	//load queue
	PriorityQueue q2;
	for (int j = 0; j < 10; j++)
	{
		q2.enqueue(j);
	}
	//test less than operator
	bool qq = (q2 < q1);
	if (qq)
		cout << "True" << endl;
	else
		cout << "False" << endl;
	//test greater than operator
	qq = (q1 > q2);
	if (qq)
		cout << "True" << endl;
	else
		cout << "False" << endl;

    display(q1);
    display(q2);

	return 0;
}

ostream& operator<<(ostream& os, const Queue& q)
{
    for (int i = 0; i < q.count; i++)
    {
        if (i == q.count - 1)
            os << q.items[i];
        else
            os << q.items[i] << " ";
    }
    return os;
}

bool operator>(const Queue& q1, const Queue& q2)
{
    return (q1.getCount() > q2.getCount());
}

void display(const Queue& q) {
    cout << "The count = " << q.count << "." << endl;
    cout << "The items in the queue: [" << q << "]" << endl;
}


#include "Queue.h"
#include <iostream>

using namespace std;

// QUEUE FUNCTIONS //

// Inserts a new element at the rear of the queue.
void Queue::enqueue(int element) {
    myQueue.push(element);
}

// Removes the element at the front of the queue and returns it.
int Queue::dequeue() {
    if (!myQueue.empty()) {
        int frontElement = myQueue.front();
        myQueue.pop();
        return frontElement;
    } else {
        cerr << "Error: Queue is empty. Cannot dequeue.\n";
        return -1;
    }
}

// Returns the element at the front of the queue without removing it.
int Queue::front() const {
    if (!myQueue.empty()) {
        return myQueue.front();
    } else {
        cerr << "Error: Queue is empty. Cannot retrieve front element.\n";
        return -1;  
    }
}

// Checks if the queue is empty
bool Queue::isEmpty() const {
    return myQueue.empty();
}

// Returns the total number of elements present in the queue.
size_t Queue::size() const {
    return myQueue.size();
}
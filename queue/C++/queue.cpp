#include <iostream>
#include "queue.h"

using namespace std;

// constructor
queue::queue() {
  first = 0;
  last = 0;
  structure = new ItemType[max_items];
}

// destructor
queue::~queue() {
  delete[] structure;
}

// check if queue is full
bool queue::isFull() {
  return (last - first == max_items);
}

// check if queue is empty
bool queue::isEmpty() {
  return (first == last);
}

// enqueue element
void queue::enqueue(ItemType item) {
  if (isFull()) {
    cout << "The queue is full!\n";
  }
  else {
    structure[last % max_items] = item;
    last++;
  }
}

// dequeue element
ItemType queue::dequeue() {
  if (isEmpty()) {
    cout << "The queue is empty!\n";
    return 0;
  }
  else {
    first++;
    return structure[(first - 1) % max_items];
  }
}

// print the queue elements
void queue::print() {
  cout << "Queue: [ ";
  for (int i = first; i < last; i++)
  {
    cout << structure[i % max_items] << "  ";
  }
  cout << "]\n";
}

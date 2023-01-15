#include <iostream>
#include "stack.h"

using namespace std;

// Constructor
stack::stack()
{
  size = 0;
  structure = new ItemType[max_items];
}

// Destructor
stack::~stack()
{
  delete[] structure;
}

// Check if stack is full
bool stack::isFull()
{
  return (size == max_items);
}

// Check if stack is empty
bool stack::isEmpty()
{
  return (size == 0);
}

// Insert an item on stack
void stack::push(ItemType item)
{
  if (isFull())
  {
    cout << "The stack is full!\nNot is possible push this item\n";
  }
  else
  {
    structure[size] = item;
    size++;
  }
}

// Remove an item on stack
ItemType stack::pop()
{
  if (isEmpty())
  {
    cout << "The stack is empty!\nThere are no items on stack\n";
    return 0;
  }
  else
  {
    size--;
    return structure[size];
  }
}

// Print the stack
void stack::print()
{
  cout << "Stack: [";
  for (int i = 0; i < size; i++)
  {
    cout << structure[i] << "  ";
  }
  cout << "]\n";
}

// Size of stack
int stack::length()
{
  return size;
}

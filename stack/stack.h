typedef int ItemType;
const int max_items = 10;

class stack
{
private:
  ItemType* structure;
  int size;

public:
  stack();                  // constructor
  ~stack();                 // destructor
  bool isFull();            // check if stack is full
  bool isEmpty();           // check if stack is empty
  void push(ItemType item); // insert item on the stack
  ItemType pop();           // remove item on the stack
  void print();             // print the stack
  int length();             // size of stack
};
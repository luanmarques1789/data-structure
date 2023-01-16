typedef int ItemType;
const int max_items = 10;

class queue {
private:
  int first, last;
  ItemType* structure;

public:
  queue(); // constructor
  ~queue(); // destructor
  bool isFull(); // check if queue is full
  bool isEmpty(); // check if queue is empty
  void enqueue(ItemType item); // enqueue element
  ItemType dequeue(); // dequeue element
  void print(); // print the queue elements
};
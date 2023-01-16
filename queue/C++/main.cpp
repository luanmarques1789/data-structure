#include <iostream>
#include "queue.cpp"

using namespace std;

int main() {
  queue queue1;
  int option;
  ItemType item;

  cout << "Queue Generator Program";

  do {
    cout << "Type one these options to follow:\n";
    cout << "[0] Close the application\n";
    cout << "[1] Enqueue an element\n";
    cout << "[2] Dequeue an element\n";
    cout << "[3] Print the queue\n";

    switch (option)
    {
    case 0:
      break;
    case 1:
      cout << "Enter the element: ";
      cin >> item;
      cout << endl;
      queue1.enqueue(item);
      break;
    case 2:
      item = queue1.dequeue();
      cout << "Dequeued element " << item << endl;
      break;
    case 3:
      queue1.print();
      break;

    default:
      cout << "Invalid option!\n";
      break;
    }
  } while (option != 0);

  cout << "The program ends";

  return 0;
}
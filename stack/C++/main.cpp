#include <iostream>
#include "stack.cpp"

using namespace std;

int main()
{
  stack stack1;
  ItemType item;
  int option;

  cout << "Stack Generator Program:\n";

  do
  {

    cout << "Choose one these options to follow:\n";
    cout << "[0] Stop the application\n";
    cout << "[1] Insert an element\n";
    cout << "[2] Remove an element\n";
    cout << "[3] Print the stack\n";
    cout << "[4] Print the stack's length\n";
    cin >> option;

    switch (option)
    {
    case 0:
      break;
    case 1:
      cout << "Type the element to be inserted: ";
      cin >> item;
      stack1.push(item);
      break;
    case 2:
      item = stack1.pop();
      cout << "Deleted element: " << item << endl;
      break;
    case 3:
      stack1.print();
    case 4:
      cout << "The stack's lengths is " << stack1.length() << endl;
      break;
    default:
      cout << "Invalid option!\n";
      break;
    }

    cout << endl;

  } while (option != 0);

  cout << "The program ends!";

  return 0;
}
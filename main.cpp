// Hashim Abdulla
// CS303 Assignment3
// Due Date: 11/13/2023

#include "functions.h"
#include "Queue.h"

using namespace std;

int main() {

while (true) {
  Menu();
    char choice= 'N';
    cin>>choice;
    choice= toupper(choice);
    cout<<"You chose "<<choice<<endl;
    switch(choice) {
    case '1':
     while (true) {
       string infixExpression;
       cout << "Enter the infix expression (no spaces pls) : ";
       cin>> infixExpression;
       
       if (balancedParentheses(infixExpression)) {
           string postfixExpression = infixToPostfix(infixExpression);
           cout << "Balanced Parentheses: Yes" << endl;
           cout << "Postfix expression: " << postfixExpression << endl;
       } else {
           cout << "Balanced Parentheses: No (Expression is invalid)" << endl;
       }
       cout << "Do you want to try another infix expression? (Y/N) "<<endl;
       char exit;
       cin >> exit;
       exit = toupper(exit);
       if (exit == 'N') {
           break;
       }
       cin.ignore();
     }
      break;
    case '2':
      while (true) {
      Queue myQueue;

      myQueue.enqueue(10); //inserts to rear of queue
      myQueue.enqueue(20);
      myQueue.enqueue(30);

      cout << "Front element: " << myQueue.front() << endl;
      cout << "Dequeue: " << myQueue.dequeue() << endl; //removes from front and returns it
      cout << "Is the queue empty? " << (myQueue.isEmpty() ? "Yes" : "No") <<endl; //checks if queue is empty
      cout<< "front element is now "<<myQueue.front()<<endl; //returns front element without removing it
      cout << "Queue size: " << myQueue.size() << endl; //returns the total number of elements present in the queue
      cout<<"please feel free to edit the code to test the functions out!"<<endl;
        break;
      }
      break;
      
    case 'Q':
      cout<<"Exiting..."<<endl;
      break;

    default:
      cout<<"please enter a valid choice";

    }
    if (choice=='Q') {
      cout <<"Thank you, have a nice day!"<<endl;
      break;
    }
  

} 
  return 0;
}

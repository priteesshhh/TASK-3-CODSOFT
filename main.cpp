#include <iostream>

using namespace std;

// Function prototypes
float add(float x, float y) {
  return x + y;
}

float subtract(float x, float y) {
  return x - y;
}

float multiply(float x, float y) {
  return x * y;
}

float divide(float x, float y) {
  if (y == 0) {
    cout << "Error! Division by zero is not allowed." << endl;
    return 0;
  } else {
    return x / y;
  }
}

int main() {
  char choice;
  float num1, num2;

  // Print copyright information at the top
  cout << "+-------------------------------------------------------------------------------+" << endl;
  cout << "|                     CodSoft Internship (March 05 - April 05)                  |" << endl;
  cout << "|                       Developed with C++ Programming                          |" << endl;
  cout << "|                        Simple Calculator with C++                             |" << endl;
  cout << "|                        Priteesh Madhav Reddy Karra                            |" << endl;
  cout << "+-------------------------------------------------------------------------------+" << endl << endl;

  cout << "Welcome to the Calculator Program!" << endl;
  cout << "Select operation:" << endl;
  cout << "1. Addition" << endl;
  cout << "2. Subtraction" << endl;
  cout << "3. Multiplication" << endl;
  cout << "4. Division" << endl;

  do {
    cout << "Enter choice (1/2/3/4): ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch (choice) {
      case '1':
        cout << "Result: " << add(num1, num2) << endl;
        break;
      case '2':
        cout << "Result: " << subtract(num1, num2) << endl;
        break;
      case '3':
        cout << "Result: " << multiply(num1, num2) << endl;
        break;
      case '4':
        cout << "Result: " << divide(num1, num2) << endl;
        break;
      default:
        cout << "Invalid input! Please enter a valid choice (1/2/3/4)" << endl;
    }

    // Ask the user if they want to perform another calculation
    cout << "Do you want to perform another calculation? (yes/no): ";
    cin >> choice;
  } while (choice == 'y' || choice == 'Y');

  cout << "Thank you for using the Calculator Program!" << endl;

  return 0;
}

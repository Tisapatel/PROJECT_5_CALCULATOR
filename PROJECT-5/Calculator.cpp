#include <iostream>
using namespace std;

// Function prototypes
void add(int a, int b);
void subtract(int a, int b);
void multiply(int a, int b);
void divide(int a, int b);
void mod(int a, int b);

int main() {
    int choice, num1, num2;

    do {
        
        cout << endl;
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 for exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        
        if (choice == 0) {
            cout << "Exiting program." << endl;
            break;
        }

        cout << endl;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        
        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            case 5:
                mod(num1, num2);
                break;
           
            default:
                cout << "Invalid choice! Please try again:(" << endl;
        }

    } while (choice != 0);

    return 0;
}


void add(int a, int b) {
    cout << "Addition of " << a << " and " << b << " is: " << (a + b) << endl;
}

void subtract(int a, int b) {
    cout << "Subtraction of " << a << " and " << b << " is: " << (a - b) << endl;
}

void multiply(int a, int b) {
    cout << "Multiplication of " << a << " and " << b << " is: " << (a * b) << endl;
}

void divide(int a, int b) {
    if (b != 0) {
        cout << "Division of " << a << " and " << b << " is: " << (a / b) << endl;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
}

void mod(int a, int b) {
    if (b != 0) {
        cout << "Modulus of " << a << " and " << b << " is: " << (a % b) << endl;
    } else {
        cout << "Error: Modulus by zero!" << endl;
    }
}



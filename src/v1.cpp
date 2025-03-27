#include <iostream>
#include <cmath>
using namespace std;

void basicOperations();
void multiplication2Table();
void perimeterAreaSquare();
void hypotenuseRightTriangle();
void conversions();

int main() {
    int choice;

    cout << "Hello! I am EARTH V0, your virtual assistant, and I am here to help you with a variety of tasks quickly and efficiently \n";
    	cout << "Need to perform mathematical calculations? I can handle addition, subtraction, multiplication, and division \n";
		cout << "Want to convert currencies? I can assist you with currency conversions so you always have up-to-date information.\n";
		cout << " I'm here to make your tasks easier and support you in whatever you need. Let me know how I can assist you today\n";


    do {

    	cout << "\n********************\n";

	    cout << "\n Main Menu\n";

        cout << "1.- Mathematics\n";
        cout << "2.- Conversions\n";
        cout << "3.- The multiplication table of two\n";
        cout << "4.- Perimeter area of square\n";
        cout << "5.- Hypotenuse of a right triangle/Pythagoras theorem\n";
        cout << "10. Exit\n";

        cout << "\n********************\n";

		cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                basicOperations();
                break;
            case 2:
                conversions();
                break;
            case 3:
                multiplication2Table();
                break;
            case 4:
                perimeterAreaSquare();
                break;
            case 5:
                hypotenuseRightTriangle();
                break;
            case 10:
                cout << "............ Bye bye ...!\n";
                break;
            default:
                cout << "Please, this option does not exist. \n";
        }
    } while (choice != 10);

    return 0;
}


void basicOperations() {
    double num1, num2;
    cout << "\nWelcome **** Mathematics ---\n";
    cout << "Enter 1 number: ";
    cin >> num1;
    cout << "Enter 2 number: ";
    cin >> num2;


    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    if (num2 != 0)
        cout << "Division: " << num1 / num2 << endl;
    else
        cout << "Division not exist\n";

    cout << "Average: " << (num1 + num2) / 2 << endl;

    bool is_odd_num1 = fmod(num1, 2) == 0;
    if (is_odd_num1) {
      cout << "num1 is odd" << endl;
    } else {
      cout << "num1 is odd" << endl;
    }

    bool is_odd_num2 = fmod(num2, 2) == 0;
    if (is_odd_num2) {
      cout << "num1 is odd" << endl;
    } else {
      cout << "num1 is odd" << endl;
    }

    if (num1 > 0) {
      cout << "num1 is positive" << endl;
    } else if (num1 == 0) {
      cout << "num1 is positive" << endl;
    } else {
      cout << "num1 is negative" << endl;
    }

    if (num2 > 0) {
      cout << "num2 is positive" << endl;
    } else if (num2 == 0) {
      cout << "num2 is positive" << endl;
    } else {
      cout << "num2 is negative" << endl;
    }

    cout << "sqrt of num1: " << sqrt(num1) << endl;
    cout << "sqrt of num2: " << sqrt(num2) << endl;

    cout << "abs of num1: " << abs(num1) << endl;
    cout << "abs of num2: " << abs(num2) << endl;

}

void multiplication2Table()
{
    cout << "\n The multiplication table of 2: \n";
    for (int i = 1; i <= 12; ++i)
	{
        cout << "2 x " << i << " = " << 2 * i << endl;
    }
}

void perimeterAreaSquare()
{
    double side;
    cout << "\nWelcome **** Perimeter and Area of a Square ---\n";
    cout << "Enter the side of the square: ";
    cin >> side;

    cout << "Perimeter: " << 4 * side << endl;
    cout << "Area: " << side * side << endl;
}

void hypotenuseRightTriangle()
{
    double side1, side2;
    cout << "\nWelcome **** Hypotenuse of a right triangle ---\n";
    cout << "Enter the side 1: ";
    cin >> side1;
    cout << "Enter the side 2: ";
    cin >> side2;

    cout << "Hypotenuse: " << sqrt(side1 * side1 + side2 * side2) << endl;
}

// convert euro to dollars
void conversions()
{
    double euro, dollar;
    cout << "\nWelcome **** Euro to Dollar Conversion ---\n";
    cout << "Enter the amount in Euro: ";
    cin >> euro;

    dollar = euro * 1.18;
    cout << "Amount in Dollar: " << dollar << endl;
}

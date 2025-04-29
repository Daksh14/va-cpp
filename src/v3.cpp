
#include <cmath>

#include <iostream>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void basicOperations();
void multiplication2Table();
void perimeterAreaSquare();
void hypotenuseRightTriangle();
void conversions();
void sumOfSquares();
void greaterOfTwoNumbers();
void sumOfFirstNNaturalNumbers();
void solveQuadraticEquation();
void kilometersToMilesConversion();
void areaOfTriangle();
void milesToKilometersConversion();
void triviaQuestions();
void multiplicationTableOfN();
void fps_game();
void guessing_game();
void rock_paper_scissors();

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
        cout << "6.- Greater of two numbers\n";
        cout << "7.- Sum of squares\n";
        cout << "8.- Sum of first n natural numbers\n";
        cout << "9.- Solve quadratic equation\n";
        cout << "10.- Kilometers to Miles Conversion\n";
        cout << "11.- Area of a triangle\n";
        cout << "12.- Miles to Kilometers Conversion\n";
        cout << "13.- Trivia Questions\n";
        cout << "14.- Multiplication table of n\n";
        cout << "15.- Number guessing game \n";
        cout << "16.- FPS Game \n";
        cout << "17.- Rock paper scissors \n";
        cout << "20. Exit\n";

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
            case 6:
                greaterOfTwoNumbers();
                break;
            case 7:
                sumOfSquares();
                break;
            case 8:
                sumOfFirstNNaturalNumbers();
                break;
            case 9:
                solveQuadraticEquation();
                break;
            case 10:
                kilometersToMilesConversion();
                break;
            case 11:
                areaOfTriangle();
                break;
            case 12:
                milesToKilometersConversion();
                break;
            case 13:
                triviaQuestions();
                break;
            case 14:
                multiplicationTableOfN();
                break;

            case 15:
                guessing_game();
                break;

            case 16:
                fps_game();
                break;
            case 17:
                rock_paper_scissors();
                break;
            case 20:
                cout << "............ Bye bye ...!\n";
                break;

            default:
                cout << "Please, this option does not exist. \n";
                break;
        }
    } while (choice != 20);

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

void greaterOfTwoNumbers()
{
    int num1, num2;
    cout << "\nWelcome **** Greater of Two Numbers ---\n";
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "The greater number is: " << num1 << endl;
    } else if (num1 == num2) {
        cout << "The numbers are equal" << endl;
    } else {
        cout << "The greater number is: " << num2 << endl;
    }
}

void sumOfFirstNNaturalNumbers()
{
    int n;
    cout << "\nWelcome **** Sum of First N Natural Numbers ---\n";
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }

    cout << "Sum of first " << n << " natural numbers: " << sum << endl;
}

void sumOfSquares() {
    int n;
    cout << "\nWelcome **** Sum of Squares of First N Natural Numbers ---\n";
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += i * i;
    }

    cout << "Sum of squares of first " << n << " natural numbers: " << sum << endl;
}

void areaOfTriangle()
{
    double base, height;
    cout << "\nWelcome **** Area of Triangle ---\n";
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the height: ";
    cin >> height;

    cout << "Area of triangle: " << 0.5 * base * height << endl;
}

void triviaQuestions() {
    int choice;
    cout << "\nWelcome **** Trivia Questions ---\n";
    cout << "Choose a category:\n";
    cout << "1. General Knowledge\n";
    cout << "2. Science\n";
    cout << "3. History\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "What is the capital of France?\n";
            cout << "a) London\n";
            cout << "b) Paris\n";
            cout << "c) Berlin\n";
            cout << "d) Madrid\n";

            char answer;
            cout << "Enter your answer: ";
            cin >> answer;

            if (answer == 'b' || answer == 'B')
                cout << "Correct!\n";
            else
                cout << "Incorrect!\n";

            break;
        case 2:
            cout << "What is the chemical symbol for gold?\n";
            cout << "a) Au\n";
            cout << "b) Ag\n";
            cout << "c) Cu\n";
            cout << "d) Fe\n";

            cout << "Enter your answer: ";
            cin >> answer;

            if (answer == 'a' || answer == 'A')
                cout << "Correct!\n";
            else
                cout << "Incorrect!\n";

            break;
        case 3:
            cout << "Who was the first president of the United States?\n";
            cout << "a) George Washington\n";
            cout << "b) Abraham Lincoln\n";
            cout << "c) Thomas Jefferson\n";
            cout << "d) John Adams\n";

            cout << "Enter your answer: ";
            cin >> answer;

            if (answer == 'a' || answer == 'A')
                cout << "Correct!\n";
            else
                cout << "Incorrect!\n";

            break;
        default:
            cout << "Invalid choice\n";
            break;
    }



}

void multiplicationTableOfN() {
    int n;
    cout << "\nWelcome **** Multiplication Table ---\n";
    cout << "Enter a number: ";
    cin >> n;

    cout << "Multiplication table of " << n << ":\n";
    for (int i = 1; i <= 10; ++i)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

void solveQuadraticEquation() {
    double a, b, c, discriminant, root1, root2;

    cout << "\nEnter coefficients a, b and c: ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different.\n";
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        cout << "Roots are real and same.\n";
        cout << "Root1 = Root2 = " << root1 << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different.\n";
        cout << "Root1 = " << realPart << " + " << imaginaryPart << "i\n";
        cout << "Root2 = " << realPart << " - " << imaginaryPart << "i\n";
    }
}

void kilometersToMilesConversion() {
    double kilometers;
    cout << "\nEnter distance in kilometers: ";
    cin >> kilometers;

    double miles = kilometers * 0.621371;
    cout << kilometers << " kilometers is equal to " << miles << " miles.\n";
}

void milesToKilometersConversion() {
    double miles;
    cout << "\nEnter distance in miles: ";
    cin >> miles;

    double kilometers = miles / 0.621371;
    cout << miles << " miles is equal to " << kilometers << " kilometers.\n";
}

// Terminal input setup
void enableRawMode() {
    termios term;
    tcgetattr(STDIN_FILENO, &term);
    term.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &term);
}

void disableRawMode() {
    termios term;
    tcgetattr(STDIN_FILENO, &term);
    term.c_lflag |= ICANON | ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &term);
}

bool kbhit() {
    termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin);
        return true;
    }

    return false;
}

char getch() {
    char buf = 0;
    read(STDIN_FILENO, &buf, 1);
    return buf;
}

// Game constants
const int WIDTH = 40;
const int HEIGHT = 5;
const char DINO = 'D';
const char JUMP_DINO = '^';
const char OBSTACLE = '|';

// Main game loop
void fps_game () {
    enableRawMode();
    srand(time(0));

    bool isJumping = false;
    int jumpCounter = 0;
    int score = 0;

    vector<bool> obstacles(WIDTH, false);

    while (true) {
        // Input
        if (kbhit()) {
            char key = getch();
            if (key == ' ') {
                if (!isJumping) {
                    isJumping = true;
                    jumpCounter = 3;
                }
            }
            if (key == 'q') break;
        }

        // Move obstacles
        for (int i = 0; i < WIDTH - 1; i++) {
            obstacles[i] = obstacles[i + 1];
        }

        // Randomly generate new obstacle
        obstacles[WIDTH - 1] = (rand() % 10 == 0);

        // Dino jumping
        if (isJumping) {
            jumpCounter--;
            if (jumpCounter == 0) isJumping = false;
        }

        // Collision detection
        if (!isJumping && obstacles[1]) {
            cout << "\nGame Over! Score: " << score << endl;
            break;
        }

        // Clear screen
        cout << "\x1b[2J\x1b[H";

        // Draw game
        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                if (x == 1 && y == (isJumping ? 1 : 2)) {
                    cout << (isJumping ? JUMP_DINO : DINO);
                } else if (y == 2 && obstacles[x]) {
                    cout << OBSTACLE;
                } else if (y == 3) {
                    cout << '_';  // Ground
                } else {
                    cout << ' ';
                }
            }
            cout << '\n';
        }

        cout << "Score: " << score << " | Press SPACE to jump, Q to quit\n";

        score++;
        usleep(100000);  // 100ms frame delay (~10 FPS)
    }

    disableRawMode();
}

void guessing_game() {
    srand(time(0));  // Seed random number generator
    int secretNumber = rand() % 100 + 1;  // Random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "=== Number Guessing Game ===\n";
    cout << "I'm thinking of a number between 1 and 100...\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (attempts >= 50) {
            cout << "Too many attempts!\n";
            break;
        }

        if (guess > secretNumber) {
            cout << "Too high!\n";
        } else if (guess < secretNumber) {
            cout << "Too low!\n";
        } else {
            cout << "🎉 Correct! You got it in " << attempts << " attempts.\n";
        }

    } while (guess != secretNumber);
}

string getChoiceName(int choice) {
    switch (choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Invalid";
    }
}

void rock_paper_scissors() {
    srand(time(0));

    int userChoice;
    int computerChoice;

    cout << "=== Rock Paper Scissors ===\n";
    cout << "1. Rock\n2. Paper\n3. Scissors\n";
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice!\n";
    }

    computerChoice = rand() % 3 + 1;

    cout << "You chose: " << getChoiceName(userChoice) << endl;
    cout << "Computer chose: " << getChoiceName(computerChoice) << endl;

    if (userChoice == computerChoice) {
        cout << "It's a tie!\n";
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "You win!\n";
    } else {
        cout << "Computer wins!\n";
    }
}
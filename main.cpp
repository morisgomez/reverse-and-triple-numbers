#include <iostream>
using namespace std;

int main() {
    //the following gets the user input and stores it into program.
    cout << "Input a three-digit number (100 - 999): ";
    int userInput;
    cin >> userInput;
    //the following reverses the user input and prints out that value.
    //first number:
    int revOneDiv = userInput / 10; // 78
    int revOneRem = userInput % 10; // 9
    //second number:
    int revTwoDiv = revOneDiv / 10; // 7
    int revTwoRem = revOneDiv % 10; // 8
    //last number
    int revThreeRem = revTwoDiv % 10; // 7
    cout << "The reverse of the number is " << revTwoRem
    << revOneRem << revThreeRem << "." << endl;
    //the following triples user input and prints out that value.
    int inputThree = userInput * 3; //does multiplication
    cout << "The triple of the number is " << inputThree << ".";
    return 0;
}

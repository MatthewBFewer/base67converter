#include "b67converter.h"
#include <iostream>

int main() {

    string input;

    cout << "-------- BASE-10 TO BASE-67 --------\nEnter base-10 number to convert: ";
    cin >> input;

    input = sanitize_input(input);
    input = parse_input(input);

    cout << "\nResult: " << input << endl;

    return 0;
}

const string& sanitize_input(string& input) {
//Does error checking + makes sure input is actually a base-10 number
    return nullptr;
}

const string& parse_input(string& input) {
//Handles the mapping of base-10 to base-67 using the map defined in *.h
    return nullptr;
}
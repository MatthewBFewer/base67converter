#include "b67converter.h"
#include <iostream>
#include <vector>
#include <algorithm>

string sanitize_input(int input) {
//Does some error checking + makes sure input is actually a base-10 number

    return "";
}

string parse_input(int input) {
//Handles the mapping of base-10 to base-67 using the map defined in *.h
    if (input == 0) return "0";

    vector<string> digits; // temporary list of digits to read into

    while (input > 0) {
        int r = input % 67;

        if (r > 9) {
            digits.push_back(b67mappings.at(r)); // adds b67 digit to digits
        }
        else {
            digits.push_back(to_string(r)); //otherwise add the 0-9 digit as a string
        }

        input /= 67;
    }
    
    reverse(digits.begin(),digits.end()); //reverses digits (suprise suprise)

    size_t total_size = 0;
    for (const string& digit : digits) { //count how much space to reserve for output string
        total_size += digit.size();
    }

    string output;
    output.reserve(total_size);

    for (const string& digit : digits) { //finally, read in digits to output string
        output += (digit + "\n"); //newline seperated so that ascii art does not get disturbed
    }

    return output;
}

int main(void) {

    int input;

    cout << "( ͡° ͜ʖ ͡°) -------- BASE-10 TO BASE-67 -------- ¯\\_(ツ)_/¯\nEnter base-10 number to convert: ";
    cin >> input;

    // sanitize_input(input);
    string output = parse_input(input);

    cout << "Result: \n" << output << endl;

    return 0;
}
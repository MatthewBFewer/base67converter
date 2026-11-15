#ifndef B67CONVERTER_H
#define B67CONVERTER_H
#include <string>
#include <map>

using namespace std;

/* 
    mappings of decimal numbers 0-67 to special characters 
    0-9 maps to 0-9 respectively,
    10-35 maps to lowercase single character strings a-z
    36-67 maps to more "abstract" multi-character strings i.e. ( ͡° ͜ʖ ͡°) (lenny face)
*/
map<int,string> b67mappings = {
    {10,"a"},
    {11,"b"},
    {12,"c"},
    {13,"d"},
    {14,"e"},
    {15,"f"},
    {16,"g"},
    {17,"h"},
    {18,"i"},
    {19,"j"},
    {20,"k"},
    {21,"l"},
    {22,"m"},
    {23,"n"},
    {24,"o"},
    {25,"p"},
    {26,"q"},
    {27,"r"},
    {28,"s"},
    {29,"t"},
    {30,"u"},
    {31,"v"},
    {32,"w"},
    {33,"x"},
    {34,"y"},
    {35,"z"},
    {36,"¯\_(ツ)_/¯"},
    {37,"( ͡° ͜ʖ ͡°)"}
};

const string& sanitize_input(string&);
const string& parse_input(string&);

#endif
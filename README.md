# base67converter
As it sounds, an API that converts decimal to base 67 and vice versa

### Libraries Used:
- std::string
- std::map
- std::iostream
- std::vector
- std::algorithm

### ASCII Art sources:
- https://www.asciiart.eu/cartoons/spongebob-squarepants
- https://texteditor.com/text-faces/
- https://www.asciiart.eu/cartoons/simpsons

## Run instructions:
- If you do not want to recompile the project, you can simply run the provided `b67converter` binary in your terminal via `./b67converter`
- Note that **this has only been tested on Ubuntu 26.04**, but the code is not very complicated so it should run fine on other GNU/Linux-adjacent systems + MacOS

## Build Instructions:
**NOTE**: If you are on windows, you will need to either do the following in WSL or use a web-based C++ compiler (i.e. godbolt). For WSL/Linux/Mac users:
- create a new directory and ensure `b67converter.h` and `b67converter.cc` have been copied into it
- To ensure you have g++ installed, run `sudo apt install g++`
- Once g++ is installed, run `g++ -Wall b67converter.cc -o b67converter` (**Note that MacOS users may need to add extra flags to specify the version of C++**)
- Run the binary via `./b67converter`
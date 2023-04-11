#ifndef     Morse_hpp
#define     Morse_hpp

#include <iostream>
#include <vector>

class Morse
{
public:
    std::string _signal;
    std::string _letter;
    Morse       *_left;
    Morse       *_right;

    Morse(char, std::string);
    ~Morse();
};

#endif
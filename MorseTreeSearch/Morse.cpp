#include "includes/Morse.hpp"

Morse::Morse(char   letter, std::string signal)
{
    this->_letter   = letter;
    this->_signal   = signal;
    this->_left     = NULL;
    this->_right    = NULL;
}

Morse::~Morse()
{}

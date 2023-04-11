#ifndef TreeSetup_hpp
#define TreeSetup_hpp

#include <vector>
#include "Morse.hpp"

class TreeSetup
{
    private:
        std::vector<Morse>  _morseTree;

    public:
        TreeSetup();
        void  linkTree(void);
        std::vector<Morse>  getTree(void);
        ~TreeSetup();
};

#endif
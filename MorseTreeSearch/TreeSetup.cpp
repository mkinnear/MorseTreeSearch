#include "includes/TreeSetup.hpp"

TreeSetup::TreeSetup()
{
Morse   root('*', "root");
    Morse   e('E', ".");
    Morse   t('T', "-");
    Morse   i('I', "..");
    Morse   a('A', ".-");
    Morse   n('N', "-.");
    Morse   m('M', "--");
    Morse   s('S', "...");
    Morse   u('U', "..-");
    Morse   r('R', ".-.");
    Morse   w('W', ".--");
    Morse   d('D', "-..");
    Morse   k('K', "-.-");
    Morse   g('G', "--.");
    Morse   o('O', "---");
    Morse   h('H', "....");
    Morse   v('V', "...-");
    Morse   f('F', "..-.");
    Morse   sp1(' ', "..--");
    Morse   l('L', ".-..");
    Morse   sp2(' ', ".-.-");
    Morse   p('P', ".--.");
    Morse   j('J', ".---");
    Morse   b('B', "-...");
    Morse   x('X', "-..-");
    Morse   c('C', "-.-.");
    Morse   y('Y', "-.--");
    Morse   z('Z', "--..");
    Morse   q('Q', "--.-");
    Morse   sp3(' ', "---.");
    Morse   sp4(' ', "----");
    Morse   _5('5', ".....");
    Morse   _4('4', "....-");
    Morse   sp5(' ', "...-.");
    Morse   _3('3', "...--");
    Morse   sp6(' ', "..-..");
    Morse   sp7(' ', "..-.-");
    Morse   sp8(' ', "..--.");
    Morse   _2('2', "..---");
    Morse   sp9(' ', ".-...");
    Morse   sp10(' ', ".-..-");
    Morse   _plus('+', ".-.-.");
    Morse   sp11(' ', ".-.--");
    Morse   sp12(' ', ".--..");
    Morse   sp13(' ', ".--.-");
    Morse   sp14(' ', ".---.");
    Morse   _1('1', ".----");
    Morse   _6('6', "-....");
    Morse   _eq('=', "-...-");
    Morse   _dsh('/', "-..-.");
    Morse   sp15(' ', "-..--");
    Morse   sp16(' ', "-.-..");
    Morse   sp17(' ', "-.-.-");
    Morse   sp18(' ', "-.--.");
    Morse   sp19(' ', "-.---");
    Morse   _7('7', "--...");
    Morse   sp20(' ', "--..-");
    Morse   sp21(' ', "--.-.");
    Morse   sp22(' ', "--.--");
    Morse   _8('8', "---..");
    Morse   sp23(' ', "---.-");
    Morse   _9('9', "----.");
    Morse   _0('0', "-----");
    
   
    this->_morseTree.push_back(root);
    this->_morseTree.push_back(e);
    this->_morseTree.push_back(t);
    this->_morseTree.push_back(i);
    this->_morseTree.push_back(a);
    this->_morseTree.push_back(n);
    this->_morseTree.push_back(m);
    this->_morseTree.push_back(s);
    this->_morseTree.push_back(u);
    this->_morseTree.push_back(r);
    this->_morseTree.push_back(w);
    this->_morseTree.push_back(d);
    this->_morseTree.push_back(k);
    this->_morseTree.push_back(g);
    this->_morseTree.push_back(o);
    this->_morseTree.push_back(h);
    this->_morseTree.push_back(v);
    this->_morseTree.push_back(f);
    this->_morseTree.push_back(sp1);
    this->_morseTree.push_back(l);
    this->_morseTree.push_back(sp2);
    this->_morseTree.push_back(p);
    this->_morseTree.push_back(j);
    this->_morseTree.push_back(b);
    this->_morseTree.push_back(x);
    this->_morseTree.push_back(c);
    this->_morseTree.push_back(y);
    this->_morseTree.push_back(z);
    this->_morseTree.push_back(q);
    this->_morseTree.push_back(sp3);
    this->_morseTree.push_back(sp4);
    this->_morseTree.push_back(_5);
    this->_morseTree.push_back(_4);
    this->_morseTree.push_back(sp5);
    this->_morseTree.push_back(_3);
    this->_morseTree.push_back(sp6);
    this->_morseTree.push_back(sp7);
    this->_morseTree.push_back(sp8);
    this->_morseTree.push_back(_2);
    this->_morseTree.push_back(sp9);
    this->_morseTree.push_back(sp10);
    this->_morseTree.push_back(_plus);
    this->_morseTree.push_back(sp11);
    this->_morseTree.push_back(sp12);
    this->_morseTree.push_back(sp13);
    this->_morseTree.push_back(sp14);
    this->_morseTree.push_back(_1);
    this->_morseTree.push_back(_6);
    this->_morseTree.push_back(_eq);
    this->_morseTree.push_back(_dsh);
    this->_morseTree.push_back(sp15);
    this->_morseTree.push_back(sp16);
    this->_morseTree.push_back(sp17);
    this->_morseTree.push_back(sp18);
    this->_morseTree.push_back(sp19);
    this->_morseTree.push_back(_7);
    this->_morseTree.push_back(sp20);
    this->_morseTree.push_back(sp21);
    this->_morseTree.push_back(sp22);
    this->_morseTree.push_back(_8);
    this->_morseTree.push_back(sp23);
    this->_morseTree.push_back(_9);
    this->_morseTree.push_back(_0);

    this->linkTree();
}

void  TreeSetup::linkTree()
{
    int counter = 0;
    for (int    index = 1; index < this->_morseTree.size(); index++)
    {
        this->_morseTree[counter]._left  = &this->_morseTree[index++];
        if (index >= this->_morseTree.size()) break;
         this->_morseTree[counter]._right  = &this->_morseTree[index];
        counter++;
    }
}

std::vector<Morse>  TreeSetup::getTree(void)
{
    return (this->_morseTree);
}

TreeSetup::~TreeSetup()
{}


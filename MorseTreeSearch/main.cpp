#include "includes/TreeSetup.hpp"

std::vector<std::string>    morseTreeSearch(Morse   *root, char  *signal)
{
    static std::vector<std::string> arr;
    if (root == NULL) arr.push_back("ROOT is NULL!");
    else if (*signal == '\0') 
    {
        if (root->_letter == "/") arr.push_back(" ");
        else arr.push_back(root->_letter);     
    }
    else if (*signal == '.') return (morseTreeSearch(root->_left, signal+1));
    else if (*signal == '-') return (morseTreeSearch(root->_right, signal+1));
    else if (*signal == '?')
    {
        arr = morseTreeSearch(root->_left, signal+1);
        arr = morseTreeSearch(root->_right, signal+1);
    }
    else arr.push_back("What is this Junk!?");
    return (arr);
}

void    setupTree(int   argc, char  **argv)
{
    std::vector<Morse>     tree;
    TreeSetup treeSetup;

    tree = treeSetup.getTree();
    int counter = 0;
    for (int    index = 1; index < tree.size(); index++)
    {
        tree[counter]._left  = &tree[index++];
        if (index >= tree.size()) break;
         tree[counter]._right  = &tree[index];
        counter++;
    }

    std::vector<std::string>    signalMsg;
    for (int    i = 1; i < argc; i++)
    {
        signalMsg = morseTreeSearch(&tree.front(), argv[i]);
    }
    for (auto s : signalMsg)
    {
        std::cout  << s;
    }
    std::cout << std::endl;

}

int     main(int    argc, char  **argv)
{
    if (argc > 1)
    {
        setupTree(argc, argv);
    }
    return (0);
}

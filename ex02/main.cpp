#include "MutantStack.hpp"

int main()
{
    //test pour int
    std::cout << "---------- TEST: STACK_INT ----------" << std::endl;
    MutantStack<int> mstack;
    std::cout << "Testing push() & pop()" << std::endl;
    mstack.push(5);
    std::cout << mstack.top() << std::endl;
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.top() << std::endl;
    std::cout << std::endl;
    std::cout << "Testing size()" << std::endl;
    std::cout << "Size of stack: " << mstack.size() << std::endl;
    mstack.push(17);
    std::cout << "Size of stack: " << mstack.size() << std::endl;
    std::cout << std::endl;
    std::cout << "Testing top()" << std::endl;
    mstack.top() = 2;
    std::cout << mstack.top() << std::endl;
    std::cout << "Size of stack: " << mstack.size() << std::endl;
    std::cout << std::endl;
    std::cout << "Testing empty() (1 if emtpy, 0 if not empty)" << std::endl;
    MutantStack<int> emptymstack;
    std::cout << mstack.empty()  << std::endl;
    std::cout << emptymstack.empty()  << std::endl; 
    std::cout << std::endl;

    std::cout << "---------- TEST: STACK_STRING ----------" << std::endl;
    MutantStack<std::string> strstack1;
    strstack1.push("Hello");
    strstack1.push("Wordl");
    strstack1.push("!");
    MutantStack<std::string> strstack2(strstack1);
    std::cout << "Stack1: " << strstack1.top() << std::endl;
    std::cout << "Stack2: " << strstack2.top() << std::endl;
    std::cout << std::endl;
    std::cout << "Testing deep copy" << std::endl;
    strstack2.top() = "<3";
    std::cout << "Stack1: " << strstack1.top() << std::endl;
    std::cout << "Stack2: " << strstack2.top() << std::endl;
    std::cout << std::endl;

    std::cout << "---------- TEST: ITERATOR ----------" << std::endl;
    mstack.push(32);
    mstack.push(42);
    mstack.push(53);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "Testing bottom -> top (iterator and ++)" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    MutantStack<int> temp(mstack);
    it = temp.end();
    ite = temp.begin();
    std::cout << std::endl;
    std::cout << "Testing top -> bottom (iterator and --) and modification * -1" << std::endl;
    while (it != ite)
    {
        --it;
        *it *= -1;
        std::cout << *it << std::endl;
    }
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    std::cout << std::endl;
    std::cout << "Testing top -> bottom (reverse iterator)" << std::endl;
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }
    std::cout << std::endl;

    std::cout << "---------- TEST: ITERATOR CONST ----------" << std::endl;
    MutantStack<int>::const_iterator cit = mstack.begin();
    MutantStack<int>::const_iterator cite = mstack.end();
    std::cout << "Testing bottom -> top (iterator and ++)" << std::endl;
    while (cit != cite)
    {
        std::cout << *cit << std::endl;
        ++cit;
        // *cit = 100;
    }
    MutantStack<int>::const_reverse_iterator crit = mstack.rbegin();
    MutantStack<int>::const_reverse_iterator crite = mstack.rend();
    std::cout << std::endl;
    std::cout << "Testing top -> bottom (reverse iterator)" << std::endl;
    while (crit != crite)
    {
        std::cout << *crit << std::endl;
        ++crit;
    }
    return (0);
}
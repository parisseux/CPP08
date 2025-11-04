#include "Span.hpp"
#include <cstdlib>
#include <ctime>


int main()
{
    std::cout << "------- TEST 1: SMALL SPLAN ------- "<< std::endl;
    std::cout << std::endl;
    try
    {
        Span sp(5);
        sp.addNumber(20);
        try 
        {
            std::cout << "------- TEST: Too little element in Span ------- "<< std::endl;
            std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << "Exception attrapée: " << e.what() << std::endl;
            std::cout << std::endl;
        }
        sp.addNumber(21);
        sp.addNumber(35);
        sp.addNumber(100);
        sp.addNumber(12);
        try 
        {
            std::cout << "------- TEST: Too many element in Span ------- "<< std::endl;
            sp.addNumber(42);
        }
        catch (const std::exception &e)
        {
            std::cout << "Exception attrapée: " << e.what() << std::endl;
            std::cout << std::endl;
        }
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Expected: 21 - 20 = 1 " << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
        std::cout << "Expected: 100 - 12 = 88 " << std::endl;
        std::cout << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception attrapée: " << e.what() << std::endl;
    }

    std::cout << "\n --------- TEST 2: LARGE SPAN -------" << std::endl;
    std::cout << std::endl;
    try
    {
        Span sp(10000);

        std::vector<int> numbers;
        for (int i = 0; i < 10000; ++i)
        numbers.push_back(i);
        sp.addNumbers(numbers.begin(), numbers.end());
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Erreur: " << e.what() << std::endl;
    }
    return 0;
}
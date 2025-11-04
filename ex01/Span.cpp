#include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{
    // std::cout << "Span constructor called." << std::endl;
}

Span::~Span()
{
    // std::cout << "Span constructor called." << std::endl;
}

Span::Span(Span &other)
{
    this->_N = other._N;
    // std::cout << "Span copy constructor called." << std::endl;
}

Span &Span::operator=(Span &other)
{
    if (this != &other)
        this->_N = other._N;
    // std::cout << "Span copy assignement operator called." << std::endl;
    return (*this);
}

void Span::addNumber(int number)
{
    if (_v.size() < _N)
        _v.push_back(number);
    else
        throw TooManyElements();
}

int Span::shortestSpan()
{
    if (_v.size() < 2)
        throw TooLittleElement();
    std::vector <int>temp = _v;
    std::sort(temp.begin(), temp.end());
    std::vector<int> diffs(temp.size());
    std::adjacent_difference(temp.begin(), temp.end(), diffs.begin());
    return *std::min_element(diffs.begin() + 1, diffs.end());
}
int Span::longestSpan()
{
    if (_v.size() < 2)
        throw TooLittleElement();
        std::vector <int>temp = _v;
    std::sort(temp.begin(), temp.end());
    int distance =  temp.back() - temp.front();
    return (distance); 
}

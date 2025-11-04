#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <exception>
# include <vector>
# include <numeric>

class Span {
private:
    unsigned int _N;
    std::vector <int> _v;
public:
    Span(unsigned int N);
    ~Span();
    Span(Span &other);
    Span &operator=(Span &other);
    void addNumber(int number);
    template <typename InputIt>
    void addNumbers(InputIt begin, InputIt end)
    {
        if (_v.size() + std::distance(begin, end) > _N)
            throw TooManyElements();
        _v.insert(_v.end(), begin, end);
    }
    class TooManyElements : public std::exception
    {
        virtual const char* what() const throw()
        {
            return ("Too many element stored in Span.");
        }
    };
    int shortestSpan();
    int longestSpan();
    class TooLittleElement : public std::exception
    {
        virtual const char* what() const throw()
        {
            return ("Too little element stored in Span.");
        }
    };
};

#endif
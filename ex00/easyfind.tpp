#include "easyfind.hpp"


class NotFoundException : public std::exception
{
public:
    virtual const char* what() const throw() 
    {
         return ("Element not found in container.");
    }
       
};

template <typename T>
typename T::iterator easyfind(T &container,  int i)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), i);
    if (it == container.end())
        throw NotFoundException();    
    return (it);
}
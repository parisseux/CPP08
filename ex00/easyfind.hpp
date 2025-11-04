#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <exception>

template <typename T>
typename T::iterator easyfind(T &container, int i);

# include "easyfind.tpp"

#endif
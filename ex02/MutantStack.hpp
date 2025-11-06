#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() {};
    ~MutantStack() {};
    MutantStack(const MutantStack &other) : std::stack<T>(other) {};
    MutantStack &operator=(const MutantStack &other) 
    {
        if (this != &other)
            std::stack<T>::operator=(other);
        return (*this);
    }
    
    //on utilise le même iterateur que celui du conteneur intern de std::stack<T> 
    //:::container_type est std::deque<T> (vrai conteneur) et non stack qui nest n'est qu'un adaptateur
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
    
    //iteration et modification
    iterator begin();
	iterator end();
    reverse_iterator rbegin();
	reverse_iterator rend();

    //iteration sans modification
	const_iterator begin() const;
	const_iterator end() const;
	const_reverse_iterator rbegin() const;
	const_reverse_iterator rend() const;
};

# include "MutantStack.tpp"

#endif
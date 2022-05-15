#ifndef		MUTANTSTACK_HPP
# define	MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>
# include <exception>
# include <string>

template<typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack<T>() {};
	MutantStack<T>(const MutantStack<T> &obj) {*this = obj;};
	~MutantStack<T>() {};

	MutantStack &operator=(const MutantStack &rms)
		{
			std::cout << "MutantStack assignment operator overloading called" << std::endl; /*!!!!!!!!*/
			if (this != &rms)
				std::stack<T>::operator=(rms);
			return *this;
		}
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() {return this->c.begin();}
	iterator end(void)
		{ return this->c.end(); }
};

// class Exceedance : public Exception 
// {
// 	public:
// 	std::string _text;

// 	Exceedance()
// 	{
// 		_text = "eeeerrrrr";
// 	}

// 	std::string what()
// 	{
// 		return _text;
// 	}
// };

#endif  // MUTANTSTACK_HPP
#include "MutantStack.hpp"
#include <iomanip>
#

int main()
{
	const int MAXFFF = 30;
    MutantStack<int> mstack;
    int i1 = 1, i2 = 2, tmp = 0;
    mstack.push(1);
    mstack.push(1);
   
    for (int i = 3; i < MAXFFF; ++i)
    {
        tmp = i1 +i2;
        mstack.push(tmp);
        i1 = i2; i2 = tmp;
    }
    std::cout << mstack.size() << std::endl;
    std::cout << mstack.top() << std::endl;
    std::cout << mstack.size() << std::endl;
    mstack.pop();
    mstack.pop();
    mstack.pop();
    std::cout << mstack.size() << std::endl;
	std::cout <<"-7-7-7" <<std::endl <<std::endl;
    std::cout << mstack.top() <<  "  --top stack " << std::endl;
    std::cout << *mstack.begin() << std::endl;
    std::cout << *(mstack.begin() + 1) << std::endl;
    std::cout << *(mstack.begin() + 2) << std::endl;
    std::cout << *(mstack.begin() + 3) << std::endl;
    std::cout <<"--    --    --    --" <<std::endl <<std::endl;
        // mstack.push(2);
        // mstack.push(3);
        // mstack.push(5);
        // mstack.push(8);
        // mstack.push(13);
        // mstack.push(21);
		// mstack.push(34);
		
		MutantStack<int>::iterator it = mstack.begin();
		
		while (it != mstack.end())
		{
			std::cout << *it << std::endl;
			++it;
		}
        std::cout << "-   -   -   -" << std::endl;
		//std::stack<int> s(mstack);  /*  ?   */

		

		
			std::cout << "razmer st  =  " << mstack.size() << std::endl;
			int n_f =0;
			//int nn;
			//nn = 0;
			unsigned long n_f_ll;
			n_f_ll = static_cast<unsigned long>(n_f);
			std::cout << "number input Fibonacci  <=" << mstack.size() - 1 << "    99 - exit" <<std::endl;
			std::cin >> n_f;
			while (n_f != 99 /*  && nn < 10  */)
			{
				try
				{
					n_f_ll = static_cast<unsigned long>(n_f);				
				if (n_f < 0 || (n_f_ll > mstack.size() -1 && n_f != 99 ))
				{
					//std::cout << "ll "<<n_f_ll<< "   mste.size-1="<<mstack.size() -1<<std::endl;
					throw " Error:   out of range";
				}
					
				std::cout <<n_f << "number Fibonacci = ";
				std::cout << *(mstack.begin() + n_f) << std::endl<<std::endl;
				
				}
				catch(const char* e)
				{
					std::cerr << e << std::endl<< std::endl;
				}
				// ++nn; std::cout << nn<< " nn  "<< std::endl;
				std::cout << "number input Fibonacci  <=" << mstack.size() - 1 << "    99 - exit" <<std::endl;
				std::cin >> n_f;
				
			}
		
    return 0;
}



/*
template <typename T>
MutantStack<T>::MutantStack()
{
	_size = 256;
	_ptr_st = new T[256];
	_top_st = 0;
}

template <typename T>
MutantStack<T>::MutantStack(int max)
{
	_size = max;
	_ptr_st = new T[max];
	_top_st = 0;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other_st)
{
	_size = other_st.get_size();
	_ptr_st = new T[_size];
	for (int i = 0; i < other_st.get_top; ++i)
		_ptr_st[i] = other_st._ptr_st[i];
	_top_st = other_st._top_st;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	delete[] _ptr_st;
}

//  ***   push   ***
template <typename T>
void MutantStack<T>::push(const T& element)
{
	//if (_top_st < _size)
	//	throw // max> max
		_ptr_st[_top_st] = element;
	++_top_st;
}

//   ***   pop   ***
template <typename T>
T MutantStack<T>::pop()
{
	//if (_top_st <= 0)
	//	throw // is4erpan stack
	--_top_st;
	return _ptr_st[_top_st];
}

//   ***   print   ***
template <typename T>
void MutantStack<T>::print_st()
{
	//if (_top_st < 1)
	//	throw // stack 0
	for (int i = 0; i < _top_st; ++i)
		std::cout << std::setw(3) << i << std::setw(6) << _ptr_st[i] << std::endl;
}

template <typename T>
int MutantStack<T>::get_size() const
{
	return _size;
}

template <typename T>
int MutantStack<T>::get_top() const
{
	return _top_st;
}

//  ***   T& peek(int)   ***    ???template other in http/cppstudio.com/post/5155???
template <class T>
T MutantStack<T>::iterator(int k)
{
	// if (top_ < k)
	// no count element
	return _ptr_st[_top_st - k];
}
*/
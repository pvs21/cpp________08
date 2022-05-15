#include <iostream>
#include <cmath>
#include "span.hpp"


span::span() : _n(0), _l(0), A(NULL)
{}


span::span(unsigned n) : _n(n), _l(0), A(new int[n])
{
	//int* A = new int[n];
}

span::span(const span& other) : _n(other._n), _l(other._l), A(new int[_n])
{
	//if (&other == this)
	// 
	// if (A == Null)
	// 
	//int* span::A = new int[_n];
	unsigned ii;
	for (ii = 0; (ii < (_l)) && (ii < _n); ++ii)
	{
		std::cout << ii << " " << _l << " -24- " << other.A[ii];
		A[ii] = other.A[ii];
		std::cout << "  after  " << A[ii] << std::endl;
	}
}

/*   ******      addNumber       *********   */
void span::addNumber(int val)
{
	if (get_span_l() + 1 > get_span_n())
		throw  OverflowException();  //?BaseException::Over
	settt_span(_l, val);
	++_l;
}

/* ****     shortestSpan      *****/
int span::shortestSpan()
{
	if (get_span_n() < 1 || get_span_l() <1)
		throw NoData();
	if (get_span_n() < 2 || get_span_l() < 2)
		throw NotEnoughDataException();

	int min = abs(gettt_span(0) - gettt_span(1));
	for (unsigned x = 0; x < get_span_n(); ++x)
	{
		for (unsigned y = x + 1; y <= get_span_n(); ++y)
		{
			if (min > abs(gettt_span(x) - gettt_span(y)))
				min = abs(gettt_span(x) - gettt_span(y));
		}
	}
	return min;
}

int span::min_e()
{
	if (get_span_n() < 1 || get_span_l() < 1)
		throw NoData();
	//if (A == NULL)
	//	throw no_numb
	int min = gettt_span(0);
	for (unsigned i = 1; i < get_span_l(); ++i)
		if (min > gettt_span(i))
			min = gettt_span(i);
	return min;
}


int span::max_e()
{
	if (get_span_n() < 1 || get_span_l() < 1)
		throw NoData();
	//if (A == NULL)
	//	throw no_numb
	int max = gettt_span(0);
	for (unsigned i = 1; i < get_span_l(); ++i)
		if (max < gettt_span(i))
			max = gettt_span(i);
	return max;
}

int span::longestSpan()
{
	if (get_span_n() < 1 || get_span_l() < 1)
		throw NoData();
	if (get_span_n() < 2 || get_span_l() < 2)
		throw NotEnoughDataException();
	return max_e() - min_e();
}

int span::gettt_span(unsigned l)
{
	return A[l];
}



void span::settt_span(unsigned kkk, int val)
{
	if (kkk < _n)
	{ /* excep */
	}
	_l = kkk;
	A[kkk] = val;

}

/*  span::span(span const& other) : _n(other._n), _l(other._l)
{
	int* A = new int[_n];
	unsigned ii;
	for (ii = 0; ii < _l; ++ii)
	{
		A[ii] = other.A[ii];
	}
} */

span::~span() {}

unsigned int span::get_span_n() const
{
	return _n;
}

unsigned span::get_span_l() const
{
	return _l;
}

/*  int span::get_span_e(unsigned ii) const
{
	return A[ii];
}  */


/*   int span::min_e()
{
	int  min = *(this->A);
	for (unsigned k = 1; k < this->_l; ++k)
	{
		if (this->A[k] < min)
			min = this->A[k];
	}
}



int span::max_e()
{
	int  max = *(this->A);
	for (unsigned k = 1; k < this->_l; ++k)
	{
		if (this->A[k] > max)
			max = this->A[k];
	}
}

int shortestSpan()
{

}

void span::addNumber(int num)
{
	if (_l + 1 >= _n)
		throw " overflow ";
	this->A[_l] = num;
	++_l;
}   */

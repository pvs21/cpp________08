#ifndef SPA3_HPP
#define SPA3_HPP
#include <string>


class span
{
private:
	
	unsigned _n;
	unsigned _l;
	int* A;
public:
	span();
	span(unsigned n);
	span(span const& other);
	~span();
	unsigned get_span_n() const;
	unsigned get_span_l() const;
	void settt_span(unsigned kkk, int val);
	int gettt_span(unsigned l);

	void addNumber(int val);
	int shortestSpan();
	int min_e();
	int max_e();
	int longestSpan();

	//int get_span_e(unsigned ii) const;
	//int min_e();
	//int max_e();
	//void addNumber(int num);

	
};

class BaseException
{
protected:
	std::string _text;

public:
	virtual std::string what() = 0;
};

class OverflowException :public BaseException
{
public:
	// конструкторы класса
	// конструктор по умолчанию
	OverflowException()
	{
		_text = "Error. Overflow.";
	}

	// *** конструктор с заданным текстом
	//OverflowException(string _text) { text = _text; }
	//*** переопределяем виртуальную функцию what() - обязательно
	std::string what()
	{
		return _text;
	}
};

class NoDataAvailableException : public BaseException
{};

class NoData : public NoDataAvailableException
{
public:
	NoData()
	{
		_text = "Error. No data ";
	}

	std::string what() { return _text; }
};

class NotEnoughDataException : public NoDataAvailableException
{
public:
	NotEnoughDataException()
	{
		_text = "Error. Not enough data ";
	}

	std::string what() { return _text; }
};

#endif // !SPAN_HPP
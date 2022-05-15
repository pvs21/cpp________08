#include "span.hpp"
#include <iostream>
#include <iomanip>



int main()
{
	span a1(9);

	std::cout << a1.get_span_n() << " --  a1.get_span_n() " << std::endl;
	std::cout << a1.get_span_l() << " --  a1.get_span_l() " << std::endl;
	std::cout << a1.gettt_span(0) << " -- a1.gettt_span(0)" << std::endl;
	std::cout << a1.gettt_span(1) << " -- a1.gettt_span(1)" << std::endl;
	std::cout << a1.gettt_span(2) << " -- a1.gettt_span(2)" << std::endl;
	std::cout << std::endl;

	a1.settt_span(2, 333);
	a1.settt_span(1, 222);
	a1.settt_span(0, 111);
	std::cout << a1.get_span_n() << " --  a1.get_span_n() " << std::endl;
	std::cout << a1.get_span_l() << " --  a1.get_span_l() " << std::endl;
	std::cout << a1.gettt_span(0) << " -- a1.gettt_span(0)" << std::endl;
	std::cout << a1.gettt_span(1) << " -- a1.gettt_span(1)" << std::endl;
	std::cout << a1.gettt_span(2) << " -- a1.gettt_span(2)" << std::endl;
	std::cout << std::endl;

	span& a2(a1);   // ****  &  *****
	std::cout << a2.get_span_n() << " --  a2.get_span_n() " << std::endl;
	std::cout << a2.get_span_l() << " --  a2.get_span_l() " << std::endl;
	std::cout << a2.gettt_span(0) << " -- a2.gettt_span(0)" << std::endl;
	std::cout << a2.gettt_span(1) << " -- a2.gettt_span(1)" << std::endl;
	std::cout << a2.gettt_span(2) << " -- a2.gettt_span(2)" << std::endl;
	std::cout << std::endl;
	// std::cout << a1.get_span_e(0) << " " << a1.get_span_e(1) << " " << std::endl;
	for (unsigned int iii = 0; iii < a2.get_span_n(); ++iii)
	{
		std::cout << a2.gettt_span(iii) << " = " << iii << std::endl;
	}
	std::cout << std::endl;
	span& a3(a1);
	std::cout << a3.gettt_span(1) << " -- a3.gettt_span(1)" << std::endl;

	span b5(3);
	std::cout << b5.get_span_n() << " ----  b5.get_span_n() " << std::endl;
	std::cout << b5.get_span_l() << " ----  b5.get_span_l() " << std::endl;
	std::cout << std::endl;
	b5.addNumber(11);
	b5.addNumber(22);
	b5.addNumber(33);
	std::cout << b5.get_span_n() << " ----  b5.get_span_n() " << std::endl;
	std::cout << b5.get_span_l() << " ----  b5.get_span_l() " << std::endl;
	std::cout << b5.gettt_span(0) << " ---- b5.gettt_span(0)" << std::endl;
	std::cout << b5.gettt_span(1) << " ---- b5.gettt_span(1)" << std::endl;
	std::cout << b5.gettt_span(2) << " ---- b5.gettt_span(2)" << std::endl;
	std::cout << std::endl;
		std::cout << "--      st-- 57" << std::endl;
	span c7(5);
	c7.addNumber(14);
	c7.addNumber(80);
	c7.addNumber(-24);
	c7.addNumber(5);
	c7.addNumber(-99);
	std::cout << c7.get_span_n() << " ----  b5.get_span_n() " << std::endl;
	std::cout << c7.get_span_l() << " ----  b5.get_span_l() " << std::endl;
	std::cout << c7.gettt_span(0) << " ---- b5.gettt_span(0)" << std::endl;
	std::cout << c7.gettt_span(1) << " ---- b5.gettt_span(1)" << std::endl;
	std::cout << c7.gettt_span(2) << " ---- b5.gettt_span(2)" << std::endl;
	std::cout << c7.gettt_span(3) << " ---- b5.gettt_span(1)" << std::endl;
	std::cout << c7.gettt_span(4) << " ---- b5.gettt_span(2)" << std::endl;
	std::cout << std::endl;

	int mi = c7.shortestSpan();
	std::cout << std::endl << " c7.shortestSpan( );   " << mi << std::endl;
	int m = c7.min_e();
	int ma = c7.max_e();
	std::cout << " min = " << m << std::endl;
	std::cout << " max = " << ma << std::endl;
	int mmmm = c7.longestSpan();
	std::cout << std::endl << " c7.longestSpan( );   " << mmmm << std::endl;

	// Exception
	//          Exception no data
	try
	{
		span d1(1);
		//int temp1 = d1.shortestSpan();
	}
	catch (OverflowException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (NoData e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (NotEnoughDataException e)
	{
		std::cout << e.what() << std::endl;
	}

	//             for 0  -- 5 
	std::cout << " - --- for  0  --  5    ---d2" << std::endl;
	
		span d2(5);		
		int t, lon_t;
		try 
		{
			lon_t = d2.longestSpan();
		}
		catch (OverflowException e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (NoData e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (NotEnoughDataException e)
		{
			std::cout << e.what() << std::endl;
		}
		
		//int temp1 = d2.shortestSpan();
		//srand(time(0)); ******
		//std::cout << std::endl << std::endl;
		for (int i = 0; i < 9; ++i)
		{
			try
			{
				t = rand() % 100;
				std::cout << t << std::endl;			
				d2.addNumber(t);
				lon_t = d2.longestSpan();				
				std::cout << i << std::setw(4) << t << std::setw(4) << lon_t << std::endl;
			}
			catch (OverflowException e)
			{
				std::cout << e.what() << std::endl;
			}
			catch (NoData e)
			{
				std::cout << e.what() << std::endl;
			}
			catch (NotEnoughDataException e)
			{
				std::cout << e.what() << std::endl;
			}
		}

		
	return 0;
}

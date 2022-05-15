//#include <iterator>
class Iskl
{

};


template <typename T>
int easyfind(T cont, int value)
{
	typename T::iterator it = cont.begin();
	int k = 0;
	

	while (it != cont.end() && *it != value)
	{
		k++;
		it++;
	}
	if (it == cont.end())
		throw Iskl();
	return k;


	//std::map<float, int> m_int;
	//std::map<float, int>::iterator iter = m_int.begin();
	//iter
}


#include <vector>
#include <iostream>
#include <list>
#include <map>

int main()
{
	std::vector<int> v_int;
	v_int.push_back(3);
	v_int.push_back(35);
	v_int.push_back(35);
	v_int.push_back(33);

	//std::map<int, int> m_int;
	//m_int[67] = 3;
	//m_int[11] = 35;
	//m_int[44] = 37;

	std::list<int> l_int;
	l_int.push_back(4);
	l_int.push_back(33);
	l_int.push_back(37);

	try
	{

	std::cout << "index of 35 in vector: " << easyfind<std::vector<int> >(v_int, 35) << std::endl;
	//std::cout << "index of 37 in map: " << easyfind<std::map<int, int>>(m_int, 37) << std::endl;
	std::cout << "index of 37 in list: " << easyfind<std::list<int> >(l_int, 37) << std::endl;
	}
	catch (Iskl isss)
	{
		std::cout << "not found" << std::endl;
	}
	
	return 4;
}
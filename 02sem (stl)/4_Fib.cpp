#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

/*
	Заполнение вектора числами Фибоначчи. Разобрать пример.
    Написать функцию поиска предыдущего числа по данному из последовательности
*/

class addFib
{
  	int number1;
	int number2;
	 
public:
	addFib(int number1, int number2)
	{
		this->number1=number1;
		this->number2=number2;
	}

	int operator ()()
	{
	  int n3;
	  n3 = number1 + number2;
	  number1 = number2;
	  number2 = n3;

	  return n3;
	}
};



int main()
{
	vector <int> v1(20, 1);

	cout << "\n";
	generate_n(v1.begin() + 2, v1.size() - 2, addFib(1, 1));
	cout << "\n";
  
	for (vector<int>::iterator i = v1.begin(); i != v1.end(); i++)
	{
		cout << " " << *i;
	}
	cout << "\n";
	return 0;
}
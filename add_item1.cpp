#include<iostream>
#include"Sales_item.h"
int add_item1() 
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;
	return 0;
}
#include"QuickSort.h"
#include<iostream>
#include<cstdlib>
int main()
{
	int QuickInt;
	std::cin >> QuickInt;
	Quick<int> TextExampleInt(QuickInt);
	TextExampleInt.CIN();
	TextExampleInt.QUICKSORT(0,QuickInt-1);
	TextExampleInt.COUT();
	system("pause");
	return 0;
}
#pragma once
/*template<typename T>
void CIN();
template<typename T>
void COUT();*/
template<typename T>
class Quick
{
private:
	int length;//���������鳤��
	T* QuickArray;//ָ�������һ��Ԫ��
public:
	Quick(int);
	~Quick();
    void CIN();//��ȡ�������ݣ�O(n)��
    void COUT();//������ź����ݣ�O(n)��
	void QUICKSORT(int, int);//�����㷨��O(nlgn)��
	int PARTITION(int, int);//�����������ԭַ���ţ�O(n)��
};
template<typename T>
void Quick<T>::CIN()
{
	for (int i = 0; i < length; i++)
	{
		std::cin >> QuickArray[i];
	}
}
template<typename T>
void Quick<T>::COUT()
{
	for (int i = 0; i < length; i++)
	{
		std::cout << QuickArray[i]<<" ";
	}
	std::cout << std::endl;
}
template<typename T>
Quick<T>::Quick(int Length)
{
	length = Length;
	QuickArray = new T[length];
}
template<typename T>
Quick<T>::~Quick()
{
	delete[] QuickArray;
}
template<typename T>
int Quick<T>::PARTITION(int begin, int end)
{
	auto END = QuickArray[end];
	auto i = begin-1;
	for (int j = begin; j < end; j++)
	   if(QuickArray[j]<=END)
	   {
		  i++;
		  auto exchange = QuickArray[i];
		  QuickArray[i] = QuickArray[j];
		  QuickArray[j] = exchange;
	   }
	auto exchange = QuickArray[i+1];
	QuickArray[i+1] = QuickArray[end];
	QuickArray[end] = exchange;
	return i + 1;
}
template<typename T>
void Quick<T>::QUICKSORT(int begin, int end)
{
	if (begin < end) 
	{
		auto key = PARTITION(begin, end);
		QUICKSORT(begin, key - 1);
		QUICKSORT(key + 1, end);
	}
}
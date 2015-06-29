#include<iostream>
#include"SafeArray.h"
using namespace std;
SafeArray::SafeArray()
{
	longth = 8;
	size = 0;
	date = new int (8);
}
void SafeArray::setdate(int num)
{
	if (size > longth)
	{
		int *temp;
		longth = longth + 8;
		temp = new int(longth);
		for (int i = 0; i < size; i++)
		{
			temp[i] = date[i];
		}
		this->date = new int(longth);
		for (int i = 0; i < size; i++)
		{
			date[i] = temp[i];
		}
		delete temp;
	}
	date[size] = num;
	size++;
}
int SafeArray::getdate(int num)
{
	return date[num];
}
int SafeArray::getsize()
{
	return size;
}
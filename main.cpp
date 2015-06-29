#include<iostream>
#include"SafeArray.h"
using namespace std;
int main()
{
	SafeArray safe;
	int num;
	cout << "enter the number end with -1" << endl;
	while (1)
	{
		cin >> num;
		if (num < 0)
		{		cout << "enter over" << endl;
		break;
		}
		safe.setdate(num);
	}
	for (int i = 0; i < safe.getsize(); i++)
	{
		cout << safe.getdate(i) << endl;
	}
	system("pause");
	return 0;
}
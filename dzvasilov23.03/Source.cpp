#include <iostream>
#include<vector>
#include<Windows.h>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	vector<int>vector1(10);
	vector<int>vector2(10);
	for (unsigned short i = 0; i < 10; i++)
	{
		vector1[i] = rand() % 199 - 99;
		vector2[i] = rand() % 199 - 99;
	}
	vector<int>vector3(vector1.size() + vector2.size());
	for (int i = 0; i < 10; i++)
	{
		vector3[i] = vector1[i];
		vector3[i + 10] = vector2[i];


	}

	cout << "векторі 1 = ";
	
	for (int i = 0; i < 10; i++)
	{
		cout << vector1[i]<<" ";
		
	}
	cout << endl;
	cout << "вектор 2 = ";
	for (int i = 0; i < 10; i++)
	{
		cout << vector2[i] << " ";
		
	}
	cout << endl;
	cout << "вектор 3 = ";
	for (int i = 0; i < 10; i++)
	{
		cout << vector3[i] << " ";
		
	}
}



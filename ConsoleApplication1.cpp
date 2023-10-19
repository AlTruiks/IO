#include <iostream>
using namespace std;

int main()
{
	int AA[10];
	int count = 0;
	cout << "Podaj 10 liczb po kolei" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> AA[i];
		if (AA[i] < 0)
		{
			count++;
		}	
	}
	int* BB = new int[count];
	int j = 0;
	cout << "Liczby ujemne: " << endl;
	for (int i = 0; i < 10; i++)
	{
		if (AA[i] < 0)
		{
			BB[j] = AA[i];
			cout << BB[j] << endl;
			j++;
		}
	}
	cout << "Policylo: " << count << endl;
	cout << "Pomineto: " << 10 - count << endl;
 	delete[] BB;
	return 0;
}
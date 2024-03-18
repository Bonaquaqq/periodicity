#include<iostream>
#include<string>

using namespace std;

bool IsKPeriodio(string S, int K)
{
	if (S.length() % K != 0) 
	{
		return false;
	}

	for (int i = 0; i < S.length(); i += K)
	{
		string substr = S.substr(i, K);
	}
	
	
	return true;

}


int main()
{
	setlocale(LC_ALL, "RU");

	string input;
	int k;

	cout << "Введите строку S: ";
	cin >> input;

	cout << "Введите число K: ";
	cin >> k;

	if (IsKPeriodio(input, k)) {
		cout << "Строка является кратной числу" << k << endl;
	
	}
	else
	{
		cout << "Строка не является кратной числу " << k << endl;
	}

	return 0;
}
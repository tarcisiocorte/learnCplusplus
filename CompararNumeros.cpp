#include <iostream>

using namespace std;

int main()
{
	int firstNumber;
	int secondNumber;
	cout << "Digite um número: ";
	cin >> firstNumber;
	cout << "Você digitou " << firstNumber << ". Digite outro númereo: ";
	cin >> secondNumber;

	if (firstNumber < secondNumber)
	{
		cout << "O primeiro número é , " << firstNumber << ", é menor que o segundo número , " << secondNumber << endl;
	}
	else
	{
		cout << "O primeiro número, " << firstNumber << ", não é menor que o segundo númeero, " << secondNumber << endl;
	}
	if (firstNumber == secondNumber)
	{
		cout << "O primeiro número, " << firstNumber << ", é igual ao segundo número, " << secondNumber << endl;
	}
	if (firstNumber > secondNumber)
	{
		cout << "O primeiro número, " << firstNumber << ", é maior que o segundo número, " << secondNumber << endl;
	}

	return 0;
}


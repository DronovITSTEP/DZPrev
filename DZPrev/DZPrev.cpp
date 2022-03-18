#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// внесенный депозит на счет (в евро)
	float euroDeposit;
	cout << "Введите сумму внесения на депозит: ";
	//cin >> euroDeposit;
	euroDeposit = 500;
	cout << euroDeposit << endl;

	// курс доллара к евро в течение года
	//float arrayEuro_Dollar[12];
	float arrayEuro_Dollar[12] = { 2, 3, 1, 4.5, 2.2, 1, 3.1, 2.5, 1, 1.9};
	cout << "Введите курс доллара к евро за каждый месяц(1 - 12)\n";
	for (int i = 0; i < 12; i++) {
		cout << "месяц " << i+1 << " - ";
	//	cin >> arrayEuro_Dollar[i];
		cout << arrayEuro_Dollar[i] << endl;

	}
	

	// месячный процент
	int percent_month;
	cout << "Введите месячный процент: ";
	//cin >> percent_month;
	percent_month = 10;
	cout << percent_month << endl;

	// начисление процентов за каждый месяц
	float arrayEuro_month[12];
	arrayEuro_month[0] = euroDeposit;
	for (int i = 1; i < 12; i++) {
		arrayEuro_month[i] = arrayEuro_month[i-1] + arrayEuro_month[i-1] / 100 * percent_month;
		cout << arrayEuro_month[i] << " ";
	}
	cout << endl;

	int month;
	cout << "Укажите месяц ";
	cin >> month;

	float dollar = arrayEuro_month[month - 1] * arrayEuro_Dollar[month - 1];

	if (dollar >= 500) {
		cout << "Вы можете обналичить " << dollar / 2 << " $";
	}
	else {
		cout << "Недостаточно средств!";
	}
}

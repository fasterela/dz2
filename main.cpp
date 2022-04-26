#include "Ex2.h"

int main() {
	setlocale(0, "");
	string s;
	int ch;
	cout << "Введите строку:" << endl;
	cin >> s;
	cout << "Выберите преобразование строки" << endl;
	cout << "1. Избавиться от минусов в строке" << endl;
	cout << "2. Заменить все элементы на 5" << endl;
	cout << "3. Заменить все на рандомные числа " << endl;
	cin >> ch;
	switch (ch) {
	case 1:
		cout << deleteMinus(s) << endl;
		break;
	case 2:
		cout << change5(s) << endl;
		break;
	case 3:
		cout << randomChange(s) << endl;
		break;

	}


	//2 часть
	int n;
	cout << "Введите размер массива:" << endl;
	cin >> n;
	int* arr = new int[n]; //память
	srand(time(0)); // первое число до rand()
	for (int i = 0; i < n; i++) {
		arr[i] = 1 + rand() % 100;
	}
	func(arr, n)(arr, n);
	delete[] arr;
	return 0;
	
}


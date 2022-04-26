#include "Ex2.h"

string deleteMinus(string s)
{
	string str = "";
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != '-') {
			str.append(s, i, 1);
		}
	}
	return str;
}

string change5(string s)
{
	string str;
	for (int i = 0; i < s.length(); i++) {
		str += "5";
	}
	return string(str);
}

char randomZn()
{
	return '0' + rand() % ('9' - '0');
}

string randomChange(string s)
{
	string str;
	for (int i = 0; i < s.length(); i++) {
		str += randomZn();
	}
	return string(str);
}

//2 часть
void (*func(int* arr, int size))(int* arr, int size) { // указатель  на функцию
	if (sumArr(arr, size) > arr[0]) {
		return nonDec;
	}
	if (sumArr(arr, size) < arr[0]) {
		return nonGrowth;
	}
	if (sumArr(arr, size) == arr[0]) {
		 return invert;
	}
}

void print(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int sumArr(int* arr, int size)
{
	int s = 0;
	for (int i = 0; i < size; i++) {
		s += arr[i];
	}
	return s;
}

void invert(int* arr, int size)
{
	for (int i = size; i > size; i--) {
		cout << arr[i];
	}
}

void nonDec(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] <= arr[j + 1]) {
				int b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
	}
	print(arr, size);
}

void nonGrowth(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] >= arr[j + 1]) {
				int b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
	}
	print(arr, size);
}



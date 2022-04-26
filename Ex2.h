#ifndef EX2_H
#define EX2_H

#include <iostream>
#include <string>
#include <ctime>
using namespace std;
//1 часть
string deleteMinus(string s);
string change5(string s);
char randomZn();
string randomChange(string s);

//2 часть
void (*func(int* arr, int size))(int* arr, int size);
void print(int*, int size);
int sumArr(int*, int size);
void invert(int*, int size);
void nonDec(int*, int size);
void nonGrowth(int*, int size);




#endif
#pragma once
#include <iostream>
using namespace std;

class Clock
{
private:
	int hr;
	int min;
	int sec;

public:
	int to12(int&);
	int to24(int&);
	void menu();
	void inputTime(int&, int&, int&);
	void showTime(int&, int&, int&);
};
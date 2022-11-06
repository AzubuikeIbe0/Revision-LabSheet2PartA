#include "Clock.h"



void Clock::menu() {
	int choice;


	cout << "Welcome, Follow the menu to convert your time" << endl;
	cout << "Press 1 to convert to 12 hours \nPress 2 to convert to 24 hours \nPress -1 to exit" << endl;
	cin >> choice;


	if (choice == 1)
		cout << "TIME CONVERSION FROM 24 TO 12 HOURS NOTATION" << endl;

	else if (choice == 2)
		cout << "TIME CONVERSION FROM 12 TO 24 HOURS NOTATION" << endl;
	else if ((choice == -1))
		exit(0);
	else
	{
		cout << "Invalid Input! Try again" << endl;
		Clock::menu();
	}

}

void Clock::inputTime(int& hr, int& min, int& sec)
{

	std::cout << "Enter the hour: " << endl;
	std::cin >> hr;

	std::cout << "Enter the Minutes: " << endl;
	std::cin >> min;

	std::cout << "Enter the Seconds: " << endl;
	std::cin >> sec;

	if ((hr > 24) || (hr < 0))
		std::cout << "Invalid hour, try again!" << endl;
	else if ((min > 60) || (min < 0))
		std::cout << "Invalid minutes, try again!" << endl;
	else if ((sec > 60) || (sec < 0))
		std::cout << "Invalid seconds, try again!" << endl;


}

int Clock::to12(int& hr)
{

	if (hr <= 12)
	{
		hr = hr;

	}
	else if ((hr > 12) && (hr < 24))
	{
		hr = hr - 12;
	}
	else if ((hr == 0) || (hr == 24))
	{
		hr = 12;
	}
	else {
		std::cout << "Invalid input, try again" << endl;
	}

	return hr;
}

int Clock::to24(int& hr)
{


	if (hr < 24)
	{
		hr = hr;

	}

	else if ((hr == 0) || (hr == 24))
	{
		hr = 0;

	}
	else {
		std::cout << "Invalid input, try again" << endl;
	}

	return hr;
}


void Clock::showTime(int& hr, int& min, int& sec)
{
	if ((Clock::to12(hr) || Clock::to24(hr)) && (hr < 12))
	{
		std::cout << "The time is : " << endl;
		std::cout << hr << ":" << min << ":" << sec << "AM" << endl;
	}
	else
	{
		std::cout << "The time is : " << endl;
		std::cout << hr << ":" << min << ":" << sec << "PM" << endl;
	}
}

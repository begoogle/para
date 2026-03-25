#include <iostream>
#include <Windows.h>
#include "Transport.hpp"

void PrintTransportInfo(const Transport* obj);
void PrintTransportInfo(const Transport* obj, bool showDistance);

int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	Taxi one(75);

	PrintTransportInfo(&one);
	PrintTransportInfo(&one, true);

	return 0;
}

void PrintTransportInfo(const Transport* obj)
{
	std::cout << obj->PrintInfo();
}

void PrintTransportInfo(const Transport* obj, bool showDistance)
{
	std::cout << obj->PrintInfo();
	if (showDistance) 
	{
		std::cout << obj->GetDistance();
	}
}

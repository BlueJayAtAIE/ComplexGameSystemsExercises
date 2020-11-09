#include <iostream>
#include <thread>

void print()
{
	std::cout << "Weavin' time\n";
}

int main()
{
	std::thread threadPrint(print);

	threadPrint.join();

	return 0;
}
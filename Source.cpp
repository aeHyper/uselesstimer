#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <thread>

using namespace std;
using namespace this_thread;
using namespace chrono;

int main() {

	char animation[3] = { (char)79, (char)79, (char)79 };
	int random;
	int numb = 0;
	bool loopVariable = true;

	srand(time(NULL));
	random = rand() % 9 + 2;

	cout << "Estimated wait time " << random << " minutes.\n";
	sleep_until(system_clock::now() + seconds(3));
	system("cls");

	cout << animation[0] << animation[1] << animation[2];
	sleep_until(system_clock::now() + seconds(1));
	system("cls");

	while (loopVariable)
	{
		if (numb >= (random * 60)) {
			loopVariable = false;
		}
		system("cls");
		for (int i = 0; i <= 2; i++)
		{
			animation[i] = (char)233;
			cout << animation[i];
			sleep_until(system_clock::now() + seconds(1));
		}
		system("cls");
		for (int i = 0; i <= 2; i++)
		{
			animation[i] = (char)79;
			cout << animation[i];
		}
		sleep_until(system_clock::now() + seconds(1));
		numb += 4;
	}

	cout << "Time's up!\n" << endl;
	system("pause");
	return 0;

}
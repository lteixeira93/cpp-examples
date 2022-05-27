#include<iostream>
#include<vector>
#include<iomanip>
#include<string>

using namespace std;

int main(void) {
	// Ex1
	cout << "=============== Example 1 ===============" << endl;
	int scores[]{ 100, 200, 300 };

	for (auto const &score: scores) {
		cout << score << endl;
	}
	cout << endl;

	// Ex2
	cout << "=============== Example 2 ===============" << endl;
	vector <double> temps{ 87.9, 77.9, 80.0, 72.5 };
	double average{ 0 };

	for (auto temp : temps) {
		average += temp;
	}

	if (temps.size() == 0) {
		throw 0;
	}
	else {
		cout << fixed << setprecision(1);
		cout << "Average temperature is: " << average / temps.size() << endl;
	}
	cout << endl;

	// Ex3
	cout << "=============== Example 3 ===============" << endl;
	vector <string> stooges{ "Larry", "Moe", "Curly" };

	for (auto str : stooges) {
		str = "Funny"; // Changing copy
	}

	for (auto str: stooges) {
		cout << str << endl;
	}
	cout << endl;

	// Ex4
	cout << "=============== Example 4 ===============" << endl;

	for (auto &str: stooges) {
		str = "Funny"; // Changing variable
	}

	for (auto const &str: stooges) {
		cout << str << endl; // More efficient because stooges is not copied (Reference)
	}
	cout << endl;
	
	return 0;
}
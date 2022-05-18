#include<iostream>
#include<vector>

using namespace std;

int main(void) {
	int i{ 0 };
	vector <int> int_vector{ 0 };

	int_vector.push_back(i);
	i = 10;
	int_vector.push_back(i);

	cout << "Hello VS Enterprise" << endl;

	return 0;
}
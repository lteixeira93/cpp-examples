#include<iostream>
#define DEEP_COPY

using namespace std;

class Shallow
{
private:
	int* data;
public:
	void set_data_value(int d) { *data = d; }
	int get_data_value() { return *data; }

	Shallow(int d);
	Shallow(const Shallow &source); // Copy constructor
	~Shallow();

};

Shallow::Shallow(int d)
{
	data = new int;
	*data = d;
}

//#undef DEEP_COPY

#ifdef DEEP_COPY
Shallow::Shallow(const Shallow &source)
{
	cout << "DEEP_COPY constructor" << endl; // Copy not points to the same address of obj0 with raw pointer
	data = new int;
	*data = *source.data;
}
#else // SHALLOW_COPY
Shallow::Shallow(const Shallow &source)
: data{ source.data }
{
	cout << "SHALLOW_COPY constructor" << endl; // Copy points to the same address of obj0 with raw pointer
}
#endif

Shallow::~Shallow()
{
	delete data;
	cout << "Freeing data" << endl;
}

void display_shallow(Shallow obj) {
	cout << "Object data: " << obj.get_data_value() << endl;
}

int main(void) {
	Shallow obj0 {100};
	display_shallow(obj0);

	Shallow obj1{ obj0 };
	obj1.set_data_value(1000);

	return 0;
}
#include<iostream>
#include<vector>

#define MOVE_CONSTRUCTOR

using namespace std;

class Move
{
private:
	int* data;
public:
	void set_data_value(int data) { *this->data = data; }
	int get_data_value() const { return *this->data; } // const means that the method won't change the const objects

	Move(int d);					   // Constructor	
	Move(const Move &source);		   // Copy constructor
#ifdef MOVE_CONSTRUCTOR
	Move(Move&& source) noexcept;      // Move constructor - More efficient than copy
#endif // MOVE_CONSTRUCTOR	
	~Move();						   // Destructor	
};

Move::Move(int d)
{	
	data = new int;
	*data = d;
	cout << "Constructor for: " << d << endl;
}

Move::Move(const Move &source)
:Move (*source.data)        // Delegates to Move(int d)
{	
	cout << "Deep copy constructor for: " << *data << endl; // Copy not points to the same address of obj0 with raw pointer
}

#ifdef MOVE_CONSTRUCTOR
Move::Move(Move &&source) noexcept
:data{ source.data } {      // Move address to data and null out source.data pointer
	source.data = nullptr;
	cout << "Move contructor - moving resource: " << *data << endl;
}
#endif // MOVE_CONSTRUCTOR	

Move::~Move()
{
	if (data != nullptr) {
		cout << "Freeing data for: " << *data << endl;
	}else cout << "Freeing data for nullptr" << endl;
	
	delete data;	
}

void display_shallow(const Move &obj) {
	cout << "Object data: " << obj.get_data_value() << endl;
}

int main(void) {
	vector<Move> v;

	v.push_back(Move{10}); // Move{10} -> Is an R-Value
	v.push_back(Move{20});
	v.push_back(Move{30});
	v.push_back(Move{40});
	v.push_back(Move{50});
	v.push_back(Move{60});
	v.push_back(Move{70});
	v.push_back(Move{80});

	return 0;
}
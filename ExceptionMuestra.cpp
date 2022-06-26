// C++ program to show how many times
// Constructors and destructors are called
#include <iostream>
using namespace std;

// Def class Test
class Test {
	static int count; // Used static to initialise the scope
					// Of 'count' till lifetime
	int id;

	public:
	
		// Constructor
		Test() {
		
			count++;
			id = count;
			cout << "Constructing object number " << id << endl;
		
		if (id == 4)
			throw 4;
	
		}

		// Destructor
		~Test() {
		
		cout << "Destructing object number " << id << endl;
		
		}

}; // End class

int Test::count = 0;

// Driver code
int main() {
	try {
		Test array[5];
	}
	catch (int i) {
		cout << "Caught " << i << endl;
	}
} // End driver



#include"string.h"

void testCapacity(String x)
{
	
	int input;
	char ch;
	cout << "\n-------------------------- CAPACITY --------------------------" << endl;
	cout << "\n***** Test str: " << x;
	cout << "\nSize: " << x.size();
	cout << "\nLength:"  << x.length();
	cout << "\nMax_size: "  << x.max_size();
	cout << "\nCapacity: "  << x.capacity();
	//

	cout << "\nResize: ";
	cout << "\n\t1. void resize (size_t n)";
	cout << "\n\t\t- Input new string length: ";
	cin >> input; 
	x.resize(input);
	cout << "\n\t\t- After use ( void resize (size_t n) )        length = " << x.length()  << "\t\tstr = " << x;
	cout << "\n\n\t2. void resize (size_t n, char c)";
	cout << "\n\t\t- Input new string length: "; cin >> input;
	cout << "\n\t\t- Resize  the string to a length of ???? characters: "; 
	cin >> ch;
	x.resize(input, ch);
	cout << "\n\t\t- After use ( void resize (size_t n, char c) )        length = " <<x.length()<< "\t\tstr = " << x;
 
		

	//
	cout << "\nReserve: "; cout << "\n\t-New string capacity: "; cin >> input; x.reserve(input);
	cout << "\n\t-After reserve, capacity = " << x.capacity();
	//
	
	//
	cout << "\nIs string empty: " << x.empty();
	cout << "\nShrink to fit: ";
	x.shrink_to_fit();
	cout << "\t\tLength = " << x.length();
	cout << "\t\tCapacity = " << x.capacity();
	//
	cout << "\nClear: ";
	x.clear();
	cout << "\n\t- After clear, str = " << x;
	cout << "\t\tlength = " << x.length();
	cout << "\t\tcapacity = " << x.capacity();

}
int main()
{

	return 0;

}

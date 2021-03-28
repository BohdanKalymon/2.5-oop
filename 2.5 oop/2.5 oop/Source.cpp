#include "Student.h"
using namespace std;
int main()
{
	Student s1;
	Student s4("Vasyl", 20, "IT", 2010);
	cout << s4 << endl;
	s1 = ++s4;
	cout << s4 << endl;
	s1 = s4++;
	cout << s4 << endl;
	return 0;
}

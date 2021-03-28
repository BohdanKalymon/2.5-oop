
#include "Man.h"
#include "Student.h"
#include <sstream>
void Student::Init(string spec, Man man, int rik)
{
	setSpec(spec);
	setMan(man);
	setRik(rik);

}
void Student::Display() const
{
	cout << endl;
	cout << "man = " << endl;
	man.Display();
	cout << "spec = " << spec << endl;
}
void Student::Read()
{
	string spec;
	Man m;
	cout << endl;
	cout << "Man = ? " << endl;
	m.Read();
	cout << "spec = ? "; cin >> spec;

	Init(spec, m, rik);
}
Student::Student(const string name, const int age, const string spec, const int rik)
	: man(name, age), spec(spec), rik(rik)
{}
Student::Student(const Student& s)
{
	man = s.man;
	spec = s.spec;
	rik = s.rik;
}
Student& Student::operator =(const Student& s)
{
	man = s.man;
	spec = s.spec;
	rik = s.rik;
	return*this;
}
ostream& operator <<
(ostream& out, const Student& s)
{
	out << string(s);
	return out;
}
istream& operator >>(istream& in, Student& s)
{
	string spec;
	int rik;
	cout << endl;
	cout << "man = ? "; in >>
		s.man;
	cout << "spec = ? "; in >> spec;
	cout << "rik = ?"; in >> rik;
	s.setSpec(spec);
	s.setRik(rik);
	return in;
}
Student::operator string () const {
	stringstream ss;
	ss << "spec = " << spec << endl;
	ss << "rik = " << rik << endl;
	return string(man) + ss.str();
}

Student& Student::operator ++ () {
	++rik;
	++man;
	return *this;
}
Student& Student::operator -- () {
	--rik;
	--man;
	return *this;
}
Student Student::operator ++
(int
	)
{
	Student s(*this);
	rik++;
	man++;

	return s;
}
Student Student::operator --
(int
	)
{
	Student s(*this);
	rik--;
	man--;
	return s;
}


Student::~Student(void)
{}

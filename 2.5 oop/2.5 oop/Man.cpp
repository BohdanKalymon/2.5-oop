#include "Man.h"
#include <sstream>

void Man::Display() const {
	cout << "name = " << name << endl;
	cout << "age = " << age << endl;
}
void Man::Init(string name, int age
)
{
	setName(name);
	setAge(age);
}
void Man::Read() {
	string name;
	int age;
	cout << endl;
	cout << "name = ? "; cin >> name;
	cout << "age = ? "; cin >> age;
	Init(name, age);
}
Man::Man()
	: name(""), age(0)
{}
Man::Man(const string name
)
	: name(name), age(0)
{}
Man::Man(const int age
)
	: name(""), age(age)
{}
Man::Man(const string name, const int age
)
	: name(name), age(age)
{}
Man::Man(const Man& m)
	: name(m.name), age(m.age)
{}
Man& Man::operator =
(const Man& m)
{
	this->name = m.name;
	this->age = m.age;
	return*this;
}
ostream& operator <<
(ostream& out, const Man& m)
{
	out << string(m);
	return out;
}
istream& operator >>
(istream& in, Man& m)
{
	string name;
	int age;
	cout << endl;
	cout << "name = ? "; in >> name;
	cout << "age = ? "; in >> age;
	m.setName(name);
	m.setAge(age);
	return in;
}
Man::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "name = " << name << endl;
	ss << "age = " << age << endl;
	return ss.str();
}
Man& Man::operator ++ ()
{
	++age;
	return *this;
}
Man& Man::operator -- ()
{
	--age;
	return *this;
}
Man Man::operator ++ (int)
{
	Man t(*this);
	age++;
	return t;
}
Man Man::operator -- (int)
{
	Man t(*this);
	age--;
	return t;
}
Man::~Man(void)
{}


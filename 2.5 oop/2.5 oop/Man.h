#pragma once
#include <string>
#include <iostream>
using namespace std;
class Man
{
private:
	string name;
	int age;
public:
	string getName() const { return name; }
	int getAge() const { return age; }
	void setName(string name) { this->name = name; }
	void setAge(int age) { this->age = age; }
	void Init(string name, int age);
	void Display() const;
	void Read();
	Man();
	Man(const string name);
	Man(const int age);
	Man(const string name, const int age);
	Man(const Man& m);
	Man& operator = (const Man& m);
	friend ostream& operator << (ostream& out, const Man& m);
	friend istream& operator >> (istream& in, Man& m);
	operator string () const;
	Man& operator ++ ();
	Man& operator -- ();
	Man operator ++ (int);
	Man operator -- (int);
	~Man(void);
};

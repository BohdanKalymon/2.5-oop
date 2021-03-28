#pragma once
#include "Man.h"
class Student
{
private:
	string spec;
	Man man;

	int rik;
public:
	string getSpec() const { return spec; }
	Man getMan() const { return man; }
	int getRik() const { return rik; }
	void setSpec(string spec) { this->spec = spec; }
	void setMan(Man man) { this->man = man; }
	void setRik(int rik) { this->rik = rik; }

	void Init(string spec, Man man, int rik);
	void Display() const;
	void Read();
	Student(const string name = "", const int age = 0, const string spec = "", const int rik = 0);
	Student(const Student& s);
	Student& operator = (const Student& s);
	friend ostream& operator << (ostream& out, const Student& s);
	friend istream& operator >> (istream& in, Student& s);
	operator string () const;
	Student& operator ++ ();
	Student& operator -- ();
	Student operator ++ (int);
	Student operator -- (int);

	~Student(void);
};


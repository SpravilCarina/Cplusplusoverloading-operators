#include<iostream>
#include<cstring>
#include<string>

using namespace std;

class Student
{
	string nume, prenume;
	unsigned int varsta;
	int nr_matricol;
public:
	Student(string n, string p, unsigned int v, int nr)
	{
		nume = n;
		prenume = p;
		varsta = v;
		nr_matricol = nr;

	}
	friend ostream& operator<<(ostream& iesire, Student st);

};

ostream& operator<<(ostream& iesire, Student st)
{
	iesire << st.nume << " " << st.prenume;
	iesire << " are " << st.varsta << " ani";
	iesire << " numar matricol " << st.nr_matricol << "\n";
	return iesire;
}

int main()
{
	Student a("Popescu", "Ioana", 19, 2345);
	Student b("Lupse", "Oana", 21, 1385);
	cout << a << b;
	return 0;
}
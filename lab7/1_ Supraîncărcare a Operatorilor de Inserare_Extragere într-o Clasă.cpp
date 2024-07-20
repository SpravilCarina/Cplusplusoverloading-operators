#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class Student
{
public:
	string nume, prenume;
	unsigned int varsta;
	int nr_matricol;
	Student(string n, string p, unsigned int v, int nr)
	{
		nume = n;
		prenume = p;
		varsta = v;
		nr_matricol = nr;
	}
};

ostream& operator<<(ostream& iesire, Student st)
{
	iesire << st.nume << " " << st.prenume;
	iesire << "are " << st.varsta << " ani";
	iesire << " numar matricol " << st.nr_matricol<<"\n";
	return iesire;
}

int main()
{

	Student a("Popescu", "Lili", 19, 2010);
	Student b("Mircea", "Ioan", 45, 3213);
	cout << a << b;
	return 0;
}
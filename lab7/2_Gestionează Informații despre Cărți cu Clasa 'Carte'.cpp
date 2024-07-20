#include<iostream>
#include<cstring>
#include<string>

using namespace std;

class Carte
{
public:
	string titlu, nume_autori, editura;
	int an_publicare;
	Carte(string t, string n, string e, int a)
	{
		titlu = t;
		nume_autori = n;
		editura = e;
		an_publicare = a;
	}
};

ostream& operator<<(ostream& iesire, Carte st)
{
	iesire << " titlu "<<st.titlu << " ,";
	iesire << " nume autor "<<st.nume_autori << " ,";
	iesire << " editura " << st.editura << " ,";
	iesire << " an publicare " << st.an_publicare << "\n";
	return iesire;
}

int main()
{
	Carte a("Ion", "Carag", "Ojs", 1995);
	Carte b("Adi", "Iscuz", "Hgusd", 2009);
	cout << a << b;
	return 0;
}
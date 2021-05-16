#include<iostream>
using namespace std;
class xronos
{
	private:
	int s;
	
	public:
	int gets();
	void sets(int x);
	int deytelopeptaselepta();
	int deyteroleptaseores();	
};

int xronos::gets()
{
	return s;
}

void xronos::sets(int x)
{
	s=x;
}

int xronos::deytelopeptaselepta()
{
	return s*0.01667;
}

int xronos::deyteroleptaseores()
{
	return s*0.0002778;
}



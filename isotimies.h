#include<iostream>
using namespace std;
class isotimies
{
	
	
	private:
	float euro;
	float dolario;
	float draxmes;
	
	public:
	float geteuro();
	float getdolario();
	float getdraxmes();
	void seteuro(float f);
	void setdolario(float f);
	void setdraxmes(float f);
	float eyrosedolario();	
	float dolarioseeuro();
	float eyrosedraxmes();
	float draxmesseeyro();
	
	
};

float isotimies::geteuro()
{
	return euro;
}

float isotimies::getdolario()
{
	return dolario;
}

float isotimies::getdraxmes()
{
	return draxmes;
}

void isotimies::seteuro(float f)
{
	euro=f;
}
void isotimies::setdolario(float f)
{
	dolario=f;
}

void isotimies::setdraxmes(float f)
{
	draxmes=f;
}

float isotimies::eyrosedolario()
{
	return euro*1.1073;
}
float isotimies::dolarioseeuro()
{
	return dolario/1.1073;
}

float isotimies::eyrosedraxmes()
{
	return euro*340.75; 
}
float isotimies::draxmesseeyro()
{
	return draxmes/340.75;
}






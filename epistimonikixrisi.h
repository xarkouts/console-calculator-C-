#include<iostream>
using namespace std;
#include<cmath>

class epistimonikixrisi
{

  private:
  int a;
  int b;
  int x;
  int y;
  double c;
  
  public:
	int geta();
	int getb();
	void seta(int x);
	void setb(int x);
	
	int dynamis();
	double imitono();
	double setc(double x1);
	double sinimitono();
	double efaptomeni();
	double log();
	int Nparagontiko();
  
  
		
	
	
	

	
};


int epistimonikixrisi::geta()
{
	return a;
}

  int epistimonikixrisi::getb()
  {
  	return b;
  }
  
  void epistimonikixrisi::seta(int x)
  {
  	a=x;
  }
  void epistimonikixrisi::setb(int x)
  {
  	b=x;
  }
 
   
  int epistimonikixrisi::dynamis()
  {
  	return pow(a,b);
  }
  
  double epistimonikixrisi::setc(double x1)
  {
  	c=x1;
  }
  
  double epistimonikixrisi::imitono()
  {
  	return sin(c);
  }
  
  double epistimonikixrisi::sinimitono()
  {
  	return cos(c);
  }
  
  double epistimonikixrisi::efaptomeni()
  {
     return tan(c);  
  }
  double epistimonikixrisi::log()
  {
  	return log10(c);
  }
  int epistimonikixrisi::Nparagontiko()
  {
  	
  	int krat=1;
  	
  		
  		
    
  	while(a>0)
  	{
  		krat=krat*a;
  		--a;
	  }
  	return krat;
  	
  }

  	
  	
  	
  	
  	
  	


  

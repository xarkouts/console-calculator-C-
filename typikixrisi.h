#include<iostream>
using namespace std;
#include<cmath>

class typikixrisi
{
	
	
	
	
	
	private:
	int a;
	int b;
	double c;
	
	
	int dinami;
	int riza;
	
	
	public:
	int geta();
	int getb();
	double getc();
	void seta(int x);
	void setb(int x);
	void setc(int x1);
	int suml();
	int aferesi();
	int gin();
	int dieressi();
	int piliko();
	
	int dyodinami();
	int tetragonikiriza();
	int pososto();
	double enadiax();
	
	
	
	
	
	
	
	
	
	
	
	
};

 int typikixrisi::geta() 
{
	return a;
}
int typikixrisi::getb()  
{
	return b;
}
double typikixrisi::getc()  
{
	return c;
}
void typikixrisi::seta(int x) 
{
	a=x;
}
	void typikixrisi::setb(int x) 
	 {
	  
	  b=x;
     }
    void typikixrisi::setc(int x1) 
	 {
	  
	  c=x1;
     }
	int typikixrisi::suml() 
	{
		return a+b;
	}
	int typikixrisi::aferesi()
	{
		return a-b;
	}
	int typikixrisi::gin()
	{
		return a*b;
	}
	int typikixrisi::dieressi()
	{
		return a/b;
	}
	
	int typikixrisi::piliko()
		{
			return a%b;
		}
		
	int typikixrisi::dyodinami()
	{
		
		
		return pow(a,2);
	}
	int typikixrisi::tetragonikiriza()
	{
		
		
		return sqrt(a);
	}
	int typikixrisi::pososto()
	{
		return a*b/100;
	}
	
	double typikixrisi::enadiax()
	{
		return 1/c;
	}
	    
	    


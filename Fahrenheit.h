#include<iostream>
using namespace std;
class Fahrenheit 
{

private:
float c;
float f;

	
public: 
 float getc();
 
 void setc(float f);
 
 float fahr();  
 
};
 
 float Fahrenheit::getc()
 {
 	return c;
  } 
 
 void Fahrenheit::setc(float f)
 {
 	c=f;
 }
 float Fahrenheit::fahr()
 {
 	return f=(c*9/5)+32;
  } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 


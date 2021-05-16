#include<iostream>
using namespace std;
class Celsius  
{

private:
float c;
float f;

	
public: 
 float getf();
 
 void setf(float f);
 
 float cels();  
 
};
 
 float Celsius::getf()
 {
 	return f;
  } 
 
 void Celsius::setf(float f)
 {
 	f=f;
 }
 float Celsius::cels()
 {
 	return c=(f-32)*5/9;
  } 
  
  

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 


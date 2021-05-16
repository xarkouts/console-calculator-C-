#include<iostream>
using namespace std;
class metatropimikous
{

private:

double km;

	
public: 
 float getkm();
 
 void setkm(float f);
 
 float xiliometrasemetra();  
 float xiliometraseekatosta();
 float xiliometrasexiliosta();
 float xiliometaselebges();
 float xiliometasepodia();
 float xiliometrasemilia();
 float xiliometrasenaytikamilia();
 float xiliometraseintses();
 float xiliometrasegiardes();
};
 
 float metatropimikous::getkm()
 {
 	return km;
  } 
 
 void metatropimikous::setkm(float f)
 {
 	km=f;
 }
 float metatropimikous::xiliometrasemetra()
 {
 	return km*1000;
  } 
 
 
 float metatropimikous::xiliometraseekatosta()
 {
 	return km*100000;
 }
 
 float metatropimikous::xiliometrasexiliosta()
 {
 	return km*1000000;
 }
 
 float metatropimikous::xiliometaselebges()
 {
 	return km*0.2071;
 }
 
 float metatropimikous::xiliometasepodia()
 {
 	return km*3280.84;
 }
 
 float metatropimikous::xiliometrasemilia()
 {
 	return km*0.6214;
  } 
 
 float metatropimikous::xiliometrasenaytikamilia()
 {
 	return km*0.5400;
 }
 
 float metatropimikous::xiliometraseintses()
 {
 	return km*39370.098;
 }
 
 float metatropimikous::xiliometrasegiardes()
 {
 	return km*1093.61;
 }
 
 
 


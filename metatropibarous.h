#include<iostream>
using namespace std;
class metatropibarous
{
	
	private:
    float kg;
	
	public:
		
	float getkg();
	void setkg(float f);
	float kilasegramaria();
	float kilasexiliostograma();
	float kilaselibra();
	float kilaseouggia();
		
		
};

float metatropibarous::getkg()
{
	return kg;
 } 
 
 void metatropibarous::setkg(float f)
 {
 	kg=f;
 }
 float metatropibarous::kilasegramaria()
 {
 	return kg*1000;
 }
 float metatropibarous::kilasexiliostograma()
 {
 	return kg*1000000;
 }
 float metatropibarous::kilaselibra()
 {
    return kg*2.20; 	
 } 
 float metatropibarous::kilaseouggia()
 {
 	return kg*32.15;
 }
 
 

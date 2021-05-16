#include<iostream>
using namespace std;
#include"typikixrisi.h"
#include"epistimonikixrisi.h"
#include"isotimies.h"
#include"Fahrenheit.h"
#include"Celsius.h"
#include"metatropimikous.h"
#include"metatropibarous.h"
#include"xronos.h"
class menou
{
	private:
		
			int x;
			int i;
			double x1;
			float f;
			
		
	
	public:
	void menoutipikisxrisis();
	void menouepistimonikisxrisis();	
	void menoouisotimies();
	void menoufahrenheit();
	void menoucelsius();
	void menoumetatropemikous();
	void menoumetatropisbarous();
	void menouora();
};

void menou::menoutipikisxrisis()
{      

     typikixrisi prosesi,aferesi,polaplasiasmos,dieresi,ypolipo,dinami2,enax,riza,pososto;
     
	do
	{
		
		cout<<"1 Prothesi\n";
		cout<<"2 Aferesi\n";
		cout<<"3 Polaplasiasmos\n";
		cout<<"4 Dieresi\n";
		cout<<"5 Ypolipo\n";
		cout<<"6 x^2\n";
		cout<<"7 1/x\n";
		cout<<"8 Tetragonikiriza\n";
		cout<<"9 Pososto\n";
		cout<<"pliktrologise to 20 gia episteofi sto proigoymeno menoy \n";
		cin>>i;
		
	
		
		if(i==1)
		{
		
		    cout<<"dose ton proto arithmo\n";
		    cin>>x;
		    prosesi.seta(x);
		    cout<<"\n";
		    cout<<"dose ton deytero arithmo\n";
		    cin>>x;
		    prosesi.setb(x);
		    cout<<"\n";
		    cout<<prosesi.geta()<<"+"<<prosesi.getb()<<" = "<<prosesi.suml()<<"\n";
		    
	   }
	   cout<<"\n";
	   if(i==2)
		{
		
		    cout<<"dose ton proto arithmo\n";
		    cin>>x;
		    aferesi.seta(x);
		    cout<<"\n";
		    cout<<"dose ton deytero arithmo\n";
		    cin>>x;
		    aferesi.setb(x);
		    cout<<"\n";
		    cout<<aferesi.geta()<<"-"<<aferesi.getb()<<" = "<<aferesi.aferesi()<<"\n";
		    
	   }
	   cout<<"\n";
	   if(i==3)
		{
		
		    cout<<"dose ton proto arithmo\n";
		    cin>>x;
		    polaplasiasmos.seta(x);
		    cout<<"\n";
		    cout<<"dose ton deytero arithmo\n";
		    cin>>x;
		    polaplasiasmos.setb(x);
		    cout<<"\n";
		    cout<<polaplasiasmos.geta()<<"*"<<polaplasiasmos.getb()<<" = "<<polaplasiasmos.gin()<<"\n";
		    
	   }
	   cout<<"\n";
	   if(i==4)
		{
		
		    cout<<"dose ton proto arithmo\n";
		    cin>>x;
		    dieresi.seta(x);
		    cout<<"\n";
		    cout<<"dose ton deytero arithmo\n";
		    cin>>x;
		    while(x==0)
		{
			cout<<"H dieresi me to 0 den oridete\n";
			cout<<"xanadose aritmo\n";
			cin>>x;
		}
		    dieresi.setb(x);
		    
		    cout<<"\n";
		    cout<<dieresi.geta()<<"/"<<dieresi.getb()<<" = "<<dieresi.dieressi()<<"\n";
		    
	   }
	   cout<<"\n";
	   if(i==5)
		{
		
		    cout<<"dose ton proto arithmo\n";
		    cin>>x;
		    ypolipo.seta(x);
		    cout<<"\n";
		    cout<<"dose ton deytero arithmo\n";
		    cin>>x;
		    while(x==0)
		{
			cout<<"H dieresi me to 0 den oridete\n";
			cout<<"xanadose aritmo\n";
			cin>>x;
		}
		    ypolipo.setb(x);
		    
		    cout<<"\n";
		    cout<<ypolipo.geta()<<"%"<<ypolipo.getb()<<" = "<<ypolipo.piliko()<<"\n";
		    
	   }
	   cout<<"\n";
	   if(i==6)
		{
		
		    cout<<"dose ton  arithmo tis baseis\n";
		    cin>>x;
		    while(x<=0)
		{
			cout<<"Dose atihtmo megalitero apo 0\n";
			cin>>x;
		}
		    dinami2.seta(x);
		    
		    
		    
		    cout<<"\n";
		    cout<<dinami2.geta()<<"^2"<<" = "<<dinami2.dyodinami()<<"\n";
		    
	   }
	   cout<<"\n";
	   if(i==7)
		{
		
		    cout<<"dose ton arithmo\n";
		    cin>>x1;
		    while(x1<=0)
		{
			cout<<"Dose atihtmo megalitero apo 0\n";
			cin>>x1;
		}
		    enax.setc(x1);
		    
		    
		    
		    cout<<"\n";
		    cout<<"1/"<<enax.getc()<<" = "<<enax.enadiax()<<"\n";
		    
	   }
	   cout<<"\n";
	   if(i==8)
		{
		
		    cout<<"dose ton  arithmo gia tin riza\n";
		    cin>>x;
		    
		while(x<0)
		{
			cout<<"Dose atihtmo megalitero apo 0\n";
			cin>>x;
		}
		    riza.seta(x);
		    
		    
		    
		    cout<<"\n";
		    cout<<riza.geta()<<"riza"<<" = "<<riza.tetragonikiriza()<<"\n";
		    
	   }
	   cout<<"\n";
	   if(i==9)
		{
		
		    cout<<"dose tin arxiki timi\n";
		    cin>>x;
		    pososto.seta(x);
		    cout<<"\n";
		    cout<<"dose ton  arithmo ekptoseis\n";
		    cin>>x;
		    pososto.setb(x);
		    
		    cout<<"\n";
		    cout<<pososto.geta()<<"*%"<<pososto.getb()<<" = "<<pososto.pososto()<<"\n";
		    
	   }
	}
	    while(i!=20);






	
}


void menou::menouepistimonikisxrisis()
{
	
     typikixrisi prosesi,aferesi,polaplasiasmos,dieresi,ypolipo,dinami2,enax,riza,pososto;
     epistimonikixrisi dinami,sin,cos,tan,loge,ton; 
     
	do
	{
		
		cout<<"1 Prothesi\n";
		cout<<"2 Aferesi\n";
		cout<<"3 Polaplasiasmos\n";
		cout<<"4 Dieresi\n";
		cout<<"5 Ypolipo\n";
		cout<<"6 x^2\n";
		cout<<"7 1/x\n";
		cout<<"8 Tetragonikiriza\n";
		cout<<"9 Pososto\n";
		cout<<"10 dinameis\n";
		cout<<"11 imitono\n";
		cout<<"12 sinimitono\n";
		cout<<"13 efaftomeni\n";
		cout<<"14 logarithmos toy 10\n";
		cout<<"15 N paragoniko\n";
		cout<<"pliktrologise to 20 gia episteofi sto proigoymeno menoy \n";
		cin>>i;
		
	
		
		if(i==1)
		{
		
		    cout<<"dose ton proto arithmo\n";
		    cin>>x;
		    prosesi.seta(x);
		    cout<<"\n";
		    cout<<"dose ton deytero arithmo\n";
		    cin>>x;
		    prosesi.setb(x);
		    cout<<"\n";
		    cout<<prosesi.geta()<<"+"<<prosesi.getb()<<" = "<<prosesi.suml()<<"\n";
		    
	   }
	   
	   if(i==2)
		{
		
		    cout<<"dose ton proto arithmo\n";
		    cin>>x;
		    aferesi.seta(x);
		    cout<<"\n";
		    cout<<"dose ton deytero arithmo\n";
		    cin>>x;
		    aferesi.setb(x);
		    cout<<"\n";
		    cout<<aferesi.geta()<<"-"<<aferesi.getb()<<" = "<<aferesi.aferesi()<<"\n";
		    
	   }
	   
	   if(i==3)
		{
		
		    cout<<"dose ton proto arithmo\n";
		    cin>>x;
		    polaplasiasmos.seta(x);
		    cout<<"\n";
		    cout<<"dose ton deytero arithmo\n";
		    cin>>x;
		    polaplasiasmos.setb(x);
		    cout<<"\n";
		    cout<<polaplasiasmos.geta()<<"*"<<polaplasiasmos.getb()<<" = "<<polaplasiasmos.gin()<<"\n";
		    
	   }
	 
	   if(i==4)
		{
		
		    cout<<"dose ton proto arithmo\n";
		    cin>>x;
		    dieresi.seta(x);
		    cout<<"\n";
		    cout<<"dose ton deytero arithmo\n";
		    cin>>x;
		     while(x==0)
		{
			cout<<"H dieresi me to 0 den oridete\n";
			cout<<"xanadose aritmo\n";
			cin>>x;
		}
		    dieresi.setb(x);
		    
		    cout<<"\n";
		    cout<<dieresi.geta()<<"/"<<dieresi.getb()<<" = "<<dieresi.dieressi()<<"\n";
		    
	   }
	  
	   if(i==5)
		{
		
		    cout<<"dose ton proto arithmo\n";
		    cin>>x;
		    ypolipo.seta(x);
		    cout<<"\n";
		    cout<<"dose ton deytero arithmo\n";
		    cin>>x;
		    while(x==0)
		{
			cout<<"H dieresi me to 0 den oridete\n";
			cout<<"xanadose aritmo\n";
			cin>>x;
		}
		
		    ypolipo.setb(x);
		    
		    cout<<"\n";
		     cout<<ypolipo.geta()<<"%"<<ypolipo.getb()<<" = "<<ypolipo.piliko()<<"\n";
		    
	   }
	   
	   if(i==6)
		{
		
		     cout<<"dose ton  arithmo tis baseis\n";
		    cin>>x;
		    while(x<=0)
		{
			cout<<"Dose atihtmo megalitero apo 0\n";
			cin>>x;
		}
		    dinami2.seta(x);
		    
		    
		    
		    cout<<"\n";
		    cout<<dinami2.geta()<<"^2"<<" = "<<dinami2.dyodinami()<<"\n";
	   }
	   
	   if(i==7)
		{
		
		    cout<<"dose ton  arithmo\n";
		    cin>>x1;
		    while(x1<=0)
		{
			cout<<"Dose atihtmo megalitero apo 0\n";
			cin>>x1;
		}
		    enax.setc(x1);
		    
		    
		    
		    cout<<"\n";
		    cout<<"1/"<<enax.getc()<<" = "<<enax.enadiax()<<"\n";
		    
	   }
	   
	   if(i==8)
		{
		
		    cout<<"dose ton  arithmo gia tin riza\n";
		    cin>>x;
		    
		while(x<0)
		{
			cout<<"Dose atihtmo megalitero apo 0\n";
			cin>>x;
		}
		    riza.seta(x);
		    
		    
		    
		    cout<<"\n";
		    cout<<riza.geta()<<"riza"<<" = "<<riza.tetragonikiriza()<<"\n";
		    
		    
	   }
	   
	   if(i==9)
		{
		
		    cout<<"dose tin arxiki timi\n";
		    cin>>x;
		    pososto.seta(x);
		    cout<<"\n";
		    cout<<"dose ton  arithmo ekptoseis\n";
		    cin>>x;
		    pososto.setb(x);
		    
		    cout<<"\n";
		    cout<<pososto.geta()<<"*%"<<pososto.getb()<<" = "<<pososto.pososto()<<"\n";
		    
	   }
	   
	   if(i==10)
		{
		
		    cout<<"dose ton  arithmo tis basis\n";
		    cin>>x;
		    while (x<=0)
  	{
  		cout<<"den mporis na exies arnitiki basi\n";
  		cout<<"xana dose aritmo\n";
  		cin>>x;
  		
  		
	  }
		    dinami.seta(x);
		    cout<<"\n";
		    cout<<"dose ton  arithmo toy ekthetis\n";
		    cin>>x;
		    while (x<=0)
  	{
  			cout<<"den mporis na exies arnitiko ektheti\n";
  			cout<<"xana dose aritmo\n";
  		     cin>>x;
	  }
		    dinami.setb(x);
		    
		    cout<<"\n";
		    cout<<dinami.geta()<<"^"<<dinami.getb()<<" = "<<dinami.dynamis()<<"\n";
		    
	   }
	   
	   if(i==11)
		{
		
		    cout<<"dose ton  arithmo gia to imitono\n";
		    cin>>x1;
		    sin.setc(x1);
		    
		    
		    cout<<"\n";
		    cout<<" = "<<sin.imitono()<<"\n";
		    
	   }
	   
	   if(i==12)
		{
		
		    cout<<"dose ton  arithmo gia to sinimitono \n";
		    cin>>x1;
		    cos.setc(x1);
		    
		    
		    cout<<"\n";
		    cout<< "= "<<cos.sinimitono()<<"\n";
		    
	   }
	   
	   if(i==13)
		{
		
		    cout<<"dose ton  arithmo gia tin efatomeni\n";
		    cin>>x1;
		    tan.setc(x1);
		    
		    
		    cout<<"\n";
		    cout<<" = "<<tan.efaptomeni()<<"\n";
		    
	   }
	   
	   if(i==14)
		{
		
		    cout<<"dose ton  arithmo gia to logaritmo toy 10\n";
		    cin>>x1;
		      while(x1<0)
		{
			cout<<"o aritmos prepi na einai thetikos\n";
			
			cin>>x1;
		}
		    loge.setc(x1);
		    
		    
		    cout<<"\n";
		    cout<<" = "<<loge.log()<<"\n";
		    
	   }
	   
	   if(i==15)
		{
		
		    cout<<"dose ton  arithmo to N paragontiko\n";
		    cin>>x;
		    while(x<=0)
  	     {
  		
         	cout<<"to N prepi na einai thetiko\n";	
            cin>>x;
		 }
		    ton.seta(x);
		    
		    
		    cout<<"\n";
		    cout<<ton.geta()<<"N"<<" = "<<ton.Nparagontiko()<<"\n";
		    
	   }
	}
	    while(i!=20);

}

void menou::menoouisotimies()
{      isotimies draxmes,euro,dolaria;
	do
	{
		
		cout<<"1 Draxmes se Euro\n";
		cout<<"2 Euro se Draxmes\n";
		cout<<"3 Euro se Dolaria\n";
		cout<<"4 Dolaria se Euro\n";
		cout<<"pliktrologise to 20 gia episteofi sto proigoymeno menoy \n";
	
		cin>>i;
		
	
		
		if(i==1)
		{
		
		    cout<<"dose to  poso se draxmes\n";
		    cin>>f;
		    while(f<0)
		    {
		    	cout<<"ta nomismata den exoyn arnhtikes times xanadose aritmo \n";
		    	cin>>f;
			}
		    draxmes.setdraxmes(f);
		    cout<<"\n";
		    
		    cout<<"\n";
		    cout<<"="<<draxmes.draxmesseeyro()<<"e"<<"\n";
		    
	   }
	   cout<<"\n";
	   if(i==2)
		{
		
		    cout<<"dose to  poso se euro\n";
		    cin>>f;
		     while(f<0)
		    {
		    	cout<<"ta nomismata den exoyn arnhtikes times xanadose aritmo \n";
		    	cin>>f;
			}
		    euro.seteuro(f);
		    cout<<"\n";
		    
		    cout<<"\n";
		    cout<<"="<<euro.eyrosedraxmes()<<"d"<<"\n";
		    
	   }
	   cout<<"\n";
	   if(i==3)
		{
		
		    cout<<"dose to  poso se euro\n";
		    cin>>f;
		     while(f<0)
		    {
		    	cout<<"ta nomismata den exoyn arnhtikes times xanadose aritmo \n";
		    	cin>>f;
			}
		    dolaria.seteuro(f);
		    cout<<"\n";
		    
		    cout<<"\n";
		    cout<<"="<<dolaria.eyrosedolario()<<"$"<<"\n";
		    
	   }
	   cout<<"\n";
	   if(i==4)
		{
		
		    cout<<"dose to  poso se dolaria\n";
		    cin>>f;
		     while(f<0)
		    {
		    	cout<<"ta nomismata den exoyn arnhtikes times xanadose aritmo \n";
		    	cin>>f;
			}
		    euro.setdolario(f);
		    cout<<"\n";
		    
		    cout<<"\n";
		    cout<<"="<<euro.dolarioseeuro()<<"e"<<"\n";
		    
	   }
	   }

	    while(i!=20);
}

void menou::menoufahrenheit()
{       Fahrenheit fatr;
		do
	{
		
		
		
		
	
		
		
		
		
		    cout<<"dose ti thermokrasia se celsius \n";
		    cin>>f;
		    fatr.setc(f);
		    cout<<"\n";
		    
		    cout<<"\n";
		    cout<<"="<<fatr.fahr()<<"F"<<"\n";
		    cout<<"pliktrologise to 1 gia nea thermokrasia i to 2 gia episteofi sto proigoymeno menoy\n";
		    cin>>i;
	   
	   

	  
} while(i!=2);
}

void menou::menoucelsius()
{    Celsius cels;
	do
	{
		
		
		
		
	
		
		
		
		
		    cout<<"dose ti thermokrasia se Fahrenheit \n";
		    cin>>f;
		    cels.setf(f);
		    cout<<"\n";
		    
		    cout<<"\n";
		    cout<<"="<<cels.cels()<<"C"<<"\n";
		    cout<<"pliktrologise to 1 gia nea thermokrasia i to 2 gia episteofi sto proigoymeno menoy\n";
		    cin>>i;
	   
	   

	  
} while(i!=2);
}
void menou::menoumetatropemikous()
{          metatropimikous km;
		do
	{
		
		
		
		
	
		
		
		
		
		    cout<<"dose ta xiliometra \n";
		    cin>>f;
		     while(f<0)
		    {
		    	cout<<"o aritmos den mpori na einai arnitikos xanadose arithmo \n";
		    	cin>>f;
			}
		    km.setkm(f);
		    cout<<"\n";
		    
		    cout<<"\n";
		    cout<<"Xiliometra\n"<<km.getkm()<<"km"<<"\n";
		    cout<<"Metra\n"<<km.xiliometrasemetra()<<"m"<<"\n";
		    cout<<"Ekatosta\n"<<km.xiliometraseekatosta()<<"cm"<<"\n";
		    cout<<"Xilosta\n"<<km.xiliometrasexiliosta()<<"mm"<<"\n";
		    cout<<"Lebges\n"<<km.xiliometaselebges()<<"Lea"<<"\n";
		    cout<<"Podia\n"<<km.xiliometasepodia()<<"ft"<<"\n";
		    cout<<"Mili\n"<<km.xiliometrasemilia()<<"mi"<<"\n";
		    cout<<"NaytikoMili\n"<<km.xiliometrasenaytikamilia()<<"nm"<<"\n";
		    cout<<"Intses\n"<<km.xiliometraseintses()<<"in"<<"\n";
		    cout<<"Giardes\n"<<km.xiliometrasegiardes()<<"yd"<<"\n";
		    cout<<"pliktrologise to 1 gia nea metatrope h to 2 gia episteofi sto proigoymeno menoy\n";
		    cin>>i;
	   
	   

	  
} while(i!=2);
}

void menou::menoumetatropisbarous()
{         metatropibarous kila;
	do
	{
		
		
		
		
	
		
		
		
		
		    cout<<"dose ta kila \n";
		    cin>>f;
		    while(f<0)
		    {
		    	cout<<"o aritmos den mpori na einai arnitikos xanadose arithmo \n";
		    	cin>>f;
			}
		    kila.setkg(f);
		    cout<<"\n";
		    
		    cout<<"\n";
		    cout<<"Kila\n"<<kila.getkg()<<"kg"<<"\n";
		    cout<<"Gramaria\n"<<kila. kilasegramaria()<<"gr"<<"\n";
		    cout<<"Xiliostograma\n"<<kila.kilasexiliostograma()<<"mg"<<"\n";
		    cout<<"Libra\n"<<kila.kilaselibra()<<"lb"<<"\n";
		    cout<<"Ougia\n"<<kila.kilaseouggia()<<"oz"<<"\n";
		    
		    cout<<"pliktrologise to 1 gia nea metatrope h to 2 gia episteofi sto proigoymeno menoy\n";
		    cin>>i;
	   
	   

	  
} while(i!=2);
}

void menou::menouora()
{          xronos deytetolepta;
	do
	{
		
		
		
		
	
		
		
		
		
		    cout<<"dose ta deyterolepta \n";
		    cin>>x;
		    while(x<3600)
		    {
		    	cout<<"dose timi apo 3600 kai pano gia ton ypologismo oras \n";
		    	cin>>x;
			}
		    deytetolepta.sets(x);
		    cout<<"\n";
		    
		    cout<<"\n";
		    cout<<deytetolepta.deyteroleptaseores()<<":"<<deytetolepta.deytelopeptaselepta()<<":"<<deytetolepta.gets()<<"\n";
		   
		    
		    cout<<"pliktrologise to 1 gia nea metatrope h to 2 gia episteofi sto proigoymeno menoy\n";
		    cin>>i;
	   
	   

	  
} while(i!=2);
}
	

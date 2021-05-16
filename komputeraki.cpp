// Το πρόγραμμα είναι ένα κομπιουτεράκι που υπολογίζει βασικούς και επιστημονικούς μαθηματικούς  τύπους και επίσης υπολογίζει ισοτιμία μετατροπή θεοκρασίας μονάδων μήκους και βάρους και περιχεί υπολογισμό ώρας.
#include<iostream>
using namespace std;
#include"menou.h"
	int main()
	{
		int j;
		menou ypomenou;
		
		do
		{
			cout<<"1 Typikixrisi\n";
			cout<<"2 Epistiminikixrisi\n";
			cout<<"3 Isotimia Nomismatos\n";
			cout<<"4 Metatropi apo Klisiou se Farenaet\n";
			cout<<"5 Metatrope apo Frenate se Kelisiou\n";
			cout<<"6 MEtatrope manadas mikoys\n";
			cout<<"7 MEtatrope monada baroys\n";
			cout<<"8 Metatroph apo deyterolepta se lepta kai ora\n";
			cout<<"0 gia exoodo\n";
			cin>>j;
			switch(j)
			{
				case 1:ypomenou.menoutipikisxrisis(); break;
				case 2:ypomenou.menouepistimonikisxrisis(); break;
				case 3:ypomenou.menoouisotimies(); break;
				case 4:ypomenou.menoufahrenheit(); break;
				case 5:ypomenou.menoucelsius(); break;
				case 6:ypomenou.menoumetatropemikous(); break;
				case 7:ypomenou.menoumetatropisbarous(); break;
				case 8:ypomenou.menouora(); break;
				 
			}
			if(j==0)
			break;
		}while(true);
		
		return 0;
		
		
	}

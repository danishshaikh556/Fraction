#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <vector>
#include <string>
#include "Fraction.h"
using namespace std;





int main()
{  

  Fraction dan;
	int choice=12;
	int num1,num2,den1,den2;
	
	
	while(choice != 0)
	{
    cout<<"Enter your Choice"<<endl;
	cout << "1: Add\n";
	cout << "2: Subtract\n";
	cout << "3: Multiply\n";
	cout << "4: Divide\n";
	cout << "5: Equality\n";
	cout << "6: Greater than\n";
	cout << "7: Less than\n";
	cout << "8: Not Equal\n";
    cout << "0: Exit\n";
    
	cin>>choice;
	if(choice != 0)
	{
		cout<<"Please Enter the Numerator 1"<<endl;
		cin>>num1;
		cout<<"Please Enter the Denominator 1"<<endl;
		cin>>den1;
		cout<<"Please Enter the Numerator 2"<<endl;
		cin>>num2;
		cout<<"Please Enter the Denominator 2"<<endl;
		cin>>den2;
	}
	switch (choice)
	{
	case 0: cout<<"Exiting App"<<endl;
	case 1: dan.addin(num1,den1,num2,den2);
			break;
	case 2:dan.subtractin(num1,den1,num2,den2);
		    break;
	case 3:dan.multiplyin(num1,den1,num2,den2);
		    break;
	case 4:dan.dividin(num1,den1,num2,den2);
		    break;
	case 5:dan.equalityin(num1,den1,num2,den2);
		    break;
	case 6:dan.greater(num1,den1,num2,den2);
		    break;
	case 7:dan.less(num1,den1,num2,den2);
		    break;
	case 8:dan.notequal(num1,den1,num2,den2);
		    break;
	default:cout<<"Choice doesnt exist"<<endl;
			break;
	}

	
	}
return 1;
	}




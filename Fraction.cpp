#include "Fraction.h"


void Fraction::addin(int n1,int d1,int n2,int d2)

{
  n3=dani.add(dani.multiply(n1,d2),dani.multiply(n2,d1));
	d3=dani.multiply(d1,d2);
	if (n3==0) cout<<0<<endl;
	else cout<<n3<<"/"<<d3<<endl;
	
 

}

void Fraction::subtractin(int n1,int d1,int n2,int d2)
{
    n3=dani.subtract(dani.multiply(n1,d2),dani.multiply(n2,d1));
	d3=dani.multiply(d1,d2);
	if (n3==0) cout<<0<<endl;
	else cout<<n3<<"/"<<d3<<endl;
 

}

void Fraction::multiplyin(int n1,int d1,int n2,int d2)
{
    n3=dani.multiply(n1,n2);
	d3=dani.multiply(d1,d2);
	if (n3==0) cout<<0<<endl;
	else cout<<n3<<"/"<<d3<<endl;
 

}


void Fraction::dividin(int n1,int d1,int n2,int d2)
{
 n3=dani.multiply(n1,d2);
	d3=dani.multiply(d1,n2);
    if (n3==0) cout<<0<<endl;
	else cout<<n3<<"/"<<d3<<endl;
 
}


void Fraction::equalityin(int n1,int d1,int n2,int d2)
{
	n3=dani.subtract(dani.multiply(n1,d2),dani.multiply(n2,d1));
	d3=dani.multiply(d1,d2);
    if (n3==0) cout<<"equals"<<endl;
	else cout<<"notequal"<<endl;
}


void Fraction::greater(int n1,int d1,int n2,int d2)
{
cout<<"equals"<<endl;

}


void Fraction::less(int n1,int d1,int n2,int d2)
{
cout<<"equals"<<endl;

}

void Fraction::notequal(int n1,int d1,int n2,int d2)
{
n3=dani.subtract(dani.multiply(n1,d2),dani.multiply(n2,d1));
	d3=dani.multiply(d1,d2);
    if (n3==0) cout<<"equals"<<endl;
	else cout<<"notequal"<<endl;

}

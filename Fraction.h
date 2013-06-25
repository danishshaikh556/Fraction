#ifndef _Fraction_h
#define _Fraction_h
#include "OPE.h";
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <map>
#include<set>
#include <fstream>
#include <vector>
#include <string>

using namespace std;



class Fraction 
{
public:
  
	void addin(int n1,int d1,int n2,int d2);
	void subtractin(int n1,int d1,int n2,int d2);
	void multiplyin(int n1,int d1,int n2,int d2);
	void dividin(int n1,int d1,int n2,int d2);
	void equalityin(int n1,int d1,int n2,int d2);
	void greater(int n1,int d1,int n2,int d2);
	void less(int n1,int d1,int n2,int d2);
	void notequal(int n1,int d1,int n2,int d2);
	
private:
	int n3,d3;
	OPE<int> dani;
    
};


#endif


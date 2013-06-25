#ifndef _OPE_h
#define _OPE_h
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>



#include <fstream>
#include <vector>
#include <string>
using namespace std;

template <typename elemtype>
class OPE
{
public:
  
	elemtype add(elemtype val1,elemtype val2);
	elemtype subtract(elemtype val3,elemtype val4);
	elemtype divide(elemtype val5,elemtype val6);
	elemtype multiply(elemtype x,elemtype y);
	bool equality(elemtype val9,elemtype val10);
	bool unequal(elemtype val11,elemtype val12);
	bool lessthan(elemtype val13, elemtype val14);
	bool greaterthan(elemtype val15,elemtype val16);
private:
	elemtype negate(elemtype val17);  ///negates the number ex negate(5)=-5
	int  is_even(elemtype val18);
	elemtype dividebytwo(elemtype val19);
	elemtype multiplybytwo(elemtype val20);
	
};

#include "OPE.cpp"

#endif


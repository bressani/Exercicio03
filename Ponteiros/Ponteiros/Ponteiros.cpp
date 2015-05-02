// Ponteiros.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	long value1 = 20000;
	long value2;
	//a
	long *Ptr;
	//b
	Ptr = &value1;
	//c
	printf("C: %i",*Ptr);
	printf("\n\n");
	//d
	value2 = *Ptr;
	//e
	printf("E: %i", value2);
	printf("\n\n");
	//f
	printf("F: %i", &value1);
	printf("\n\n");
	//g
	printf("G: %i", Ptr);
	printf("\nO endereco eh o mesmo!");
	printf("\n\n");
	
	return 0;
}


/*
 *  libtest.c
 *  DylibTest
 *
 *  Created by Miguel Silva on 6/18/13.
 *  Copyright 2013 __MyCompanyName__. All rights reserved.
 *
 */

#include "libtest.h"

void VoidFunction()
{
	printf("Lib test, Invoke Sucessfully!");
	
}
int IntFunction()
{
	return 527;
}
TestType *StructReturn(int a)
{
	TestType * temp;
	temp->Value = a;
	return temp;
}
int StructUse(TestType *mstruct)
{
	return mstruct->Value;
}
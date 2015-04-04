/*
 *  libtest.h
 *  DylibTest
 *
 *  Created by Miguel Silva on 6/18/13.
 *  Copyright 2013 __MyCompanyName__. All rights reserved.
 *
 */

#include <stdio.h>

typedef struct
{
	int Value;
	char cByte;
	float RealPosition;
}TestType;

void VoidFunction();
int IntFunction();
TestType *StructReturn(int a);
int StructUse(TestType *mstruct);
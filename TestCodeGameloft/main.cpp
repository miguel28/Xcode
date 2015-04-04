#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;


void InitString(char *destination)
{
	 destination = new char[256];
	 destination[0]='a';
	 destination[1]='b';
	 destination[2]='\0';
	}
int main()
{
	while(1)
	{
	char * p= new char[256];
	 delete p;
	}
}
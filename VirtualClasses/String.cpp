/*
 * String.cpp
 *
 *  Created on: 25 במאי 2018
 *      Author: Mayer
 */

#include "String.h"
#include <cstring>

String::String(char* w0, char* w1, char* w2, char* w3)
{
	size=4;
	strcpy(words[0],w0);
	strcpy(words[1],w1);
	strcpy(words[2],w2);
	strcpy(words[3],w3);
}

int String::isSmaller(int i, int j)
{
	return strcmp(words[i],words[j])<0;
}

void String::show(int i)
{
	for ( int i = 0; i < size; ++i) {
		cout<<i<<" : "<<words[i]<<endl;}
}
void String::swap(int i, int j)
{
	char tmp[20];
	strcpy(tmp,words[i]);
	strcpy(words[i],words[j]);
	strcpy(words[j],tmp);
}

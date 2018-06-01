/*
 * Numbers.cpp
 *
 *  Created on: 25 áîàé 2018
 *      Author: Mayer
 */

#include "Numbers.h"

Numbers::Numbers(int munSize)
{
	size= munSize;
	vec=new int[size];
	srand((unsigned) time(nullptr));
	for(int i=0;i<size;i++)
		vec[i]=rand()%100;
}

int Numbers::isSmaller(int i,int j)
{
	return (vec[i]<vec[j]);
}

Numbers::~Numbers(){
	if (vec) delete [] vec;
}
void Numbers::swap(int i, int j)
{
	int tmp=vec[i];
	vec[i]=vec[j];
	vec[j]=tmp;
}
void Numbers::bubbleSort()
{
    for (int last = size-1; last > 0; last--)
    {
for (int i = 0; i < last; i++)
        	{
	     if (isSmaller(i+1,i))
		swap(i,i+1);
        	}
    }
}
void Numbers::print()
{
	for(int i=0;i<size;i++)
		show(i);
}

void Numbers::show(int i)
{
	for ( int i = 0; i < size; ++i) {
		cout<<i<<" : "<<vec[i]<<endl;	}

}

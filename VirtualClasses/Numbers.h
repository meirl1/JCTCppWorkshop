/*
 * Numbers.h
 *
 *  Created on: 25 במאי 2018
 *      Author: Mayer
 */

#ifndef NUMBERS_H_
#define NUMBERS_H_

#include <iostream>
#include <ctime>
using namespace std;

class Numbers
{
protected:
	int* vec;
	int size;
	virtual void swap(int i, int j);
	virtual int isSmaller(int i,int j);
	virtual void show(int i);
public:
	Numbers(){vec= nullptr;}
	Numbers(int);
	~Numbers();
	void print();
	void bubbleSort();
};

#endif /* NUMBERS_H_ */

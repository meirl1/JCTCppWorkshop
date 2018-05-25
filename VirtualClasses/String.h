/*
 * String.h
 *
 *  Created on: 25 במאי 2018
 *      Author: Mayer
 */

#ifndef STRING_H_
#define STRING_H_

#include "Numbers.h"

class String : public Numbers
{
public:
	String(char*, char*,char*,char*);

private:
	char words[4][20];
	void swap(int i, int j) override;
	void show(int i) override;
	int isSmaller(int i,int j) override;
};

#endif /* STRING_H_ */

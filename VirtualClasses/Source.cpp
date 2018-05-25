/*
 * Source.cpp
 *
 *  Created on: 25 במאי 2018
 *      Author: Mayer
 */

#include "String.h"

int main()
{
	Numbers nums(5);
	cout<<"Print Before Sort:\n";
	nums.print();
	nums.bubbleSort();
	cout<<"Print After Sort:\n";
	nums.print();

	String words("Sara","Rivka","Rachel", "Leah");
	cout<<"Print Before Sort:\n";
	words.print();
	words.bubbleSort();
	cout<<"Print After Sort:\n";
	words.print();
	return 0;

}

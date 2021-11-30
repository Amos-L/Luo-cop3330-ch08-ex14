/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Amos Luo
 */

/*
Can we declare a non-reference function argument const (e.g., void f(const int);)? What might that mean? Why might
we want to do that? Why don’t people do that often?

Yes, when declaring a function argument with a constant, the values inputted into the function cannot be changed inside the function. 
People do that to prevent other functions from messing up variables that aren't meant to be changed. 
People don't do it as often due to other methods of doing the same thing.

*/

#include "std_lib_facilities.h"

//If I try to edit a & b in the function, the compiler will throw an error.
int ex1(const int a, const int b) {
	int result;
	result = a + b;
	return result;
}

int ex2(int a, int b) {
	int result;
	a = 12;
	b = 20;
	result = a + b;
	return result;
}
int main() {
	int result1, result2;
	result2 = ex2(15, 15);
	result1 = ex1(15, 15);
	printf("Result2 should be 30 since we inputted those numbers however it is: %d\n", result2);
	printf("Result1 should be 30 and the result is: %d", result1);

}
/*
 *File Name: factorial.c
 *Ower: smgaona
 *Last Modified On: Sep 27 08:18
 *Program: Factorial Calculator
 *Description: Calculates and prints the factorial of an integer passed as a command line argument
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	char *endptr; // Used for the string to length (strtol) command to store the fist incalid charactor location
	long num; // Stores the converted input number
	
	// Convert the first command line argument string to a base10 long integer
	num = strtol(argv[1],&endptr,10);
	
	long new_num = 1; // Variable to store the factorial results
	
	// Incraments value of i to multiply with new_num to calculate the factorial
	for (int i = 1; i <= num; i++){
	new_num = new_num * i;
	}

	// Prints the factorial result
	printf("%ld\n", new_num);
	
	return 0;


}

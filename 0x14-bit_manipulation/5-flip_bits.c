#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: decimal number passed by pointer
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i,counter=0;
	// unsigned long int max = n > m ? n :m ;
	for (i = 64; i > 0; i--)
	{
		if(((n << i)&1) != ((m << i)&1))
		counter++;
	}
	return(counter);
}
#include "lists.h"
#include <stdio.h>


size_t print_list(const list_t *h)
{
	size_t count=0;
	const list_t *temp = h;
	const list_t t = *temp;
	while (temp != NULL)
	{
		printf("[%d] ",temp->len);
		if (temp->str)
		{
			printf("%s ",temp->str);
		}else 
		{
			printf("(nil)");
		}
		count++;
		temp=temp->next;
		printf("\n");
	}
	return (count);
}

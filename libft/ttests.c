// typedef struct person
// {
//     int age;
//     char *name;
// } t_person;

// // typedef creates an alias for the struct.
// // We can use either struct person or t_person.

// // STRUCT VARIABLE: use .
// t_person denzel;

// denzel.age = 22;
// denzel.name = "denzel";

// // STRUCT POINTER: use ->
// t_person *dptr;

// // Give the pointer a valid address.
// dptr = &denzel;

// dptr->age = 22;
// dptr->name = "denzel";
#include "libft.h"
void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *p = (unsigned char *)b;
	size_t i =0;
	while(i < len)
	{
		p[i]=(unsigned char)c;
		i++;
	}
	return(b);
}
int main(void)
{
	int *p = malloc(sizeof(int)*20);
	if(!p)
		return(0);
	ft_memset(p,'a',0);
	int i =0;
	while(i<20)
	{
		printf("%d : %d\n",i,p[i]);
		i++;
	}
	free(p);

	return(0);
}
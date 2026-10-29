#include "g.h"

int main(int argc, char **argv)
{

	int x = changetonum(argv[1]);
	int y = changetonum(argv[2]);

	printf("a + b = %d\n",a(x,y));
	printf("a - b = %d\n",b(x,y));
	printf("a * b = %d\n",c(x,y));
	printf("a / b = %d\n",d(x,y));

	return(0);
}
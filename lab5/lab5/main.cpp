#include "Number.h"
#include <stdio.h>

int main()
{
	Number n1("2453", 10);

	Number n2("734", 10);

	Number n3("888", 10);

	printf("n1 has %d digits and it is written in base %d\n", n1.GetDigitsCount(), n1.GetBase());

	n1 = (n2 + n3 - n1) + n1;
	n1.Print();

	if (n1 > n2) printf("n1 is bigger than n2\n"); else printf("n2 is bigger than n1\n");

	Number n4 = "13579";

	n4.Print();
	
	return 0;

}

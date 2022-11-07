#include <stdio.h>

#pragma pack(2)
struct t
{
	char a;
	int b;
};

int main()
{
	printf("%ld\r\n", sizeof(struct t));
  	return 0;
}

#include <stdio.h>
void f(void);
int y=15212;
int x=15213;
int main()
{
	f();
	printf("0x=%x\n y=0x%x\n",x,y);
	return 0;
}

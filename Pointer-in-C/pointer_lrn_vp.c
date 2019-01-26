#include<stdio.h>
int main()
{
	void *vp;
	int n=10;
	
	vp=&n;
	
	printf("address n %p\n",&n);
	printf("value n %p\n",vp);
	printf(" content vp %d\n",*((int*)vp));
	return 0;
}

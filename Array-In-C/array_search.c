#include<stdio.h>
int main()
{
	int a[10], x, num, i,isfound=0;

    printf("\nEnter no of elements :");
    scanf("%d", &num);

    printf("\nEnter the values :");
    for (i = 0; i < num; i++) {
       scanf("%d", &a[i]);
    }

   
    printf("\nEnter the elements to be searched :");
    scanf("%d", &x);
   
    for(i=0;i<=x;i++){
    	if(a[i]==x){
    		printf("founded %d at %d position",x,i+1);
    		isfound=1;
    		break;
		}
	}
	
	if(isfound==0)
		printf("not found\n");
   
   return 0;
}

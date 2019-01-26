/*ten number are entered from the key board. 
write a programe to find how many are of them even and odd?*/


#include<stdio.h>
int main()
{
    int array[10],i,num;

    printf("enter the size of array\n");
    scanf("%d",&num);

    printf("enter the elememts of array\n");
    for(i=0;i<num;i++){
    scanf("%d",&array[i]);
    }

    printf("even numbers in array are: ");
    for(i=0;i<num;i++){
    if(array[i]%2==0){
    printf("%d\n",array[i]);
    }
    }
    printf("odd numbers in array are: ");
    for(i=0;i<num;i++){
    if(array[i]%2!=0){
    printf("%d\n",array[i]);
    }
    }
}

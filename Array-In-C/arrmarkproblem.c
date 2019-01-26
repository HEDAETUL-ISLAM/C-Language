#include<stdio.h>
int main()

{

int i,mark,cont,r,total=0;
int ft_mark [40]={83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58, 69, 67, 53, 56, 71, 62};

for(mark=10;mark<101;mark++){
	cont=0;
	for(i=0;i<40;i++){
	if(ft_mark[i]==mark)
		cont++;
		r=cont;
	}
	printf("%d   %d\n",mark,cont);
	total=total+r;

}
		printf("%d\n",total);

return 0;



}

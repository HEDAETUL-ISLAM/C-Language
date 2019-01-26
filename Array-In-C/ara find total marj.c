#include<stdio.h>
int main()

{
	int i,j;
	int  xm_mark [12]={6,7,4,6,9,7,6,2,4,3,4,1};
	
	int mark_count[12];
	for(i=0;i<11;i++){
		mark_count[i] = 0;
	}
	for(i=0;i<12;i++){
		mark_count[xm_mark[i]]++;
		for(j=0;j<=10;j++){
			printf("%d  ",mark_count[j]);
		}
		printf("\n");
	}
	return 0;
	
}

#include<stdio.h>
int main()

{
	 int ft_mark [40]={83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58, 69, 67, 53, 56, 71, 62},
	 st_mark[40] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58, 69, 67, 53, 56, 71, 62, 49},
	 final_mark[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55, 69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64, 55, 69, 85, 81, 80, 67, 88, 71};
	 
	int i;
	int total_mark[40],mark,count,r,t=0;
	for(i=0;i<40;i++) {
	    total_mark[i]=ft_mark[i]/4.0 + st_mark[i]/4.0 + final_mark[i]/2.0;
	
	}
	for(i=1;i<=40;i++){
		printf("ROLL NO: %d\tTOTAL MARKS: %d\n",i,total_mark[i-1]);
	
	}
	
	for(mark=10;mark<=100;mark++){
		count=0;
		for(i=0;i<40;i++){
			if(total_mark[i]==mark)
				count++;
				r=count;
				
		}
		printf("mark %d and st num %d\n",mark,count);
		t=t+r;
	}
	printf(" %d\n",t);
	return 0;

}

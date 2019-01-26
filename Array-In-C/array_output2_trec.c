#include<stdio.h>
int main()
{
int a[3][3] = { 3, 6, 9, 2, 5, 8, 1, 4, 7 };

int b[3][3] = { 5, 9, 10, 5, 4, 7, 2, 8, 1 };

int i,j,s;

	for( i = 0; i < 3; i++) {
	for( j = 0, s = 0; j < 3; j++){
		
	printf("%d %d\n",a[j][i],b[i][j]);
	
	s = s + a[j][i]+ b[i][j];
}
}
	printf("\n %d", s);

}

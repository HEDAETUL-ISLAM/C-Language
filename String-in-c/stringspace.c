#include<stdio.h>
int main()
{
    char text[500], blank[500];
    int c=0,d=0;
    printf("enter the line: ");
    gets(text);

    while(text[c] != '\0'){
        if(text[c] == ''){
            int temp = c+1;
            if(text(temp) != '\0'){
                while(text[temp] && text[temp] != '\0'){
                    if(text[temp] == ''){
                        c++;
                    }
                    temp++;
                }
            }
        }
        blank[d]=text[c];
        c++;
        d++;
    }
        blank [d] '\0';
        printf("text after %s",blank);
        return 0;
}

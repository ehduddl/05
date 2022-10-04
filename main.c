#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,i,sum=0;
    printf("input a number : ");
    scanf("%d",&a);
    
	for(i=0;i<=a;i++)
       sum=sum+i;
   
    printf("더하기 결과는 %d입니다.",sum);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=59, x,num;

    do
    {
	printf("Guess a number : ");
    scanf("%d",&x);
    num++;
	if(x>answer)
    printf("low!\n");
    else if(x<answer)
    printf("high!\n");
	}

    while(x!=answer);//정답과 같은지 여부 판단  
	{
	printf("Congratulation!");
	printf("trials:%d",num);
}
 return 0;
}

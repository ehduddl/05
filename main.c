#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int num=0; 
	printf("input a string : ");
	while ( (c = getchar() ) != '\n' ) //�Է¹��ڰ� ���๮�ڰ� ���ö����� �ݺ�
	{
	if (c>='0'&&c<='9')//�Էµ� ���ڰ� �����ΰ�? 
	num++;	//�׷��ٸ� �ϳ��� ����. 
	}
	printf("the number df digits is %d",num);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
//��д������һ�� 1 �� 100 �����������г��ֶ��ٴ�����9
int main(){
	int i;
	int count = 0;
	for (i = 0; i <= 100; i++){
		if (i % 10 == 9){
			count++;
			printf("%d�г���������9\n", i);
		}
		if (i / 10 % 10 == 9){
			count++;
			printf("%d�г���������9\n", i);
		}
		/*if (i / 100 == 9){
			//count++;
		//	printf("%d��������9\n", i);
		}*/
	}
	printf("1-100������������һ��������%d������9\n", count);
	system("pause");
	return 0;
}
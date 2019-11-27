#include <stdio.h>
#include <stdlib.h>
//编写程序数一下 1 到 100 的所有整数中出现多少次数字9
int main(){
	int i;
	int count = 0;
	for (i = 0; i <= 100; i++){
		if (i % 10 == 9){
			count++;
			printf("%d中出现了数字9\n", i);
		}
		if (i / 10 % 10 == 9){
			count++;
			printf("%d中出现了数字9\n", i);
		}
		/*if (i / 100 == 9){
			//count++;
		//	printf("%d中有数字9\n", i);
		}*/
	}
	printf("1-100的所有整数中一共出现了%d次数字9\n", count);
	system("pause");
	return 0;
}
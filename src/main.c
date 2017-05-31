#include <stdio.h>
#include "deposit.h"
int main() {
	int sum,income,time;	
	printf("Введите сумму вклада (в рублях) и его срок (в днях)\n");
	printf("Максимальный срок вклада - 365 дней\n");
	scanf("%d %d",&sum,&time);
	if (check(sum,time)) {
		income=depositCalc(sum,time);
		printf("Доход по вкладу: %d руб. \n",income);
	} else {
		printf("Данные введены некорректно\n");
	}
	return 0;
}
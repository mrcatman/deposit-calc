#include <stdio.h>
int main() {
	int sum,time;	
	printf("Введите сумму вклада (в рублях) и его срок (в днях)\n");
	printf("Максимальный срок вклада - 365 дней\n");
	scanf("%d %d",&sum,&time);
	if (sum>10000 && time>0 && time<365) {
		printf("Данные введены корректно\n");
	} else {
		printf("Данные введены некорректно\n");
	}
}
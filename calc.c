#include <stdio.h>

int main() {
	int sum,income,time,percent;	
	printf("Введите сумму вклада (в рублях) и его срок (в днях)\n");
	printf("Максимальный срок вклада - 365 дней\n");
	scanf("%d %d",&sum,&time);
	if (sum>10000 && time>0 && time<365) {
		if (sum<100000) {
			if (time<31) {
				percent=-10;
			} else {
				if (time<121) {
					percent=2;
				} else {
					if (time<241) {
						percent=6;
					} else {
						percent=12;
					}
				}
			}
		} else {
		  if (time<31) {
                percent=-10;
            } else {
                if (time<121) {
                    percent=3;
                    if (time==120) {
                    	printf("Бинго! \n");
                    }
                } else {
                    if (time<241) {
                        percent=8;
                    } else {
                        percent=15;
                    }
                }
            }
		}
		income = sum/100*percent;
		sum = sum + income;
		printf("Итоговая сумма вклада: %d руб. \n",sum);
		printf("Доход по вкладу: %d руб. \n",income);
	} else {
		printf("Данные введены некорректно\n");
	}
}
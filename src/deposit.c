#include <stdio.h>
#include "deposit.h"
int check(int sum,int time) {
    if (sum>10000 && time>0 && time<365) {
		return 1;
	} else {
		return 0;
	}
}

int depositCalc(int sum, int time) {
	int percent,income;
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
		return income;
}
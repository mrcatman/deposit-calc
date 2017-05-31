
#include <ctest.h>
#include "deposit.h"


CTEST(suite, check_small_time)
{
    int sum=50000;
    int time=5;
    const int result = depositCalc(sum,time);
    const int expected = sum/100*-10;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite, check_time_31)
{
    int sum=50000;
    int time=31;
    const int result = depositCalc(sum,time);
    const int expected = sum/100*2;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite, check_time_121)
{
    int sum=50000;
    int time=121;
    const int result = depositCalc(sum,time);
    const int expected = sum/100*6;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite, check_time_241)
{
    int sum=50000;
    int time=241;
    const int result = depositCalc(sum,time);
    const int expected = sum/100*12;
    ASSERT_EQUAL(expected, result);
}


CTEST(suite, check_small_time_bs)
{
    int sum=100000;
    int time=5;
    const int result = depositCalc(sum,time);
    const int expected = sum/100*-10;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite, check_time_31_bs)
{
    int sum=100000;
    int time=31;
    const int result = depositCalc(sum,time);
    const int expected = sum/100*3;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite, check_time_121_bs)
{
    int sum=100000;
    int time=121;
    const int result = depositCalc(sum,time);
    const int expected = sum/100*8;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite, check_time_241_bs)
{
    int sum=100000;
    int time=241;
    const int result = depositCalc(sum,time);
    const int expected = sum/100*15;
    ASSERT_EQUAL(expected, result);
}

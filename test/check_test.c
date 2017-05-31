#include <ctest.h>
#include "deposit.h"


CTEST(suite, check_small_sum){
    const int result = check(1000,100);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite, check_small_time){
    const int result = check(20000,-100);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite, check_big_time){
    const int result = check(20000,400);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite, check_correct){
    const int result = check(20000,100);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}



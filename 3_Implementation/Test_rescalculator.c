#include"res_calculator.h"
#include "unity.h"
void setup (void) {} /* Is run before every test, put unit init calls here. */
void tearDown (void) {}
void test_getResistorValue(void){
        char colorCode[]={'G','Y','N','R'};
        int colorValue[];
        long mult;
        long *mult=&mult;
    TEST_ASSERT_EQUAL_FLOAT(541,getResistorValue(colorCode[],colorValue[], long *mult ))
}
int test_main()
{
    UNITY_BEGIN();
    RUN_TEST(test_getResistorValue);
    return UNITY_END();
}
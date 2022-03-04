#include"res_calculator.h"
#include "unity.h"
void setUp (void) {} /* Is run before every test, put unit init calls here. */
void tearDown (void) {}
void test_getResistorValue(void){
        char colorCode[]={'G','Y','N','R'};
        int colorValue[4];
        //long mult=0;
      //  long *mult=&mult
    TEST_ASSERT_EQUAL(541,getResistorValue(colorCode[4],colorValue[4] ));
}
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_getResistorValue);
    return UNITY_END();
}
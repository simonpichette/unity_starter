#include "unity/unity.h"
#include "../src/solution_c_bas_niveau.c"

void setUp(void){

}

void tearDown(void){

}

void test_count_string_lenght_of_9(){
    TEST_ASSERT_EQUAL_INT(9, strlen("stringof9"));
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_count_string_lenght_of_9);

    return UNITY_END();
}
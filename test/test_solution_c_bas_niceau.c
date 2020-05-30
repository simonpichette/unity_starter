#include "unity/unity.h"
#include "../src/solution_c_bas_niveau.c"

void setUp(void){

}

void tearDown(void){

}

void test_count_string_lenght_of_9(){
    TEST_ASSERT_EQUAL_INT(9, strlen("stringof9"));
}

void test_dec_to_hex_convertion_18_32_bit(){
    char string_to_test[100] = {(char) NULL};
    TEST_ASSERT_EQUAL_STRING("00000012", hexstr(18, string_to_test, 32));
}

void test_dec_to_hex_convertion_155_8_bit(){
    char string_to_test[100] = {(char) NULL};
    TEST_ASSERT_EQUAL_STRING("9B", hexstr(155, string_to_test, 8));
}

void test_char_from_int_10(){
    char car[100];
    TEST_ASSERT_EQUAL_STRING("10", longtodec(10, car));
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_count_string_lenght_of_9);
    RUN_TEST(test_dec_to_hex_convertion_18_32_bit);
    RUN_TEST(test_dec_to_hex_convertion_155_8_bit);
    RUN_TEST(test_char_from_int_10);

    return UNITY_END();
}
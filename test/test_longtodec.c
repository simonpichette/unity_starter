//
//  test_longtodec.c
//  test
//
//  Created by Badr Jaidi on 2020-05-26.
//

#include "unity/unity.h"
#include "../src/solution_c_bas_niveau.c"

void setUp(void){

}

void tearDown(void){

}

void test_char_from_int_10(){
    
    char car[100];
    TEST_ASSERT_EQUAL_STRING("10", longtodec(10, car));
    
}

int main(void){
    
    UNITY_BEGIN();
    RUN_TEST(test_char_from_int_10);

    return UNITY_END();
    
}

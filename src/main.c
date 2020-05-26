#include "../test/unity/unity.h"

void setUp(void)
{
    // set stuff up
}

void tearDown(void)
{
    // clean up when done
}

void test1(void)
{

}

void test2(void)
{

}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test1);
    RUN_TEST(test2);
    return UNITY_END();
}

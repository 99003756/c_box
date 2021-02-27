#include "unity.h"
#include "box.h"

void setUp(void) {}
void tearDown(void){}

void test_search_code(void)
{
    TEST_ASSERT_EQUAL(3,search_code(w1));
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_search_code);
    return UNITY_END();
}
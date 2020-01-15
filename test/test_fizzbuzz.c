#include "unity_fixture.h"
#include "fizzbuzz.h"

TEST_GROUP(FizzBuzz);

TEST_SETUP(FizzBuzz) {}

TEST_TEAR_DOWN(FizzBuzz) {}

TEST(FizzBuzz, given1_shouldReturns1) {
    TEST_ASSERT_EQUAL_STRING("1", fizzbuzz(1));
}

TEST_GROUP_RUNNER(FizzBuzz) {
    RUN_TEST_CASE(FizzBuzz, given1_shouldReturns1);
}

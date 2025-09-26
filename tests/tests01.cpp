#include <gtest/gtest.h>
#include "../include/palindrome.h"

TEST(test_01, basic_test_set)
{
    ASSERT_TRUE(is_palindrome(""));
}

TEST(test_02, basic_test_set)
{
    ASSERT_TRUE(is_palindrome("a"));
}

TEST(test_03, basic_test_set)
{
    ASSERT_TRUE(is_palindrome("ab")==false);
}

TEST(test_04, basic_test_set)
{
    ASSERT_TRUE(is_palindrome("aa"));
}

TEST(test_05, basic_test_set)
{
    ASSERT_TRUE(is_palindrome("aba"));
}

TEST(test_06, basic_test_set)
{
    ASSERT_TRUE(is_palindrome("aaa"));
}

TEST(test_07, basic_test_set)
{
    ASSERT_TRUE(is_palindrome("abba"));
}

TEST(test_08, basic_test_set)
{
    ASSERT_TRUE(is_palindrome("abab")==false);
}

TEST(test_09, basic_test_set)
{
    ASSERT_TRUE(is_palindrome("abcda")==false);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

TEST(PracticeTest, Palindrome)
{
    Practice testObj;

    string temp;

    temp = "rotator";

    ASSERT_EQ(testObj.isPalindrome(temp), true);

    temp = "tghvjbkn";

    ASSERT_EQ(testObj.isPalindrome(temp), false);
}

TEST(PracticeTest, Repeats)
{
    Practice testObj;

    string temp;

    temp = "aaaabcabcabcabc";

    ASSERT_EQ(testObj.count_starting_repeats(temp), 4);

    temp = "";

    ASSERT_EQ(testObj.count_starting_repeats(temp), 0);
}

TEST(PracticeTest, Decend)
{
    Practice testObj;

    int a, b, c;

    a = 6;
    b = 7;
    c = 1;

    testObj.sortDescending(a, b, c);

    ASSERT_EQ(a, 7);
    ASSERT_EQ(b, 6);
    ASSERT_EQ(c, 1);

    a = 3;
    b = 2;
    c = 1;

    testObj.sortDescending(a, b, c);

    ASSERT_EQ(a, 3);
    ASSERT_EQ(b, 2);
    ASSERT_EQ(c, 1);
}

TEST(PracticeTest, Sleep)
{
    Practice testObj;

    int temp[7] = {0,0,0,0,0,0,0};

    ASSERT_EQ(*testObj.allnighter(temp), 0);
}

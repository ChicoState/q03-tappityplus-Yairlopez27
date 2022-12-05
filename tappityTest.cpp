/**
 * Unit Test suite
**/

#include <gtest/gtest.h>
#include "tappity.h"
#include <string>
using namespace std;
 
class tappityTest : public ::testing::Test
{
	protected:
		tappityTest(){} 
		virtual ~tappityTest(){} 
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(tappityTest, variablesWork)
{
	tappity mypractice("hello");
	mypractice.entry("hello");
	int actual = mypractice.length_difference();
	ASSERT_EQ(actual, 0);
}
TEST(tappityTest, easyAccuracy)
{
	tappity mypractice("thisworks");
	mypractice.entry("thisworks");
	double actual = mypractice.accuracy();
	ASSERT_EQ(actual, 100);
}
TEST(tappityTest, DiffLenghtAccu)
{
	tappity mypractice("hello");
	mypractice.entry("Thisworks");
	double actual = mypractice.accuracy();
	ASSERT_EQ(actual, 0);
}
TEST(tappityTest, spaceTestLenght)
{
	tappity mypractice("hello");
	mypractice.entry("    hello");
	int actual = mypractice.length_difference();
	ASSERT_EQ(actual, 0);
}
TEST(tappityTest, spaceTestAccu)
{
	tappity mypractice("hello");
	mypractice.entry("    hello");
	double actual = mypractice.accuracy();
	ASSERT_EQ(actual, 50);
}
// TEST(PracticeTest, zeroAtPos1)
// {
// 	Practice mypractice;
// 	int test[7] = {0,2,3,4,5,6,4};
// 	int* actual = mypractice.allnighter(test);
// 	ASSERT_EQ(actual, &test[0]);
// }
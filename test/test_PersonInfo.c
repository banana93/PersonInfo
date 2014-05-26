#include "unity.h"
#include "PersonInfo.h"


void setUp(void)
{
}

void tearDown(void)
{
}

void test_setAge_given_131_should_return_0(void)
{
	int result;
	PersonInfo SamInfo;
	result = setAge(&SamInfo, 131); 
	TEST_ASSERT_EQUAL(0, result);
	
}

void test_setAge_given_negative_1_should_return_0(void)
{
	int result;
	PersonInfo SamInfo;
	result = setAge(&SamInfo, -1);
	TEST_ASSERT_EQUAL(0, result);
}

void test_setAge_given_23_should_return_1(void)
{
	int result;
	PersonInfo AliInfo;
	result = setAge(&AliInfo, 23);
	TEST_ASSERT_EQUAL(1, result);
}

void test_height_given_4_should_return_0(void)
{
	int heightresult;
	PersonInfo AbuInfo;
	heightresult = setHeight(&AbuInfo, 4);
	TEST_ASSERT_EQUAL(0, heightresult);
}

void test_height_given_1_should_return_1(void)
{
	int heightresult;
	PersonInfo AbuInfo;
	heightresult = setHeight(&AbuInfo, 1);
	TEST_ASSERT_EQUAL(1, heightresult);
}

void test_height_given_negative_1_should_return_0(void)
{
	int heightresult;
	PersonInfo AbuInfo;
	heightresult = setHeight(&AbuInfo, -1);
	TEST_ASSERT_EQUAL(0, heightresult);
}

void test_telephone_given_long_integer_start_with_0_return_0(void)
{
	int telnumber;
	PersonInfo BananaInfo;
	telnumber = setTelephone(&BananaInfo, 0111);
	TEST_ASSERT_EQUAL(0, telnumber);
}







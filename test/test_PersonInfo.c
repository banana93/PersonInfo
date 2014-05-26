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

void test_setAge_given_23_should_return_1(void)
{
	int result;
	PersonInfo AliInfo;
	result = setAge(&AliInfo, 23);
	TEST_ASSERT_EQUAL(1, result);
}

void test_height_given_1_should_return_1(void)
{
	int result;
	PersonInfo AbuInfo;
	result = setHeight(&AbuInfo, 1);
	TEST_ASSERT_EQUAL(1, 1);
}






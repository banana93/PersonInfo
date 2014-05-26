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

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)18, UNITY_DISPLAY_STYLE_INT);



}



void test_setAge_given_23_should_return_1(void)

{

 int result;

 PersonInfo AliInfo;

 result = setAge(&AliInfo, 23);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)27, UNITY_DISPLAY_STYLE_INT);

}



void test_height_given_1_should_return_1(void)

{

 int result;

 PersonInfo AbuInfo;

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((1)), (((void *)0)), (_U_UINT)34, UNITY_DISPLAY_STYLE_INT);

}

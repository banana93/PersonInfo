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



void test_setAge_given_negative_1_should_return_0(void)

{

 int result;

 PersonInfo SamInfo;

 result = setAge(&SamInfo, -1);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)27, UNITY_DISPLAY_STYLE_INT);

}



void test_setAge_given_23_should_return_1(void)

{

 int result;

 PersonInfo AliInfo;

 result = setAge(&AliInfo, 23);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)35, UNITY_DISPLAY_STYLE_INT);

}



void test_height_given_4_should_return_0(void)

{

 int heightresult;

 PersonInfo AbuInfo;

 heightresult = setHeight(&AbuInfo, 4);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((heightresult)), (((void *)0)), (_U_UINT)43, UNITY_DISPLAY_STYLE_INT);

}



void test_height_given_1_should_return_1(void)

{

 int heightresult;

 PersonInfo AbuInfo;

 heightresult = setHeight(&AbuInfo, 1);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((heightresult)), (((void *)0)), (_U_UINT)51, UNITY_DISPLAY_STYLE_INT);

}



void test_height_given_negative_1_should_return_0(void)

{

 int heightresult;

 PersonInfo AbuInfo;

 heightresult = setHeight(&AbuInfo, -1);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((heightresult)), (((void *)0)), (_U_UINT)59, UNITY_DISPLAY_STYLE_INT);

}



void test_telephone_given_long_integer_start_with_0_return_0(void)

{

 int telnumber;

 PersonInfo BananaInfo;

 telnumber = setTelephone(&BananaInfo, 0111);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((telnumber)), (((void *)0)), (_U_UINT)67, UNITY_DISPLAY_STYLE_INT);

}

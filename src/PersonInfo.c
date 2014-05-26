#include "stdio.h"
#include "PersonInfo.h"

int setAge(PersonInfo *info, int age)
{
	info->age = age;
	if((info->age) > 130)
	{
		return 0;
	}
	else if((info->age) < 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}




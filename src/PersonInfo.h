#ifndef PersonInfo_H
#define PersonInfo_H

typedef struct PersonInfo_t
{
	char firstName[21];
	char lastName[21];
	int age;
	float height;
	unsigned long int telephone;
} PersonInfo;

int setAge(PersonInfo *info, int age);

#endif // PersonInfo_H

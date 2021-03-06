#ifndef PersonInfo_H
#define PersonInfo_H

typedef struct PersonInfo_t
{
	char firstName[21];
	char lastName[21];
	int age;
	float height;

} PersonInfo;

int setAge(PersonInfo *info, int age);
int setHeight(PersonInfo *info, float height);
int setTelephone(PersonInfo *info, unsigned long int telephone);

#endif // PersonInfo_H

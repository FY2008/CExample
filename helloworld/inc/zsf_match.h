#ifndef ZSF_MATCH_H
#define ZSF_MATCH_H

#define LINE printf("************************************************\n")

static const float PI = 3.14;

typedef enum
{
    MALE = 0x00U,   // MALE->男
    FEMALE = 0x01U // FEMALE->女
} Sex;

typedef struct
{
    char name[30];
    unsigned char age;
    Sex sex;
} Person;

int add(int n1, int n2);
void swop_int(int *n1, int *n2);
double circle_area(double radius);
void getPerson(Person p);
void setPerson(Person *p, const char *name, Sex sex, unsigned char age);
void ageToday(int Age); // 把年转为天

#endif // !ZSF_MATCH_H
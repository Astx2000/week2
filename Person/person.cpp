#include <iostream>
struct Person
{
    char name[20];
    char email[30];
    int age;
};

void constructor(Person* p){}
void destructor(Person* p){}

void set_name(Person* p,char* name,int size)
{
    for (int i=0;i<size;++i)
    p->name[i]=name[i];
}

void set_age(Person* p,int age)
{
    p->age=age;
}
void set_name(Person* p,char* email,int size)
{
    for (int i=0;i<size;++i)
    p->email[i]=email[i];
}
const char* get_name(const Person* p)
{
    return p->name;
}
const int get_age(const Person* p)
{
    return p->age;
}
const char* get_email(const Person* p)
{
    return p->email;
}
void copy_ctor(Person* p,const Person* oth)
{
    for (int i=0;i<20;++i)
    p->name[i]=oth->name[i];
    for(int i=0;i<30;++i)
    p->email[i]=oth->email[i];
    p->age=oth->age;
}
Person* op_veragrum(Person* p,const Person* oth)
{
    if(p==oth)
    {
        return p;
    }
    for (int i=0;i<20;++i)
    p->name[i]=oth->name[i];
    for(int i=0;i<30;++i)
    p->email[i]=oth->email[i];
    p->age=oth->age;
    return p;
}
int main()
{
    
}

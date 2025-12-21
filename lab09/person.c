#include <stdio.h>
#include <stdlib.h>

struct person
{
    char* fname;
    char* lname;
    char* mname;
};

struct person* person_init(char* firstname, char* lastname, char* middlename)
{
    struct person* new_person = malloc(sizeof(struct person));
    new_person->fname = firstname;
    new_person->lname = lastname;
    new_person->mname = middlename;

    return new_person;
}

struct person* childof(struct person father, char* newname)
{
    struct person* new_person = malloc(sizeof(struct person));
    new_person->fname = newname;
    new_person->lname = father.lname;
    new_person->mname = father.mname;

    return new_person;
}

int main()
{
    struct person* father = person_init("Stavros", "Stavrinoudakis", "Skywalker");
    struct person* me = childof(*father, "Alexandros");

    printf("Me: %s %s %s\n", me->fname, me->mname, me->lname);

    free(father);
    free(me);
}

#ifndef _STATIC_LIST_H_
#define _STATIC_LIST_H_

/*
 * Defining the size of the vector that will compose the abstract type a List
 * structure.
 */
#define SIZE 50

/*
 * Defining the maximum length of a person name.
 */
#define NAME_LENGTH 100

/*
 * Defining the person abstract type to be stored in the List structure.
 */
typedef struct PersonTAD Person;

/*
 * Implementing the abstract type person.
 */
struct PersonTAD {
  int id;
  char name[NAME_LENGTH];
};

/*
 * Defining the static list abstract type.
 */
typedef struct StaticListTAD List;

/*
 * Defining list operations.
 */
int isCreated(List *L);
List *initializeList();
int size(List *L);
int isEmpty(List *L);
int isFull(List *L);
void insertStart(List *L, struct PersonTAD person);
void insertEnd(List *L, struct PersonTAD person);
void removeStart(List *L);
void removeEnd(List *L);
void searchByPosition(List *L, int pos, struct PersonTAD *person);
void destroy(List *L);

/*
 * Defining person operations.
 */
void showAllPerson(List *L);
struct PersonTAD initializePerson();
void showPerson(struct PersonTAD person);

/*
 * Defining CLI application functions to choices and startup.
 */
void insertChoices();
void removeChoices();
void searchChoices();
void startupChoices();
void choices(List *L, int option);
void startup(List *L);

#endif

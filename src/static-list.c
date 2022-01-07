#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include "common.h"
#include "static-list.h"

/*
 * Implementing the abstract type Static List.
 */
struct StaticListTAD {
  int tam;
  struct PersonTAD data[SIZE];
};

/*
 * Showing application default header.
 */
void header() {
  time_t t;
  time(&t);
  printf(ANSI_COLOR_GREEN);
  printf("\n.---.\n");
  printf("___ /_____\\ \n");
  printf("/\\.-`( '.' ) Static List\n");
  printf("___ /_____\\" ANSI_COLOR_RESET "\n\n");
  printf(ANSI_COLOR_BLUE "@CI-Monk -- Date and time now: %s" ANSI_COLOR_RESET
                         "\n",
         ctime(&t));
}

/*
 * Showing application menu start up.
 */
void menuStartup() {
  header();
  printf(ANSI_COLOR_CYAN);
  printf("> [1] - Insert\n");
  printf("> [2] - Remove\n");
  printf("> [3] - Search\n");
  printf("> [4] - Show\n");
  printf("> [5] - Exit" ANSI_COLOR_RESET "\n\n");
}

/*
 * Showing application menu insert.
 */
void menuInsert() {
  system("clear");
  header();
  printf("Insertion Menu\n\n");
  printf(ANSI_COLOR_CYAN);
  printf("> [1] - Insert element at the beginning\n");
  printf("> [2] - Insert element at the end\n");
  printf("> [3] - Back to menu" ANSI_COLOR_RESET "\n\n");
}

/*
 * Showing application menu remove.
 */
void menuRemove() {
  system("clear");
  header();
  printf("Remove Menu\n\n");
  printf(ANSI_COLOR_CYAN);
  printf("> [1] - Remove element at the beginning\n");
  printf("> [2] - Remove element at the end\n");
  printf("> [3] - Back to menu" ANSI_COLOR_RESET "\n\n");
}

/*
 * Showing application menu search.
 */
void menuSearch() {
  system("clear");
  header();
  printf("Search Menu\n\n");
  printf(ANSI_COLOR_CYAN);
  printf("> [1] - Search element by Position\n");
  printf("> [2] - Search element by ID\n");
  printf("> [3] - Back to menu" ANSI_COLOR_RESET "\n\n");
}

/*
 * Checking if the list has been created.
 */
int isCreated(List *L) { return L != NULL; }

/*
 * Dynamically allocates the list and return a reference pointer of List type.
 */
List *initializeList() {
  List *L = (List *)malloc(sizeof(List));
  if (isCreated(L)) {
    printf("Successfully allocated list.\n");
    L->tam = 0;
  }
  return L;
}

/*
 * Return the list size.
 */
int size(List *L) {
  if (isCreated(L)) {
    return L->tam;
  } else {
    return -1;
  }
}

/*
 * Checking if the list is empty.
 */
int isEmpty(List *L) {
  if (isCreated(L)) {
    return L->tam == 0;
  } else {
    return -1;
  }
}

/*
 * Checking if the list is full.
 */
int isFull(List *L) {
  if (isCreated(L)) {
    return L->tam == SIZE;
  } else {
    return -1;
  }
}

/*
 * Free memory reference to the list allocation.
 */
void destroy(List *L) {
  free(L);
  printf("The reference to the list in memory was destroyed!\n");
}

/*
 * Insert an element at the end [0] of the list.
 */
void insertStart(List *L, struct PersonTAD person) {
  if (isFull(L)) {
    system("clear");
    printf(ANSI_COLOR_RED "You exceed the registration limit... Back to main "
                          "menu" ANSI_COLOR_RESET);
    startup(L);
  } else {
    if (size(L) == 0) {
      L->data[0] = person;
    } else {
      for (int i = size(L); i >= 0; i--) {
        L->data[i + 1] = L->data[i];
      }
      L->data[0] = person;
    }
    L->tam++;
  }
}

/*
 * Insert an element at the end [size -1] of the list.
 */
void insertEnd(List *L, struct PersonTAD person) {
  if (isFull(L)) {
    system("clear");
    printf(ANSI_COLOR_RED "You exceed the registration limit... Back to main "
                          "menu" ANSI_COLOR_RESET);
    startup(L);
  } else {
    L->data[size(L)] = person;
    L->tam++;
  }
}

/*
 * Remove an element at the start [0] of the list.
 */
void removeStart(List *L) {
  if (isEmpty(L)) {
    system("clear");
    printf(ANSI_COLOR_RED
           "The list already is empty... Back to main menu" ANSI_COLOR_RESET);
    startup(L);
  } else {
    for (int i = 0; i < size(L) - 1; i++) {
      L->data[i] = L->data[i + 1];
    }
    L->tam--;
  }
}

/*
 * Remove an element at the end [size -1] of the list.
 */
void removeEnd(List *L) {
  if (isEmpty(L)) {
    system("clear");
    printf(ANSI_COLOR_RED
           "The list already is empty... Back to main menu" ANSI_COLOR_RESET);
    startup(L);
  } else {
    L->tam--;
  }
}

/*
 * Search an element given a position.
 */
void searchByPosition(List *L, int position, struct PersonTAD *person) {
  if (isEmpty(L)) {
    system("clear");
    printf(ANSI_COLOR_RED
           "The list is empty... Back to main menu" ANSI_COLOR_RESET);
    startup(L);
  } else {
    if (!(position <= 0 || position > size(L))) {
      *person = L->data[position - 1];
      showPerson(*person);
    } else {
      printf(
          ANSI_COLOR_RED
          "Fail to search this position... Back to main menu" ANSI_COLOR_RESET);
    }
  }
}

/*
 * Search an element given an ID.
 */
void searchByID(List *L, int id, struct PersonTAD *person) {
  if (isEmpty(L)) {
    system("clear");
    printf(ANSI_COLOR_RED
           "The list is empty... Back to main menu" ANSI_COLOR_RESET);
    startup(L);
  } else {
    int check = 0, position = 0;

    for (int i = 0; i < size(L); i++) {
      if (L->data[i].id == id) {
        check = 1;
        position = i;
      }
    }

    if (check) {
      *person = L->data[position];
      showPerson(*person);
    } else {
      printf(ANSI_COLOR_RED
             "Fail to search this ID... Back to main menu" ANSI_COLOR_RESET);
    }
  }
}

/*
 * Show a struct person element.
 */
void showPerson(struct PersonTAD person) {
  printf(ANSI_COLOR_YELLOW "\n--------------------------------\n");
  printf("> ID: %d\n", person.id);
  printf("> NAME: %s", person.name);
  printf("\n--------------------------------" ANSI_COLOR_RESET "\n");
}

/*
 * Iter all list and show each person.
 */
void showAll(List *L) {
  if (isEmpty(L)) {
    system("clear");
    printf(ANSI_COLOR_RED
           "The list is empty... Back to main menu" ANSI_COLOR_RESET);
    startup(L);
  } else {
    for (int i = 0; i < size(L); i++) {
      struct PersonTAD *ptr = L->data;
      printf(ANSI_COLOR_YELLOW "--------------------------------\n");
      printf("> Position: %d\n", i);
      printf("> ID: %d\n", ptr[i].id);
      printf("> Name: %s\n", ptr[i].name);
    }
    printf("--------------------------------" ANSI_COLOR_RESET "\n");
    printf("\nPress [Enter] key to continue...");
    fflush(stdin);
    getchar();
  }
}

/*
 */
struct PersonTAD initializePerson() {
  struct PersonTAD P;

  system("clear");
  header();

  printf("What is your ID? ");
  scanf("%d", &P.id);
  fflush(stdin);

  printf("What is your Name? ");
  scanf(" %80[^\n]", P.name);
  fflush(stdin);

  return P;
}

void insertChoices(List *L, int type, struct PersonTAD P) {
  switch (type) {
  case 1:
    P = initializePerson();
    insertStart(L, P);
    system("clear");
    startup(L);
    break;
  case 2:
    P = initializePerson();
    insertEnd(L, P);
    system("clear");
    startup(L);
    break;
  case 3:
    system("clear");
    startup(L);
    break;
  }
}

void removeChoices(List *L, int type) {
  switch (type) {
  case 1:
    removeStart(L);
    sleep(1);
    system("clear");
    startup(L);
    break;
  case 2:
    removeEnd(L);
    sleep(1);
    system("clear");
    startup(L);
    break;
  case 3:
    system("clear");
    startup(L);
    break;
  }
}

void searchChoices(List *L, int type, struct PersonTAD P) {
  int id, position;
  switch (type) {
  case 1:
    printf("\nTell me a position: ");
    scanf("%d", &position);
    searchByPosition(L, position, &P);
    sleep(1);
    system("clear");
    startup(L);
    break;
  case 2:
    printf("\nTell me an ID: ");
    scanf("%d", &id);
    searchByID(L, id, &P);
    sleep(1);
    system("clear");
    startup(L);
    break;
  case 3:
    system("clear");
    startup(L);
    break;
  }
}

/*
 * Handler all menu options.
 */
void startupChoices(List *L, int option) {
  int type;
  struct PersonTAD P;
  switch (option) {
  // INSERT
  case 1:
    menuInsert();
    printf("Choose an option: ");
    scanf("%d", &type);
    insertChoices(L, type, P);
    system("clear");
    break;
  // REMOVE
  case 2:
    menuRemove();
    printf("Choose an option: ");
    scanf("%d", &type);
    removeChoices(L, type);
    system("clear");
    break;
  // SEARCH
  case 3:
    menuSearch();
    printf("Choose an option: ");
    scanf("%d", &type);
    searchChoices(L, type, P);
    system("clear");
    break;
  // SHOW
  case 4:
    system("clear");
    header();
    showAll(L);
    system("clear");
    startup(L);
    break;
  // EXIT
  case 5:
    system("clear");
    header();
    printf("Bye bye!\n");
    exit(0);
    break;
  }
}

/*
 * Show the principal menu.
 */
void startup(List *L) {
  int option = 0;
  menuStartup();

  printf("Choose an option: ");
  scanf("%d", &option);

  startupChoices(L, option);
}

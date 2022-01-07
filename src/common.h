#ifndef _COMMOM_H_
#define _COMMOM_H_

// Defining output colors.
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_RESET "\x1b[0m"

// Definin common functions.
void header();
void menuInsert();
void menuRemove();
void menuSearch();
void menuStart();

#endif

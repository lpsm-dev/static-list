#include "static-list.h"
#include <locale.h>
#include <stdio.h>

int main() {
  // Support language config.
  setlocale(LC_ALL, "Portuguese");

  // Declare list.
  List *L;

  // Create list and initialize information.
  L = initializeList();

  // Call core menu options.
  startup(L);
  return 0;
}

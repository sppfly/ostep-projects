#include <stdbool.h>
#include <stdlib.h>

#ifndef KVLIB_H

#define KVLIB_H

typedef char *String;

typedef struct {
  int key;
  size_t length;
  char *value;
  bool deleted;
} Record;

typedef Record *Recordptr;

typedef struct {
  size_t length;
  Recordptr records;
} Database;

typedef Database *Databaseptr; ;

typedef struct {
  char c;
  int key;
  char *value;

} Command;

#endif
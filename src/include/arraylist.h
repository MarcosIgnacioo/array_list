#include <stdio.h>
typedef enum { String, Int, Float, Bool, Any } Type;

typedef void (*Push)(void *);
typedef void (*Pop)(void *);
typedef void (*AddAt)(void *);
typedef void (*RemoveAt)(void *);
typedef void *(*Get)(int);

typedef struct {
  Type type;
  size_t length;
  size_t capacity;
  void **array_list;
} ArrayList;

ArrayList *new_array_list(int capacity, Type type);
void push(ArrayList *array_list, void *ptr);

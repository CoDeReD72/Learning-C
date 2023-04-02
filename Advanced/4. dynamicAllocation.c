#include <stdio.h>
#include <stdlib.h>

/*

==== DYNAMIC MEMORY ALLOCATION ====

- Dynamic memory allocation is the process of allocating memory during the runtime of the program.
- The memory is allocated from the heap, which is a part of the data segment.
- The heap is a region of memory which is not managed by the compiler.
- The programmer has to explicitly allocate and deallocate memory from the heap.
- The memory allocated from the heap is not automatically deallocated when the program terminates.

- Malloc() function is used to allocate memory dynamically. - Stores just enough for the data structure to be held. - Returns a pointer to the first byte of the allocated memory.
- Free() function is used to deallocate the memory allocated by malloc() function.

*/

typedef struct {
  int x;
  int y;
} point;

int main() {
  point * mypoint = NULL;

  mypoint = (point *)malloc(sizeof(point)); // malloc returns a void pointer, so we need to cast it to point pointer type - Memory allocated

  mypoint->x = 10;
  mypoint->y =5 ;
  printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

  free(mypoint); // Memory deallocated
  return 0;
}
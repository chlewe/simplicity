#ifndef SIMPLICITY_SIMPLICITY_ALLOC_H
#define SIMPLICITY_SIMPLICITY_ALLOC_H

#include <stdlib.h>

/* Allocate with malloc by default. */
/* Overwrite the macro to use a different function. */
#define simplicity_malloc(size, align) malloc(size)

/* Deallocate with free by default. */
/* Overwrite the macro to use a different function. */
#define simplicity_free(ptr, size, align) free(ptr)

#endif /* SIMPLICITY_SIMPLICITY_ALLOC_H */

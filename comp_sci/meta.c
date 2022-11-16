#ifndef META_H
#define META_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <time.h>
#include <math.h>

#include "meta.h"


void sp_print(const smart_pointer p) {
    int *ptr = (int *)p.ptr;
    if (p.isArray) {
        for(int i = 0; i < p.size; i++) {
            printf("%d ", *ptr++);
        }
    } else {
        printf("%d ", *ptr);
    }
    printf("\n");
}

smart_pointer* sp_create(void* ptr, bool is_array, int size) {
    smart_pointer* p = malloc(sizeof(smart_pointer *));
    p->ptr = ptr;
    p->isArray = is_array;
    p->size = size;
    return p;
}

void sp_destroy(smart_pointer* ptr) {
    /** free(ptr->ptr); */
    free(ptr);
    ptr = NULL;
}

#endif

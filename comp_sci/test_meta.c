#ifndef TEST_META_H
#define TEST_META_H

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "meta.h"
#include "test_meta.h"


int test_meta()
{
    int arr[4] = {76, 57, 19, 38};
    int a = 3;
    int b = 5;
    printf("hello comp sci, hello %d\n", VAR);
    smart_pointer sp1 = { .ptr = &a, .isArray = false, .size = 0 };
    smart_pointer sp2 = { .ptr = arr, .isArray = true, .size = 4 };
    sp_print(sp1);
    sp_print(sp2);
    smart_pointer* sp0 = sp_create((void*)&a, false, 0);
    sp_print(*sp0);
    sp* sp3 = sp_create((void *)&arr[0], true, 4);
    sp_print(*sp3);
    sp sp5 = { .ptr = (void *)malloc(sizeof(int*)), .isArray = false, .size = 0 };
    *(int *)sp5.ptr = 7;
    sp_print(sp5);
    free(sp5.ptr);
    sp5.ptr = NULL;
    assert(VAR == 19);
    sp_destroy(sp0);
    sp_destroy(sp3);
    return 0;
}

#endif

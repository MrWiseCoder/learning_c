#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "meta.h"


int test_meta()
{
    printf("hello comp sci, hello %d\n", VAR);
    assert(VAR == 19);
    return 0;
}


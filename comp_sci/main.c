#include <stdlib.h>
#include <stdio.h>

#include "test_meta.h"


int main(int argc, char *argv[])
{
    printf(" *** using the library in func: '%s' ***\n", __FUNCTION__);
    test_meta();
    return 0;
}

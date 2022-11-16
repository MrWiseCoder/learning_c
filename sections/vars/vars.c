#include <stdio.h>


#define MYMACRO(a, b) a > b ? a : b
#define MYERROR 69

int main(int argc, char *argv[])
{
    printf("Which is bigger 3 or 5 => %d \n", MYMACRO(3, 5));
    printf("Vars %d\n", MYERROR);
    return 0;
}

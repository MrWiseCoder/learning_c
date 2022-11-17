#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ht.h"


int main(int argc, char *argv[])
{
    printf("\t *** Hello Computer Science Stuff *** \n");
    hashtable* ht = hashtable_create("People");
    hashtable_append(ht, "Ozi", 32);
    hashtable_append(ht, "Ado", 35);
    hashtable_print(ht);
    hashtable_save(ht, "hashtable_saved.json");
    hashtable_free(ht);
    return 0;
}

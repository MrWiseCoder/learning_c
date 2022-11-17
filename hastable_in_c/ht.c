#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ht.h"


void _hashtable_append(hashtable* ht, int* idx, char* key, value* val) {
    ht->elem[*idx].key = malloc(sizeof(strlen(key)) + 1);
    strcpy(ht->elem[*idx].key, key);
    ht->elem[*idx].val.ival = val->ival;
    (*idx)++;
}

void hashtable_append(hashtable* ht, char* key, int val) {
    value v = { .ival = val };
    _hashtable_append(ht, &(ht->size), key, &v);
}

void _hashtable_print(hashtable* ht, int l) {
    printf("%s={\n", ht->name);
    for (int i = 0; i < l; i++) {
        /** printf("\t Key:%s, value:%d\n", ht->elem[i].key, ht->elem[i].val.ival); */
        printf("\t \"%s\": %d\n", ht->elem[i].key, ht->elem[i].val.ival);
    }
    printf("}\n");
}

void hashtable_print(hashtable* ht) {
    _hashtable_print(ht, ht->size);
}

void hashtable_free(hashtable* ht) {
    for (int i = 0; i < ht->size; i++) {
        free(ht->elem[i].key);
    }
    free(ht);
}

hashtable* hashtable_create(const char* table_name) {
    hashtable* ht = malloc(sizeof(hashtable));
    ht->name = malloc(sizeof(table_name));
    strcpy(ht->name, table_name);
    return ht;
}

void hashtable_save(hashtable* ht, const char* filepath) {
    FILE* fp = fopen(filepath, "w");
    fputs("{\n", fp);
    for (int i = 0; i < ht->size; i++) {
        if (i == 0) {
            fprintf(fp, "\t\"%s\": \"%d\"", ht->elem[i].key, ht->elem[i].val.ival);
        } else {
            fprintf(fp, ",\n\t\"%s\": \"%d\"", ht->elem[i].key, ht->elem[i].val.ival);
        }
    }
    fputs("\n}\n", fp);
    fclose(fp);
    /** free(fp); */
}

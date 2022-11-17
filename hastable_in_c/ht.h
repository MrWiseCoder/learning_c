#ifndef HASTABLE_H
#define HASTABLE_H

#define HASHTABLE_ELEM_SIZE 100


typedef union _value value;
typedef struct _kvpair kvpair;
typedef struct _hashtable hashtable;


union _value {
    char cval;
    int ival;
};

struct _kvpair {
    char *key;
    value val;
};

struct _hashtable {
    char* name;
    int size;
    kvpair elem[HASHTABLE_ELEM_SIZE];
};


void _hashtable_append(hashtable*, int*, char*, value*);
void hashtable_append(hashtable*, char*, int);
void _hashtable_print(hashtable*, int);
void hashtable_print(hashtable*);
void hashtable_free(hashtable*);
hashtable* hashtable_create(const char*);
void hashtable_save(hashtable*, const char*);

#endif

#include <stdbool.h>

#define VAR 19

enum VARKINDS {
    INTEGER,
    STRING,
    FLOAT,
    COMPLEX
};

typedef enum VARKINDS vartype;

struct _smart_pointer {
    void* ptr;
    bool isArray;
    int size;
    vartype kind;
};

typedef struct _smart_pointer smart_pointer;
typedef smart_pointer sp;

void sp_print(const smart_pointer);
smart_pointer* sp_create(void*, bool, int);
void sp_destroy(smart_pointer*);

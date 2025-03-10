#pragma once

#ifndef HASHMAP_STRUCT_H
#define HASHMAP_STRUCT_H

#ifndef RAW
#define RAW 0 // Raw (For example a string, or a null in JSON)
#endif

#ifndef SHR
#define SHR 1 // Short
#endif

#ifndef INT
#define INT 2 // Integer
#endif

#ifndef FLT
#define FLT 3 // Float
#endif

#ifndef DBL
#define DBL 4 // Double
#endif

#ifndef LONG
#define LONG 5 // Long
#endif

#ifndef LL
#define LL 6 // Long long
#endif

#ifndef LDBL
#define LDBL 7  // Long Double
#endif

unsigned int SHR_STR_LEN;
unsigned int INT_STR_LEN;
unsigned int FLT_STR_LEN;
unsigned int DBL_STR_LEN;
unsigned int LONG_STR_LEN;
unsigned int LL_STR_LEN;
unsigned int LDBL_STR_LEN;

typedef struct Hmap {
    char *key;
    void *value;
    int valuetype;
    struct Hmap *next;
} map_t;

#endif // HASHMAP_STRUCT_H
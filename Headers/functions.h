#pragma once

#ifndef HASHMAP_FUNCS_H
#define HASHMAP_FUNCS_H

#include "structure.h"

/* This header defines functions for handling hash maps and lists */

// Returns the length of the hashmap, but if the pair is not the root of the hashmap, it will start from pair
unsigned int maplen(obj_t *);

// Returns the length of the list
unsigned int listlen(array_t *);

int calclistsize(array_t *);

int calcmapsize(obj_t *);

// Forcefully frees a pair
int freepair(obj_t *);

// Forcefully frees an element
int free_element(array_t *);

// Frees all the pairs after map and itself
int freemap(obj_t *);

// Frees the list (or frees every element after the given element)
int freelist(array_t *);

// Returns the pair that has the given key
obj_t *getpairbykey(obj_t *, char *);

// Returns the element by index in the given list
array_t *getelementbyindex(array_t *, unsigned int);

// Returns the pair before the given pair that has the given key, if found
obj_t *getprpairbykey(obj_t *, char *);

// This will initalize a hashmap and then return a pointer to it
obj_t *initM();

// Returns the last pair in a hash map
obj_t *getlastpair(obj_t *);

// Returns the last element in a list
array_t *getlastelement(array_t *);

// Initializes a list
array_t *initL();

// Adds a pair to the end of the given map and returns it
obj_t *appendH(obj_t *);

// Adds an element to the end of the given list and returns it
array_t *appendL(array_t *);

// Adds another pair after the given pair and returns it
obj_t *addafterH(obj_t *);

// Adds another element after the given element and returns it
array_t *addafterL(array_t *);

// Removes the last pair in a hashmap
int removelastH(obj_t *);

// Removes the last element in a list
int removelastL(array_t *);

// Removes the given map and then reassigns the next pointed the pair before the given map to pair after the given map
int removeafterH(obj_t *, obj_t *);

// Removes the element after the given element
int removeafterL(array_t *);

// Resets pairs key to the given string
obj_t *resetkey(obj_t *, char *, unsigned int);

// Resets pairs value to the given integer
int setintH(obj_t *, int);

int setintL(array_t *, int);

// Resets pairs value to the given short
int setshortH(obj_t *, short);

int setshortL(array_t *, short);

// Resets pairs value to the given float
int setfloatH(obj_t *, float);

int setfloatL(array_t *, float);

// Resets pairs value to the given string
int setrawH(obj_t *, char *, int);

int setrawL(array_t *, char *, unsigned int);

// Resets pairs value to the given double
int setdoubleH(obj_t *, double);

int setdoubleL(array_t *, double);

// Resets pairs value to the given long
int setlongH(obj_t *, long);

int setlongL(array_t *, long);

// Resets pairs value to the given long long
int setlonglongH(obj_t *, long long);

int setlonglongL(array_t *, long long);

// Resets pairs value to the given long double
int setlongdoubleH(obj_t *, long double);

int setlongdoubleL(array_t *, long double);

// Resets pairs value to the given list
int setlistH(obj_t *, array_t *);

int setlistL(array_t *, array_t *);

// Resets pairs value to the given hashmap
int setmapH(obj_t *, obj_t *);

int setmapL(array_t *, obj_t *);

#endif
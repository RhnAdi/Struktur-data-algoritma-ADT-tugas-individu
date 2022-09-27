#include "persegi.c"

struct Persegi;

struct Persegi initPersegi(float s);
float getLuasPersegi(struct Persegi p);
float getKelilingPersegi(struct Persegi p);
void ubahPersegi(struct Persegi *p, float s);
#include "trapesium.c"

struct Trapesium;

struct Trapesium initTrapesium(float ab, float bc, float cd, float ad, float t);
float getLuasTrapesium(struct Trapesium tr);
float getKelilingTrapesium(struct Trapesium tr);
void ubahTrapesium(struct Trapesium *tr, float ab, float bc, float cd, float ad, float t);
#include "lingkaran.c"

struct Lingkaran;

struct Lingkaran initLingkaran(float r);
float getLuasLingkaran(struct Lingkaran l);
float getKelilingLingkaran(struct Lingkaran l);
void ubahLingkaran(struct Lingkaran *l, float r);
#include "segilima.c"

struct Segilima;
struct Segilima initSegilima(float s);
float getLuasSegilima(struct Segilima sl);
float getKelilingSegilima(struct Segilima sl);
float ubahSegilima(struct Segilima *sl, float s);
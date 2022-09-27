## Struktur Data & Algoritma

Tugas Individu implementasi program dengan ADT dengan bahasa C untuk kasus menghitung keliling dan luas bangun datar: lingkaran, persegi, trapesium, segi lima.

### Lingkaran

- Define constanta PHI = 3.14

```
const float PHI = 3.14;
```

- Buat struct lingkaran yang berisi jari-jari

```
struct Lingkaran
{
  float r;
};
```

- Buat constructor untuk membuat sebuah lingkaran

```
struct Lingkaran initLingkaran(float r)
{
  struct Lingkaran *l = (struct Lingkaran *)malloc(sizeof(struct Lingkaran));
  l->r = r;
  return *l;
}
```

- Buat fungsi untuk menghitung luas lingkaran <mark> <i>PHI x r<sup>2</sup></i> </mark>

```
float getLuasLingkaran(struct Lingkaran l)
{
  return PHI * l.r * l.r;
}
```

- Buat fungsi untuk menghitung keliling lingkaran <mark><i>2 x PHI x r</i></mark>

```
float getKelilingLingkaran(struct Lingkaran l)
{
  return 2 * PHI * l.r;
}
```

- Buat fungsi untuk mengubah data lingkaran

```
void ubahLingkaran(struct Lingkaran *l, float r)
{
  l->r = r;
}
```

### Persegi

- Buat struct Persegi yang berisi sisi

```
struct Persegi
{
  float s;
};
```

- Buat constructor untuk membuat persegi

```
struct Persegi initPersegi(float s)
{
  struct Persegi *p = (struct Persegi *)malloc(sizeof(struct Persegi));
  p->s = s;
  return *p;
}
```

- Buat fungsi menghitung luas persegi <mark><i>sisi x sisi</i></mark>

```
float getLuasPersegi(struct Persegi p)
{
  return p.s * p.s;
}
```

- Buat fungsi menghitung keliling persegi <mark><i>4 x sisi</i></mark>

```
float getKelilingPersegi(struct Persegi p)
{
  return 4 * p.s;
}
```

- Buat fungsi mengubah data persegi

```
void ubahPersegi(struct Persegi *p, float s)
{
  p->s = s;
}
```

### Trapesium

- Buat struct Trapesium yang berisi tiap sisi trapesium dan tinggi

```
struct Trapesium
{
  float ab, bc, cd, ad, t;
};
```

- Buat constructor untuk membuat sebuah Trapesium

```
struct Trapesium initTrapesium(float ab, float bc, float cd, float ad, float t)
{
  struct Trapesium *tr = (struct Trapesium *)malloc(sizeof(struct Trapesium));
  tr->ab = ab;
  tr->bc = bc;
  tr->cd = cd;
  tr->ad = ad;
  tr->t = t;
  return *tr;
}
```

- Buat fungsi untuk menghitung luas trapesium <mark><i>1/2 x (ab + cd) x tinggi</i></mark>

```
float getLuasTrapesium(struct Trapesium tr)
{
  return 1 / 2.0 * (tr.ab + tr.cd) * tr.t;
}
```

- Buat fungsi menghitung keliling trapesium <mark><i>ab + bc + cd + ad</i></mark>

```
float getKelilingTrapesium(struct Trapesium tr)
{
  return tr.ab + tr.bc + tr.cd + tr.ad;
}
```

- Buat fungsi untuk mengubah data trapesium

```
void ubahTrapesium(struct Trapesium *tr, float ab, float bc, float cd, float ad, float t)
{
  tr->ab = ab;
  tr->bc = bc;
  tr->cd = cd;
  tr->ad = ad;
  tr->t = t;
}
```

### Segilima

- Buat struct segilima yang berisi sisi

```
struct Segilima
{
  float s;
};
```

- Buat constructor untuk membuat sebuah segilima

```
struct Segilima initSegilima(float s)
{
  struct Segilima *sl = (struct Segilima *)malloc(sizeof(struct Segilima));
  sl->s = s;
  return *sl;
}
```

- Buat fungsi untuk menghitung luas segilima <i>sisi<sup>2</sup>/4 x $\sqrt{25 + 10 * \sqrt{5}}$</i></i>
  > Membutuhkan #inlude <math.h>

```
float getLuasSegilima(struct Segilima sl)
{
  return pow(sl.s, 2) / 4.0 * sqrt(25 + 10 * sqrt(5));
}
```

- Buat fungsi untuk menghitung keliling segilima <i>5 x sisi</i></i>

```
float getKelilingSegilima(struct Segilima sl)
{
  return 5 * sl.s;
}
```

- Buat fungsi megubah data segilima

```
float ubahSegilima(struct Segilima *sl, float s)
{
 sl->s = s;
}
```

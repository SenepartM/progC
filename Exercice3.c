#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    char a, b, c, d, e, f, g, h, ii, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, space;
    int i, TO, aa, bb, cc, dd, ee, ff, gg, hh, iii, jj, kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, uu, vv, ww, xx, yy, zz, spacespace;
    printf("Saisir chaine de caractère\n");
    gets(string);
    TO = strlen(string);
    aa = 0;
    bb = 0;
    cc = 0;
    dd = 0;
    ee = 0;
    ff = 0;
    gg = 0;
    hh = 0;
    iii = 0;
    jj = 0;
    kk = 0;
    ll = 0;
    mm = 0;
    nn = 0;
    oo = 0;
    pp = 0;
    qq = 0;
    rr = 0;
    ss = 0;
    tt = 0;
    uu = 0;
    vv = 0;
    ww = 0;
    xx = 0;
    yy = 0;
    zz = 0;
    spacespace = 0;
    a = 'a';
    b = 'b';
    c = 'c';
    d = 'd';
    e = 'e';
    f = 'f';
    g = 'g';
    h = 'h';
    ii = 'i';
    j = 'j';
    k = 'k';
    l = 'l';
    m = 'm';
    n = 'n';
    o = 'o';
    p = 'p';
    q = 'q';
    r = 'r';
    s = 's';
    t = 't';
    u = 'u';
    v = 'v';
    w = 'w';
    x = 'x';
    y = 'y';
    z = 'z';
    space = ' ';

    for (i = 0; i <= TO - 1; i++)
    {
        if (string[i] == a)
        {
            aa++;
        }
        if (string[i] == b)
        {
            bb++;
        }
        if (string[i] == c)
        {
            cc++;
        }
        if (string[i] == d)
        {
            dd++;
        }
        if (string[i] == e)
        {
            ee++;
        }
        if (string[i] == f)
        {
            ff++;
        }
        if (string[i] == g)
        {
            gg++;
        }
        if (string[i] == h)
        {
            hh++;
        }
        if (string[i] == ii)
        {
            iii++;
        }
        if (string[i] == j)
        {
            jj++;
        }
        if (string[i] == k)
        {
            kk++;
        }
        if (string[i] == l)
        {
            ll++;
        }
        if (string[i] == m)
        {
            mm++;
        }
        if (string[i] == n)
        {
            nn++;
        }
        if (string[i] == o)
        {
            oo++;
        }
        if (string[i] == p)
        {
            pp++;
        }
        if (string[i] == q)
        {
            qq++;
        }
        if (string[i] == r)
        {
            rr++;
        }
        if (string[i] == s)
        {
            ss++;
        }
        if (string[i] == a)
        {
            aa++;
        }
        if (string[i] == t)
        {
            tt++;
        }
        if (string[i] == u)
        {
            uu++;
        }
        if (string[i] == v)
        {
            vv++;
        }
        if (string[i] == w)
        {
            ww++;
        }
        if (string[i] == x)
        {
            xx++;
        }
        if (string[i] == y)
        {
            yy++;
        }
        if (string[i] == z)
        {
            zz++;
        }
        if (string[i] == space)
        {
            spacespace++;
        }
    }
    printf("Le nombre de %c dans la chaine %s est %d\n", a, string, aa / 2);
    printf("Le nombre de %c dans la chaine %s est %d\n", b, string, bb);
    printf("Le nombre de %c dans la chaine %s est %d\n", c, string, cc);
    printf("Le nombre de %c dans la chaine %s est %d\n", d, string, dd);
    printf("Le nombre de %c dans la chaine %s est %d\n", e, string, ee);
    printf("Le nombre de %c dans la chaine %s est %d\n", f, string, ff);
    printf("Le nombre de %c dans la chaine %s est %d\n", g, string, gg);
    printf("Le nombre de %c dans la chaine %s est %d\n", h, string, hh);
    printf("Le nombre de %c dans la chaine %s est %d\n", ii, string, iii);
    printf("Le nombre de %c dans la chaine %s est %d\n", j, string, jj);
    printf("Le nombre de %c dans la chaine %s est %d\n", k, string, kk);
    printf("Le nombre de %c dans la chaine %s est %d\n", l, string, ll);
    printf("Le nombre de %c dans la chaine %s est %d\n", m, string, mm);
    printf("Le nombre de %c dans la chaine %s est %d\n", n, string, nn);
    printf("Le nombre de %c dans la chaine %s est %d\n", o, string, oo);
    printf("Le nombre de %c dans la chaine %s est %d\n", p, string, pp);
    printf("Le nombre de %c dans la chaine %s est %d\n", q, string, qq);
    printf("Le nombre de %c dans la chaine %s est %d\n", r, string, rr);
    printf("Le nombre de %c dans la chaine %s est %d\n", s, string, ss);
    printf("Le nombre de %c dans la chaine %s est %d\n", t, string, tt);
    printf("Le nombre de %c dans la chaine %s est %d\n", u, string, uu);
    printf("Le nombre de %c dans la chaine %s est %d\n", v, string, vv);
    printf("Le nombre de %c dans la chaine %s est %d\n", w, string, ww);
    printf("Le nombre de %c dans la chaine %s est %d\n", x, string, xx);
    printf("Le nombre de %c dans la chaine %s est %d\n", y, string, yy);
    printf("Le nombre de %c dans la chaine %s est %d\n", z, string, zz);
    printf("Le nombre d'éspace dans la chaine %s est %d\n", string, spacespace);
}
#include <stdio.h>
#include <stdlib.h>

struct a {
    int x;
    int y;
    struct a *b;
};

struct c {
    int x;
    struct c *b;
};

struct d {
    int x;
    int y;
    struct e *b;
};

struct e {
    int x;
    struct d *b;
};

void printAll(struct d *f) {
    struct d *g = f;
    struct d *h = NULL;
    struct d *i = NULL;
    while (g != NULL) {
        i = g->b;
        g->b = h;
        h = g;
        g = i;
    }
    f = h;
    g = f;
    while (g != NULL) {
        if (g->y != -1) {
            printf("%d %d\n", g->x, g->y);
        } else {
            printf("%d\n", g->x);
        }
        g = g->b;
    }
}

void createFinalList(struct d **f, struct a *j, struct c *k) {
    struct a *l = j;
    struct c *m = k;
    while (l != NULL || m != NULL) {
        if (l != NULL) {
            struct d *n = (struct d *)malloc(sizeof(struct d));
            n->x = l->x;
            n->y = l->y;
            n->b = *f;
            *f = n;
            l = l->b;
        }
        if (m != NULL) {
            struct d *n = (struct d *)malloc(sizeof(struct d));
            n->x = m->x;
            n->y = -1; 
            n->b = *f;
            *f = n;
            m = m->b;
        }
    }
}

void printGS(struct c *k) {
    struct c *l = k;
    while (l != NULL) {
        printf("%d\n", l->x);
        l = l->b;
    }
    printf("\n");
}

void printFB(struct a *j) {
    struct a *l = j;
    while (l != NULL) {
        printf("%d %d\n", l->x, l->y);
        l = l->b;
    }
    printf("\n");
}

void insertFB(struct a **j, int x, int y) {
    struct a *n = (struct a *)malloc(sizeof(struct a));
    n->x = x;
    n->y = y;
    n->b = NULL;
    if (*j == NULL || (*j)->x >= n->x) {
        n->b = *j;
        *j = n;
    } else {
        struct a *l = *j;
        while (l->b != NULL && l->b->x < n->x) {
            l = l->b;
        }
        n->b = l->b;
        l->b = n;
    }
}

void insertGS(struct c **k, int x) {
    struct c *n = (struct c *)malloc(sizeof(struct c));
    n->x = x;
    n->b = NULL;
    if (*k == NULL || (*k)->x <= n->x) {
        n->b = *k;
        *k = n;
    } else {
        struct c *l = *k;
        while (l->b != NULL && l->b->x > n->x) {
            l = l->b;
        }
        n->b = l->b;
        l->b = n;
    }
}
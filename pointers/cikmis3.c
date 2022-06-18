#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    double p;
    double *s = malloc(n * sizeof(double));
	for(int i = 0; i < n;i++){
        p = (tr[i].a + tr[i].b + tr[i].c) / 2;
        s[i] = sqrt(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c));
    }
    int change = 1;
    triangle tmp;
    while(change != 0){
        change = 0;
        for(int i = 0; i < n - 1; i++){
            if(s[i] > s[i + 1]){
                tmp = tr[i];
                tr[i] = tr[i + 1];
                tr[i + 1] = tmp;
                change++;
            }
        }
    }
    free(s);
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
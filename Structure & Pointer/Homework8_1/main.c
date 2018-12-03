#include <stdio.h>
#include <math.h>

struct point{
	int x,y,z;
};

double getdist(struct point);
double getprod(struct point *, struct point *);

int main(void){
	struct point pts[2] = {{1,-1,1},{1,1,1}};

	printf("Distance to pt[0] is %.2f\n", getdist(pts[0]));
	printf("Distance to pt[1] is %.2f\n", getdist(pts[1]));
	printf("Scalar product of pt[0] and pt[1] is %.2f", getprod(&pts[0], &pts[1]));

	return 0;
}

double getdist(struct point a){
	return sqrt(pow(a.x,2) + pow(a.y,2)+pow(a.z,2));
}

double getprod(struct point *a, struct point *b){
	return ((a->x * b->x) + (a->y * b->y)+(a->z*b->z));
}

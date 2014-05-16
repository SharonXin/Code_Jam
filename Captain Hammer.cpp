#include <stdio.h>
#include <math.h>
double PI = 3.141592653; 
int main() {
	freopen("B-small-practice.in", "r", stdin);
	freopen("B-output.txt", "w", stdout);
	int i,t;
	double speed, dis, result;
	
	scanf("%d",&t);
	i=0;
	while (t--) {
		scanf("%lf%lf", &speed, &dis);
		result = (double)9.8 * dis / speed / speed;
		if (fabs(result-1.000000)<1.0e-6) {
			result=1.0;
		}
		//printf("%lf\n", result);
        result = asin(result) * 90.0 / PI;
        printf("Case #%d: %.7lf\n", ++i, result);
	}
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,m;
    float p,q;
    
    scanf("%d%d",&m,&n);
    scanf("%f %f",&p,&q);
    
    printf("%d %d\n",m+n,m-n);
    printf("%.1f %.1f\n",p+q ,p-q);
    
    return 0;
}
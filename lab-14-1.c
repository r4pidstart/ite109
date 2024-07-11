#include<stdio.h>

int main(void)
{
    int n;
    printf("input n:");
    scanf("%d", &n);

    if(!(1<=n && n<=1000))
    {
	    printf("n must be in 1<=n<=1000");
	    return 0;
    }

    int ans=0;
    for(int a=1; a<=500; a++)
	    for(int b=1; b<=500; b++)
	    {
		    if(a<b)
			    continue;
		    if(a*a>b*b*n)
			    ans++;
	    }
    printf("%d\n", ans);
}


#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(x<50)
	    printf("Z\n");
	    else if(y<50&&x>=50)
	    printf("F\n");
	    else
	    {
	        printf("A\n");
	    }
	}

}

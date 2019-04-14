#include<stdio.h>

int g;
int main(){
    void christmas(int,int);
int N,i,l=0,F=1;


printf("Enter how many days christmas tree old = ");
scanf("%d",&N);
if(N<=1)
		printf("\nThe tree is not born\n");
	else if(N>20)
		printf("\nThe Tree is no More\n");
	else{
christmas(F,N+1);
F++;
for(i=2;i<N;i++,l++)
		{	christmas(F,N-l);
		}
 for(int i=0;i<=g;i++)  // This code will print the stand
    printf(" ");
    printf("*\n");
		 for(int i=0;i<=g;i++)
    printf(" ");
    printf("*\n");
	}
return 0;
}
void christmas(int F,int N)
{
    int row,blank,leaves;
    static int space=0;
    for(row=F;row<=N;row++)
{
    for(blank=1;blank<=N+space-row;blank++)
    {
      printf(" ");
    }

    for(leaves=1;leaves<=2*row-1;leaves++)
    {
      printf("*");
    }

    printf("\n");
}
  space++;
  g=space;
}

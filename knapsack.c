#include<stdio.h>
 
int max(int a, int b) 
{ 
	return (a > b)? a : b; 
}
 
void knapSack(int m, int wt[], int val[], int n)
{
   	int i, w, sold=0;
   	int sack[n+1][m+1];

   	for (i = 0; i <= n; i++) {
       		for (w = 0; w <= m; w++) {
	           	if (i==0 || w==0) {
               			sack[i][w] = 0;
	   		} else if (wt[i-1] <= w) {
                		sack[i][w] = max(val[i-1] + sack[i-1][w-wt[i-1]],  sack[i-1][w]);
	   		} else {
				sack[i][w] = sack[i-1][w];
	   		}
       		}
   	}
	
	int j = m;
	i = n;

	while (i > 0){
		if (sack[i][j] != sack[i-1][j]){
			j = j - wt[i-1];
		}
		i--;
	}
	
   	if(j != 0)
		printf("Got caught!");
   	else
        	printf("%d", sack[n][m]);
}
 
int main()
{
    	int m; 
	int n;

	scanf("%d %d", &n, &m);
	int val[n];
	int wt[n];
	int i;

	for(i=0; i<n; i++)
		scanf("%d %d", &val[i], &wt[i]);

	knapSack(m, wt, val, n);
}

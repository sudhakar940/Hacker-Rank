# include <stdio.h>
# include <stdlib.h>

int main()
{
	
	int N, K, Q;
	scanf("%d %d %d", &N, &K, &Q);
	K= K%N;
	int temp[K], array[N], pos[Q];

	for(int i=0; i<N; i++)
		scanf("%d",&array[i]);
	
	for(int i=N-K, j=0; i<N; i++, j++)
		temp[j] = array[i];

	for(int i=N-K; i>0; i--)
		array[i+K-1] = array[i-1];
	
	for(int i=0; i<K; i++)
		array[i] = temp[i];

	for(int i=0; i<Q; i++)
		scanf("%d",&pos[i]);

	for(int i=0; i<Q; i++)
		printf("%d\n", array[ pos[i] ]);
}

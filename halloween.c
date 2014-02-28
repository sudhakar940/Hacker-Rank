# include <stdio.h>
# include <stdlib.h>

int main()
{
	int T;
	scanf("%d",&T);
	int64_t result[T];

	for(int i=0; i<T; i++){
		int64_t K;
		scanf("%ld", &K);
		if(K%2 ==1)
			result[i] = ((K/2) * ((K/2)+1));
		else
			result[i] = ((K/2) * (K/2));
	}

	for(int i=0; i<T; i++){
		printf("%ld\n", result[i]);
	}

	return 0;
}

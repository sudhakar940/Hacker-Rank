# include <stdio.h>
# include <stdlib.h>
int main()
{
	int N, M;
	scanf("%d %d", &N, &M);

	int64_t average =0;
	for (int i=0; i<M; i++){
		int64_t a, b, candy;
		scanf("%ld %ld %ld", &a, &b, &candy);
		int result = (b-a) +1;
		average = average + (result * candy) ;
	}

	printf("%ld", average/N);	
	return 0;
}

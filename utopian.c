# include <stdio.h>

int main()
{
	int T;
	scanf("%d", &T);
	int result[T];

	for(int i=0; i<T; i++){
		int N = 0, tree=1;
		scanf("%d", &N);
		for(int j=1; j<=N; j++) {
			if(j%2 == 1)
				tree = tree * 2;
			else if(j%2 == 0)
				tree = tree + 1;
		}
		result[i] = tree;
	}

	for(int i=0; i<T; i++){
		printf("%d\n", result[i]);
	}
	return 0;
}

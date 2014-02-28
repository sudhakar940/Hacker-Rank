# include<stdio.h>

int calculate(int N, int C, int M)
{
	int totalchocolate=0, wrappers_in_hand=0;
	totalchocolate = N/C;
	wrappers_in_hand = totalchocolate;

	while(wrappers_in_hand >= M){
		totalchocolate = totalchocolate + (wrappers_in_hand/M);
		wrappers_in_hand = (wrappers_in_hand/M) + (wrappers_in_hand%M);
	}
	return totalchocolate;
}

int main(){

	int testcase;
	scanf("%d", &testcase);
	int N, C, M;

	int answer[testcase];

	for(int i=0; i<testcase;i++) {
		scanf("%d %d %d", &N, &C, &M);
		answer[i] = calculate(N, C, M);
	}

	for(int i=0; i < testcase; i++) {
		printf("%d\n", answer[i]);
	}
	
	return 0;
}

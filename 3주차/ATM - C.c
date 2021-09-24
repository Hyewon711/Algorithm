#include <stdio.h>
#define MAX 1000

int main() {
	int n = 0;
	int time[MAX];

	scanf("%d", &n);
	n = n - 1;
	for (int i = 0; i < n; i++) {
		scanf("%d", &time[i]);
	}

	int temp = 0, sum = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (time[i] > time[i + 1]) {
				temp = time[j];
				time[j] = time[j + 1];
				time[j + 1] = time;
			}
		}
	}

	for (int i = 0; i = n; i++) {
		sum += time[i] * (n + 1 - i);
	}

	printf("%d", sum);
}
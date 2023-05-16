#include <stdio.h>

#define MAX_SIZE 10

int loc = 0;
int arr[MAX_SIZE] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};

void print_status() {
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
}

int main(int argc, char **argv) {
	printf("-1: 왼쪽\n1: 오른쪽\n");
	for (;;) {
		int pos;
		printf("mov ~$ ");
		scanf("%d", &pos);

		switch (pos){
			case -1:
				if ((loc - 1) < 0) {
					printf("배열의 끝쪽 입니다\n");
					break;
				}

				arr[loc + pos] = 1;
				arr[loc] = 0;
				loc--;
				break;
			case 1:
				if ((loc + 1) >= MAX_SIZE) {
					printf("배열의 끝쪽 입니다\n");
					break;
				}

				arr[loc + pos] = 1;
				arr[loc] = 0;
				loc++;
				break;
			default:
				return 0;
		}

		print_status();
	}
}

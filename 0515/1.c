#include <stdio.h>

#define MAX_SIZE 10

int arr[MAX_SIZE] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};

void print_current() {
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
}

int main(int argc, char **argv) {
	int loc, pos = 0;
	print_current();

	printf("원하는 위치를 입력해 주세요: ");
	scanf("%d", &pos);
	for (int i = 0; i < MAX_SIZE; i++) {
		if (i == pos - 1) {
			arr[loc] = 0;
			arr[i] = 1;
			loc = i;
		}
	}

	print_current();
	return 0;
}

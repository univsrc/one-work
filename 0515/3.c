#include <stdio.h>

#define MAX_SIZE 5

int loc_x = 2, loc_y = 2;

int arr[MAX_SIZE][MAX_SIZE] = {
	{0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0},
	{0, 0, 1, 0, 0},
	{0, 0 ,0, 0, 0},
	{0, 0, 0, 0, 0}
};

void print_status() {
	for (int i = 0; i < MAX_SIZE; i++) {
		for (int j = 0; j < MAX_SIZE; j++) {
			printf("%d ", arr[i][j]);
		}

		printf("\n");
	}
}

int main(int argc, char **argv) {
	printf("LEFT: -1\n");
	printf("RIGHT: 1\n");
	printf("UP: 2\n");
	printf("DOWN: -2\n");
	printf("EXIT: 0\n");

	for (;;) {
		int pos;
		printf("pos ~$ ");
		scanf("%d", &pos);

		switch (pos) {
			case -1:
				if ((loc_x - 1) < 0) {
					printf("배열의 끝쪽 입니다\n");
					break;
				}

				arr[loc_y][loc_x - 1] = 1;
				arr[loc_y][loc_x] = 0;
				loc_x--;
				break;
			case 1:
				if ((loc_x + 1) >= MAX_SIZE) {
					printf("배열의 끝쪽 입니다\n");
					break;
				}

				arr[loc_y][loc_x + 1] = 1;
				arr[loc_y][loc_x] = 0;
				loc_x++;
				break;
			case -2:
				if ((loc_y - 1) < 0) {
					printf("배열의 끝쪽 입니다\n");
					break;
				}

				arr[loc_y - 1][loc_x] = 1;
				arr[loc_y][loc_x] = 0;
				loc_y--;
				break;
			case 2:
				if ((loc_y + 1) >= MAX_SIZE) {
					printf("배열의 끝쪽 입니다\n");
					break;
				}

				arr[loc_y + 1][loc_x] = 1;
				arr[loc_y][loc_x] = 0;
				loc_y++;
				break;
			case 0:
				return 0;
			default:
				continue;
		}

		print_status();
	}

	return 0;
}

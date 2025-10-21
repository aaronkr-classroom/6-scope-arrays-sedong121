#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <time.h> // time()
int rand_num;
void gamelnit(void) {
	srand(time(0)); // 1970년 1월 1일 0:00시부터 현재까지 ms 값
	rand_num = rand() % 10 + 1; //(0~9) + 1 = [1,10]
}
void gamePlay(void) {
	//지역 변수
	int guess = 0, count = 0, allowed = 5;//5개만 추측가능
	printf("Guess the number (1-10):");
	do {
		scanf_s("%d", &guess);
		count++;

		if (guess == rand_num) {
			printf("정답! Good! You win!");
			break;
		}
		else if (guess < rand_num) {
			printf("Too low! Try higher!");
		}
		else if (guess > rand_num) {
			printf("Too high! Try lower!");
		}
	} while (count != allowed);

	if (count > allowed) {
		printf("Too many guesses! You lose!");
	}
}

int main(void)
{
	gamelnit();
	gamePlay();
	return 0;

}
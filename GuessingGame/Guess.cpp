#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <conio.h>
#include <stdbool.h>

using namespace std;

int main(void) {
	srand(time(NULL));

	int r = rand() % 100 + 1;
	bool correct = false;
	int guess;
	int counter = 0;

	while (!correct)
	{
		printf("Guess my number!\n");
		scanf_s("%d", &guess);
		getchar();

		if (guess < r) {
			printf("Your guess is too low. Guess again.\n\n");
		}
		else if (guess > r) {
			printf("Your guess is too high. Guess again.\n");
		}
		else /* if (guess == r) */ {
			printf("You guessed correctly in %d tries! Congratulations!\n\n", counter);
			correct = true;
			cout << "Press any key to continue!";
			_getch();
		}

		counter++;
	} /* while(!correct) */

	return 0;
}
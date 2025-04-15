#include <stdio.h>
#include <stdlib.h>

int main()
{
	int secretNum = 5;
	int guess;
	int guessCount = 0;
	int guessLim = 3;
	bool outOfGuesses = 0;

	while(guess != secretNum && outOfGuesses == 0)
	{
		if(guessCount < guessLim)
		{
			printf("Enter a number!\n");
			scanf("%d", &guess);
			guessCount++;
		}
		else
		{
			outOfGuesses = 1; //bool
		}
	}
	if(outOfGuesses == 1)
	{
		printf("Out of Guesses!");
	}
	else
	{
		printf("You guessed correctly!");
	}
}
#include<stdio.h>
int main()
{
	int X, P, N, RESULT;
	int invertponwards(int, int, int);
	printf("Eter integer, start position, invert length \n");
	scanf_s("%d %d %d", &X, &P, &N);
	printf("Coverted binary value of %d is\t", X);
	RESULT = invertponwards(X, P, N);
	printf("\ninverted integer in decimal form is \t%d", RESULT);
	getch();
	return 0;
}

int invertponwards(int X, int P, int N)
{
	int I, Y, LIMIT, LEN, BIN[15];
	LEN = 0;
	while (X > 0)
	{
		BIN[LEN] = X % 2;
		X = X / 2;
		LEN++;
	};

	for (I = LEN - 1; I > -1; I--)
	{
		printf("%d ", BIN[I]);
	}
	printf("\n");
	LIMIT = P + N;
	if (LIMIT < LEN)
	{
		for (I = P - 1; I < P + N - 1; I++)
		{
			if (BIN[I] == 0)
				BIN[I] = 1;
			else
				BIN[I] = 0;
		}
	}
	else
	{
		printf("YOU HAVE ENTERED LARGE VALUE FOR P AND N");
	}

	printf("Inverted integer in binary form is \t");
	for (I = LEN - 1; I > -1; I--)
	{
		printf("%d ", BIN[I]);
	}
	Y = 0;
	for (I = LEN - 1; I >= 0; I--)
	{
		Y = Y * 2 + BIN[I];
	}
	return Y;
}
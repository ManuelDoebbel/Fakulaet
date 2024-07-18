#include<stdio.h>

int zahl, i;
unsigned long long fak = 1;

int UserIONumber()
{
	printf("Bitte Zahl zur Berechnung der Fakultaet eingeben: ");
	return scanf_s("%d", &zahl);
}

unsigned long long Factorial(int zahl)
{
	for (i = 1; i <= zahl; ++i) {
		fak *= i;
	}

	return fak;
}

void PrintFak(int zahl, unsigned long long fak) {
	printf("Die Fakultaet von %d ist %llu\n", zahl, fak);
}
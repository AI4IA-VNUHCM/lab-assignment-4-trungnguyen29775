/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n) {
	int arr[1000];
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 1;
	int i = 4;
	n += 1;
	while (i <= n)
	{
		arr[i] = 1;
		int arrclone[100];
		for (int j = 1; j <= n; j++)
			arrclone[j] = arr[j];
		for (int j = 2; j < i; j++)
			arr[j] = arrclone[j] + arrclone[j - 1];
		i += 1;
	}
	if (n-1 == 0 || n-1 == 1)
	{
		if (n-1 == 0)
			printf("1");
		else
			printf("1 1");
	}
	else {
		for (int i = 1; i <= n; i++)
			printf("%d ", arr[i]);
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}

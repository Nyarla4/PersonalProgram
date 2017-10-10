#include<stdio.h>
#define M 5
#define m 0
int main()
{
	int S, a, up, down, left, right, x, y = 0;
	char A, B, C, D, E = 0;
	do
	{
		printf("현 위치 : (%d,%d)\n", x, y);
		scanf("%c", &A);
		switch (A) {
		case 'w': y += 1; break;
		case 's': y -= 1; break;
		case 'a': x -= 1; break;
		case 'd': x += 1; break;

		default: printf("종료\n"); S = 1; break;
		}
		if (x > M)
		{
			x = M;
		}
		else if (x < m) {
			x = m;
		}
		if (y > M) {
			y = M;
		}
		else if (y < m) {
			y = m;
		}
		for (int i = m; i <= M; i++)
		{
			for (int j = m; j <= M; j++)
			{
				if (i == y && j == x)
				{
					printf("%c", 178);
				}
				else
				{
					printf("%c", 177);
				}
			}
			printf("\n");
		}
	} while (S = 0);
	return 0;
}
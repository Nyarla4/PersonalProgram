#include<stdio.h>
#define M 5
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	char m = 0;
	int plane[M][M] = {};
	do
	{
		scanf("%c", &m);
		/*if (m != 'w')
		{
		if (m != 'a')
		{
		if (m != 's')
		{
		if (m != 'd')
		{
		break;
		}
		}
		}
		}*/
		switch (m)
		{
		case 'w':l -= 1; break;
		case 'a':k -= 1; break;
		case 's':l += 1; break;
		case 'd':k += 1; break;
		default:printf("현재위치:(%d,%d)\n", k, l);
			break;
		}
	} while (1);
	/*for (i = 0; i<M; i++)
	{
	for (j = 1; j<M; j++)
	{
	printf("---|");
	}
	printf("---\n");
	for (j = 0; j<M - 1; j++)
	{
	printf(" %d |", plane[k][l]);
	}
	printf(" %d\n", plane[M - 1][l]);
	}
	for (j = 1; j<M; j++)
	{
	printf("---|");
	}
	printf("---\n");*/
	return 0;
}
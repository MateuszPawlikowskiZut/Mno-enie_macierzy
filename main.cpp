#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int m, n, k;
	int i, j, l, f;
	
	printf("Podaj m: "); scanf("%d", &m);
	printf("Podaj n: "); scanf("%d", &n);
	printf("Podaj k: "); scanf("%d", &k);

	int A[100][100];
	int B[100][100];
	int C[100][100];
	
	//Wstawianie danych do A
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("Podaj A[%d][%d] = ", i, j);
			
			scanf("%d", &A[i][j]);
		}
	}
	
	//Wstawianie danych do B
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < k; j++)
		{
			printf("Podaj B[%d][%d] = ", i, j);
			
			scanf("%d", &B[i][j]);
		}
	}
	
	//Mno¿enie
	
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < k; j++)
		{
			for(l = 0; l < n; l++)
			{
				
				C[i][j] += (A[i][l] * B[l][j]);
			}
		}
	}
	
	
	//Wyœwietl C
	for(i = 0; i < m; i++)
	{
		for (j = 0; j < k; j++)
		{
			printf("%d, ", C[i][j]);
			
			if(j + 1 == k)
				printf("\n");
		}
	}
	
	return 0;
}

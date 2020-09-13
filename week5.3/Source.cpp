#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char x[20];
	char* px;
	scanf_s("%s", &x,19);
	px = x;
	for (int i = 0; i <= strlen(x);i++)
	{
		if (px[i] >= 'A' && px[i] <= 'Z')
		{
			printf("%c", px[i]);
		}
	}
	return 0;
}
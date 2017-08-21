#include<stdio.h>
#include<conio.h>
#include<string.h>

TwoComPle(char a[]);
char N[100];
char N1[100];
char N2[100];
int n1, n2;
int main() {
	printf("Enter N =");
	scanf_s("%s", N, 100);
	TwoComPle(N);
	printf("+(N) = (%d,%s)\n", n1, N1);
	printf("-(N) = (%d,%s)\n", n2, N2);
	return 0;
	_getch();
}
TwoComPle(char a[]) {
	int len;
	int x;
	int len2;
	x = 0;
	n1 = 0;
	n2 = 1;
	//len = strlen(N) - 1;

	if (N[0] == '-') {
		while (N[x] != '\0') {

			switch (N[x + 1])
			{
			case '0':N2[x] = '0';
				N1[x] = '1'; break;
			case '1':N2[x] = '1';
				N1[x] = '0'; break;
			}
			x++;
		}
		len2 = strlen(N2)-1;
		x = len2;
		while (N2[x]=='0'){
			N1[x] = '0';
			x--;
		}
		if (N2[x] == '1') {
			N1[x] = '1';
		}
	}
	else
	{

		while (N[x] != '\0')
		{
			switch (N[x])
			{
			case '0':N2[x] = '1';
				N1[x] = '0'; break;
			case '1':N2[x] = '0';
				N1[x] = '1'; break;
			}
			x++;


		}
		len = strlen(N1) - 1;
		x = len;
		while (N1[x] == '0') {
			N2[x] = '0';
			x--;
		}
		if (N1[x] == '1') {
			N2[x] = '1';
		}


	}

}

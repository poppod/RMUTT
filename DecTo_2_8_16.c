#include <stdio.h>
#include <conio.h>
#include <math.h>
#include<string.h>
//main
float d ;
//Hex
char b[15];
char ReHex[100];
char Hex[100];
char H ;

//char *K=ReHex;
int k1, o1, e1, f1, v1, z1,k2,p;
float q1, w1;
//Oct
int c[5];
int  k,o,e,f,v,z;
float q, w;
//Bin
int a[5];
int s, r,  u,i, j,l;
float y,g;

DecToBin(float n);
DecToOct(float n);
DecToHex(float n);
int main() {
	printf_s(" ENTER DECIMAL : ");
	scanf_s("%f", &d);
	printf("Dec    : %f \n", d);
	DecToBin(d);
	printf("Bin    : %d.%d%d%d%d%d\n", r, a[0], a[1], a[2],a[3],a[4]);
	DecToOct(d);
	printf("Oct    : %d.%d%d%d%d%d\n", v, c[0], c[1], c[2], c[3], c[4]);
	DecToHex(d);
    printf("Hex    : %s.%s\n", Hex, b);
	
	
	return 0;
	_getch(); 

}
 DecToBin(float n) {
	 l = 0;
	 s = 1; 
	 i = (int)n;
	 g = n - i;

	 while (i >0) {
		 j = (i % 2)*s ;
		r = j+r; 
		s = s * 10;
		i=i/2;
	 }
	 while ( l <= 4 ) {
		y= g * 2 ;
		u = (int)y;
		a[l] = (int)y;
		g = y-u;
		l++;
	
	 }
	 
	 



}

 DecToOct(float n)
 {
	 k = 0;
	 o = 1;
	 e = (int)n;
	 q = n - e;

	 while (e >0) {
		 f = (e % 8)*o;
		 v = f + v;
		 o = o * 10;
		 e = e / 8;
	 }
	 while (k <= 4) {
		 w = q * 8;
		 z = (int)w;
		c[k] = (int)w;
		 q = w - z;
		 k++;

	 }

 }

 DecToHex(float n)
 {
	 int rp;
	 
	 p = 0;
	 k2 = 0;
	 k1 = 0;
	 o1 = 1;
	 e1 = (int)n;
	 q1 = n - e1;

	 while (e1 >0) {
		 f1 = (e1 % 16);
		 Hex[k2] = f1;
		switch (f1)
		 {
case 1: Hex[k2] = '1'; break;
case 2: Hex[k2] = '2'; break;
case 3: Hex[k2] = '3'; break;
case 4: Hex[k2] = '4'; break;
case 5: Hex[k2] = '5'; break;
case 6: Hex[k2] = '6'; break;
case 7: Hex[k2] = '7'; break; 
case 8: Hex[k2] = '8'; break;
case 9: Hex[k2] = '9'; break;
		case 10: Hex[k2] = 'A'; break;
		 case 11: Hex[k2] = 'B'; break;
		 case 12: Hex[k2] = 'C'; break;
		 case 13: Hex[k2] = 'D'; break;
		 case 14: Hex[k2] = 'E'; break;
		 case 15: Hex[k2] = 'F'; break;
}
       
		k2++;
		 e1 = e1 / 16;
	 }
	 rp = strlen(Hex)-1;
	 while (p<rp)
	 {
		 H = Hex[p];
		 Hex[p] = Hex[rp];
		 Hex[rp] = H;
		 p++;
		 rp--;

	 }
	 
	 
	 while (k1 <= 4) {
		 w1 = q1 * 16;
		 z1 = (int)w1;
		 b[k1] = (int)w1;
		 switch (z1)
		 {
		 case 1: b[k1] = '1'; break;
		 case 2: b[k1] = '2'; break;
		 case 3: b[k1] = '3'; break;
		 case 4: b[k1] = '4'; break;
		 case 5: b[k1] = '5'; break;
		 case 6: b[k1] = '6'; break;
		 case 7: b[k1] = '7'; break;
		 case 8: b[k1] = '8'; break;
		 case 9: b[k1] = '9'; break;
		 case 10: b[k1] = 'A'; break;
		 case 11: b[k1] = 'B'; break;
		 case 12: b[k1] = 'C'; break;
		 case 13: b[k1] = 'D'; break;
		 case 14: b[k1] = 'E'; break;
		 case 15: b[k1] = 'F'; break;
		 }
		 q1 = w1 - z1;
		 k1++;

	 }
	 
	 return 0;

 }



#include <stdio.h>
#include <conio.h>
#include <math.h>
#include<string.h>
#include <stdlib.h>

//main
char D[100];
float d;
int d1, d2;
//Hex
char b[15];
char ReHex[100];
char Hex[100];
char H,M;

int k1, o1,o2, e1,e2, f1, f2,v1, z1,z2, k2, p;
float q1, w1;
//Oct
int c[5];
int  k, o, e, f, v, z,V,F;
float q, w;
//Bin
int a[5];
char Bin[100];
int  r, u, i, j, l,s1,l1,sumb,s;
float y, g;
double U,U1, Y, O,O1, Q, E1,E2,Q2, Q1;

DecToBin(float n);
DecToOct(float n);
DecToHex(float n);
BinToDec(float n);
OctToDec(float n);
HexToDec(float n);
BinToOct(float n);
BinToHex(float n);
OctToBin(float n);
OctToHex(float n);
HexToBin(float n);
HexToOct(float n);
CheckOcT(float n);
CheckBin(float n);
CheckHex(float n);
int main() {
	int R;
	printf("From base(2,8,16): \n");
	scanf_s("%d", &d1);
	printf("To Base(2,8,16): \n");
	scanf_s("%d", &d2);
	if (d1 == 2) {
		switch (d2)
		{
		case 8:printf_s(" Enter Valuse : \n");
			scanf_s("%s",Bin,100);
		if(CheckBin(d)==1){
				printf("\nFunction Eror\n");
				return 0;
		}
		else{
			BinToOct(d); printf("Answer is(%d.%d%d%d%d%d)%d ", v, c[0], c[1], c[2], c[3], c[4], d2); break;
		}	
		case 16:printf_s(" Enter Valuse : \n");
			scanf_s("%s",Bin,100);
			if(CheckBin(d)==1){
				printf("\nFunction Eror\n");
				return 0;
		}
			
		else{
			BinToHex(d); printf("Answer is(%s.%s)%d ", Hex,b,d2); break;
		}	
		}
	}
	else if (d1 == 8) {
		switch (d2)
		{
		case 2:printf_s(" Enter Valuse (Max int value) : \n");
			scanf_s("%f", &d);
			R=CheckOcT(d);
			if( R==1){
				printf("\nFunction Eror\n");
				return 0;
			}
		
		else{OctToBin(d); printf("Answer is(%d.%d%d%d%d%d)%d ", sumb, a[0], a[1], a[2], a[3], a[4], d2); break;
		}	
			
		case 16:printf_s(" Enter Valuse : \n");
			scanf_s("%f", &d);
				R=CheckOcT(d);
			if( R==1){
				printf("\nFunction Eror\n");
				return 0;
			}
		else{OctToHex(d); printf("Answer is(%s.%s)%d", Hex, b, d2); break;
		}	
		}
		}
	else if (d1==16){
		switch (d2)
		{case 2:
			printf(" Enter Valuse (Max int value): \n");
			scanf_s("%s",ReHex,100);
		 if (CheckHex(d)==1){
		 		printf("\nFunction Eror\n");
				return 0;
		 }
		
		    else {HexToBin(d); printf("Answer is(%d.%d%d%d%d%d)%d ", sumb, a[0], a[1], a[2], a[3], a[4], d2);break;
			}
		
		
		
		case 8:printf_s(" Enter Valuse : \n");
			scanf_s("%s", ReHex, 100);
			if (CheckHex(d)==1){
		 		printf("\nFunction Eror\n");
				return 0;
		 }
			else {
				HexToOct(d);
			printf("Answer is(%d.%d%d%d%d%d)%d ", v, c[0], c[1], c[2], c[3], c[4], d2); break;
			}

			
		}

	}
	
	

	return 0;
	
}

CheckOcT(float n){
	int sumN,R,Nui;
	int sumI;
	double Nu;
	sumN = (int)n;
	sumI=n-sumN;
	R=0;
	while (sumN>0){
		Nu=sumN%10;
		if (Nu>7){
			R=1;
			sumN=0;
		}
		sumN=sumN/10;
	}
	while (sumI>0){
		Nui = sumI %10;
		if (Nui>7){
			R=1;
			sumI=0;
		}
		sumI=sumI/10;
	}
	return R;
}

CheckBin(float n){
	int R=0;
	int mom=0,UI=0;
	while (Bin[mom]!='\0'){
		switch ( Bin[mom]){
			case '0':  R=R; break;
			case '1':  R=R; break;
			case '.':  R=R; break;
			default : R=1;
					}
		mom++;
	}
	
	return R;
}

CheckHex(float n){
	int pop=0,R=0;
	while (ReHex[pop] != '\0')
	{
		switch (ReHex[pop])
		{
		case '1':  R=R; break;
		case '2':  R=R;break;
		case '3':  R=R;break;
		case '4':  R=R;break;
		case '5':  R=R;break;
		case '6':  R=R;break;
		case '7':  R=R;break;
		case '8': R=R; break;
		case '9':  R=R;break;
		case 'A': R=R; break;
		case 'B': R=R; break;
		case 'C':  R=R;break;
		case 'D': R=R; break;
		case 'E': R=R; break;
		case 'F': R=R; break;
		case '.': R=R; break;
		default : R=1;
		}
		pop ++;
	}
	return R;
}

DecToBin(float n) {
	l = 0;
	sumb=0;
	s = 1;
	i = (int)n;
	g = n - i;

	while (i >0) {
	
		j = (i % 2)*s;
		sumb = j + sumb;
		s = s * 10;
		
		i = i / 2;
	}
	while (l <= 4) {
		y = g * 2;
		u = (int)y;
		a[l] = (int)y;
		g = y - u;
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
	rp = strlen(Hex) - 1;
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

BinToDec(float n)
{   r = 0;
	Y = 0;
	s1 = 0;
	l = 0;
	E1 = 0;
	i=0;
	g=0;
	int mom=0,UI=0;
	while (Bin[mom]!='\0'){
		switch ( Bin[mom]){
			case '0':  Bin[mom]=0; break;
			case '1':  Bin[mom]=1; break;
			case  '.' :  i=mom; UI=mom; break;
			
					}
				//	printf("\n Bin= %d\n",Bin[mom]);
		mom++;
	}
	UI=UI+1;
    l1 = 1;
	if (i==0){
	while (mom>=0)
	{
		mom--;	
		r = Bin[mom];
		E1 = (r*(pow(2, l))) + E1;
	
//	printf("\n BinnZ= %d\n",Bin[mom]);
		l++;
		}	}
	else {mom=i-1;
		while (mom>=0)
	{
			
		r = Bin[mom];
		E1 = (r*(pow(2, l))) + E1;
	
//	printf("\n Binn= %d\n",Bin[mom]);
		l++;
		mom--;
		}
		
	//	printf("\n E1=%f\n",E1);
	  // UI=UI+1;
      // l1 = 1;
       
	while( Bin[UI] != '0' )
	{
	//	printf ("\n UI=%d\n",UI);
	    s=Bin[UI];
		U = pow(2, l1);
		Y = (s*(1/U)) + Y;
		//printf("\n BinnN= %d\n",Bin[UI]);
		UI++;
		l1++;
		
	}
	}
	
	E1 = Y + E1;
	printf("\n Dec =%f",E1);
	//return 0;

	
}

OctToDec(float n)
{
	Q = 0;
	V = 1;
	F = 0;
	k = 0;
	O = 0;
	e = (int)n;
	w = n - e;
	while (e > 0)
	{
		v = e % 10;
		O = (v*pow(8, k)) + O;
		e = e / 10;
		k++;
	}
	while (w > 0) {
		w = w * 10;
		z = (int)w;
		w = w - z;
		O1 = pow(8, V);
		V++;
		Q = (z*(1/O1)) + Q;
		
	}
	Q = Q + O;
//	printf("Q=%f", Q);
	//return q;
	
}

HexToDec(float n)
{
	
	int k2;
	int k3;
	z1 = 0;
	E1 = 0;
	Q1 = 0;
	p = 0;
	f1 = 0;
	f2 = -1;
	k1 = strlen(ReHex) - 1;
	o1 = 0;
	o2 = 0;
	while (ReHex[o1] != '\0')
	{
		switch (ReHex[o1])
		{
		case '1':ReHex[o1] = 1; break;
		case '2': ReHex[o1] = 2; break;
		case '3': ReHex[o1] = 3; break;
		case '4': ReHex[o1] = 4; break;
		case '5': ReHex[o1] = 5; break;
		case '6': ReHex[o1] = 6; break;
		case '7': ReHex[o1] = 7; break;
		case '8': ReHex[o1] = 8; break;
		case '9': ReHex[o1] = 9; break;
		case 'A': ReHex[o1] = 10; break;
		case 'B': ReHex[o1] = 11; break;
		case 'C': ReHex[o1] = 12; break;
		case 'D': ReHex[o1] = 13; break;
		case 'E': ReHex[o1] = 14; break;
		case 'F': ReHex[o1] = 15; break;
		case '.': k2 = o1; break;
		}
		o1++;
	}

	k3 = k1 - k2;
	while (ReHex[k3]>0) {
		z1 = ReHex[k3];
		E2 = pow(16, f1);
		E1 = (E2*z1) + E1;
		f1++;
		k3--;
	}
	if (k2>0) {
		k2 = k2 + 1;
		while (ReHex[k2] != '\0')
		{
			Q2 = pow(16, f2);
			z2 = ReHex[k2];
			Q1 = (Q2*z2) + Q1;
			f2--;
			k2++;
		}

	}
	Q1 = Q1 + E1;


}

BinToOct(float n)
{
	BinToDec(n);
	n = (float)E1;
		DecToOct(n);

}

BinToHex(float n)
{
	BinToDec(n);
	n = (float)E1;
	DecToHex(n);
}

OctToBin(float n)
{
	OctToDec(n);
	n = (float)Q;
	DecToBin(n);
}

OctToHex(float n)
{
	OctToDec(n);
	n = (float)Q;
	DecToHex(n);
}

HexToBin(float n)
{
	HexToDec(n);
	n = (float)Q1;
	printf("Dec=%f\n", Q1);
	DecToBin(n);
}

HexToOct(float n)
{
	HexToDec(n);
	n = (float)Q1;
	printf("Dec=%f\n", Q1);
	DecToOct(n);
}

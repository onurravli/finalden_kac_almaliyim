#include <stdio.h>
#include <locale.h>

void hesap()
{
	int vize, final, i = 0;
	float ort;
	printf("VÝZE NOTU: ");
	scanf("%d", &vize);
	if(vize>100)
	{
		printf("Yuh, düzgün not gir.\n");
		hesap();
	}
	else if(vize<0)
	{
		printf("Pü Allah seni kahretmesin git ders çalýþ. Negatif not mu olur olm?\n");
		hesap();
	}
	else if(vize>=0 && vize <=100)
	{
		if(vize==100)
		{
			printf("Ooo tebrikler valla :D");
		}
	printf("\n");
	for(i=0; i<=100; i++) {
		
		final = i;
		ort = final * (0.6) + vize * (0.4);

		printf("FÝNALDEN %d ALIRSAN, ORTALAMAN %f OLUR. \n", final, ort);
		/*if(ort<=100.000000 && ort >=81.999999) //burasý fuzuli, not sistemi yuvarlanýyor mu belli deðil.
		{
			printf(" (A) (GEÇER) (4)\n");
		}
		else if(ort<=81.000000 && ort >=74.000000)
		{
			printf(" (BA) (GEÇER) (3.5)\n");
		}
		else if(ort<=73 && ort >=65)
		{
			printf(" (BB) (GEÇER) (3)\n");
		}
		else if(ort<=64 && ort >=58)
		{
			printf(" (CB) (GEÇER) (2.5)\n");
		}
		else if(ort<=57 && ort >=50)
		{
			printf(" (CC) (GEÇER) (2)\n");
		}
		else if(ort<=49 && ort >=40)
		{
			printf(" (DC) (KALIR) (1.5)\n");
		}
		else if(ort<=39 && ort >=35)
		{
			printf(" (DD) (KALIR) (1)\n");
		}
		else if(ort<=34 && ort >=25)
		{
			printf(" (FD) (KALIR) (0.5)\n");
		}
		else if(ort<=24 && ort > 0)
		{
			printf(" (FF) (KALIR) (0)\n");
		}
		else if(ort == 0)
		{
			printf(" (F) (KALIR) (0)\n");
		}*/
	}
	printf("\n\tÇIKMAK ÝÇÝN HERHANGÝ BÝR TUÞA BAS.");
	getch();
	}
	else
	{
		printf("Hesaplamýyorum lan. Bu ne biçim giriþ böyle? Hadi bi þans daha verdim.\n");
		hesap();
	}
}

int vizeGir() //kullanýlmýyor bu fonksiyon.
{
	int vize=0;
	scanf("%d", vize);
	return vize;
}

int main() 
{
	
	setlocale(LC_ALL, "Turkish");
	printf("KTUN EEM - 2020 HESAPLAMA EKRANINA HOÞGELDÝNÝZ. :DD\n");
	hesap();
}

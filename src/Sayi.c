#include "Sayi.h"

int* ikiyleCarp(int* intArray, size_t length) { // her ikinci basamagin degerini iki katina cikarttigim metod
	int i; // dongu icin degisken
	for(i = 0; i<length; i++) { // bir satirin uzunlugu kadar donecek dongu
			// sondan baslayarak her ikinci elemanin degerini 2 ile carptim
			if(i%2 == 1) // sondan basa her ikinci elemanin indexi tek sayi oldugu icin
			 	intArray[length-i-1] = intArray[length-i-1] * 2;
	}
	return intArray;
}
void rakamlariTopla(int* intArray, size_t length) { // eger sayi 9'dan buyukse rakamlarini topladigim metod
	int i; // dongu icin degisken
	for(i = 0; i<length; i++) {
		if(intArray[i] > 9) intArray[i] = intArray[i] % 10+1; // 2 ile carptigimiz herhangi biri 2 basamakli ise rakamlarini topladim.
	}
}
int tumBasamaklariTopla(int* intArray) { // elde edilen sayilarin hepsini topladigim metod
	int i; // dongu icin degisken
	int toplam = 0;
	for(i = 0;i<16;i++) // her bir satirda 16 adet rakam oldugu icin 16 kez donecek olan dongu
		toplam += intArray[i]; // dizideki her bir elemani topluyorum
	return toplam;
}
void kartGecerliMi(int toplam) { // toplamin mod 10'unu alip gecerli mi gecersiz mi diye kontrol ettigim metod
	if(toplam % 10 == 0)  
		printf(" - gecerli\n");
	else 
		printf(" - gecersiz\n");
}
char *bosluklariSil(char *str) { // string'teki bosluk karakterlerini sildigim metod
	int i = 0, j = 0;
	while (str[i]) // bos degilse
	{
		if (str[i] != ' ') // bosluk karakterleri haricini ekle
          str[j++] = str[i];
		i++;
	}
	str[j] = '\0'; // bosluk karakteri ile karsilasirsa diziye almayacak
	return str;
}
void satirlariSil(char* str) { // string'teki satir karakterlerini sildigim metod
    int i = 0, j = 0;
	while (str[i]) // dizi bos olmayana kadar
	{
		if (str[i] != '\n') // satir karakteri ile karsilasirsa diziye almayacak
          str[j++] = str[i];
		i++;
	}
	str[j] = '\0';
}
int* charToInt(char* c) { // string dizimdeki her bir elemani int diziye kopyaladigim metod
	int len=strlen(c),i; // len = string'in karakter sayisi
	int *a=(int*)malloc(len*sizeof(int)); // malloc ile yer ayirdim
	for(i=0;i<len;i++) // dizinin uzunlugu kadar donen for
		a[i]=c[i]-48; // char elemani int degere cevirdim.
	return a;
}
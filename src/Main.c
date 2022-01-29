#include "Sayi.h"

int main() {
 	FILE* filePointer; // dosya pointer'i
	int bufferLength = 255; // satir uzunlugu olarak varsayilan bir deger atadim
	int* intArray; // okudugum satiri atacagim inddizi
	size_t length = 1024; // uzunluk
	char* buffer = (char*) malloc(bufferLength*sizeof(char)); // her bir satiri temsil edecek string. malloc ile yer ayirdim.
	filePointer = fopen("doc/Ornek.txt", "r"); // dosyayi actim. ilk parametre dosyanin yolu. ikinci parametre dosyayi okuma modunda acacagimiz belirtmek icin
	while(fgets(buffer, bufferLength, filePointer)) { // dosyayi satir satir okuyacak
	// her bir satirdaki ne kadar bosluk ve yeni satir karakteri varsa sildim.
		bosluklariSil(buffer); 
		satirlariSil(buffer);
		length = strlen(buffer); // length degiskenini dongulerde kullanmak icin tuttum. bir satirdaki rakam sayisini tutuyor
		intArray = charToInt(buffer); // string - int donusumu
		int i = 0; // dongu degiskeni
		for(;i<length;i++) { // satirdaki karakter sayisi kadar donecek ve satirlari tek tek yazdiracak
			if(i %4 == 0 && i != 0) printf(" "); 
			printf("%d", intArray[i]);
		}
		ikiyleCarp(intArray,length); // ilk adim. sondan basa her iki elemani ikiyle carptim
		rakamlariTopla(intArray,length); // ikinci adim. sayi>9 ise rakamlarini topladim
		int toplam = tumBasamaklariTopla(intArray); // 3. adim. bir satirdaki her rakami topladim ve toplam degiskenine attim.
		kartGecerliMi(toplam); // 4. adim. toplam degiskeninin modunu aldim ve gecerli veya gecersiz yazdirdim.
	}
	fclose(filePointer); // dosyayi kapattim
	free(buffer); // cop olusmamasi icin malloc ile olusturdugum bellek yerini iade ettim.
	return 0;
}
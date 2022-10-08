#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	
    int i=100,ozel_sayi = 0,toplam,yuzler,onlar,birler;
	printf("Aranilan sayilar : ");
	//for döngüsüyle programımızda 3 basamak olacağı için 100 ile 999 arasındaki sayıları döndürtmekle başlatıyoruz
	for(i = 100;i <=999;i++)
	{	
		//burda basamak değerlerini tek tek buldurmak için önce sayi değişkenini 100 olarak atıyoruz
		/*daha sonra yüzler basamağı için 100'e böldürüyoruz
		onlar basamağı için sayıdan yuzler basamağını 100 ile çarpıp 10'a böldürdüğümüz değeri çıkarıyoruz
		birler basamağı için de sayıdan yuzler basamağını 100 ile onlar basamağını 10 ile çarpıp 1'e böldürdüğümüz sayıyı çıkarıyoruz
		ve en son formüle göre özel sayı olabilmesi için basamak değerlerini toplam değişkenine dahil ediyoruz
		*/	
		int sayi = i;
		yuzler = (sayi)/100;
		onlar = ((sayi) - (yuzler*100))/10;
		birler = ((sayi) - (yuzler*100) - (onlar*10))/1;	
		toplam = (yuzler * onlar * birler) * (yuzler + onlar + birler);
		//eğer sayı değeri toplama eşit ise özel sayı değişkenini 1 er 1 er 100 den 999 a kadar arttırıyoruz
		if(i == toplam)
		{
			ozel_sayi+=1;
		}
		printf(" %d ,",i);
	}
	//toplam değişkeninde yazdığımız formülde kaç tane sayı uyuyorsa o kadar sayı değerlerini özel sayıda yazdırıyoruz 
	printf("\n \nBu ozellige sahip %d adet uc basamakli sayi vardir",ozel_sayi);
	
	return 0;
}

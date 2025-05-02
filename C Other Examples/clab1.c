/* C LAB1 2023*/

#include<stdio.h>
int main()
{
float sayi1,sayi2,sayi3;
printf("Bir boşluk bırakarak üç sayıyı yan yana giriniz:  ");
scanf("%f%f%f",&sayi1,&sayi2,&sayi3);
if ((sayi1>sayi2) && (sayi2 > sayi3))
printf("%.2f,%.2f,%.2f",sayi1,sayi2,sayi3 );
else if ((sayi1 > sayi3) && (sayi3 > sayi2))
printf("%.2f,%.2f,%.2f\n",sayi1,sayi3,sayi2);
else if ((sayi2 > sayi1) && (sayi1 > sayi3))
printf("%.2f,%.2f,%.2f",sayi2,sayi1,sayi3);
else if ((sayi2 > sayi3) && (sayi3 > sayi1))
printf("%.2f,%.2f,%.2f",sayi2,sayi3,sayi1);
else if ((sayi3 > sayi2) && (sayi2 > sayi1))
printf("%.2f,%.2f,%.2f",sayi3,sayi2,sayi1);
else
printf("%.2f,%.2f;%.2f",sayi3,sayi1,sayi2);

}



/* HARF GİRERSEK HATALI VERİ GİRDİNİZ  DEMENİN VE TEKRAR ALMANIN YOLU
SÜREKLİ VERİ ALMAYA NASIL DEVAM EDEBİLİRİM  */


/* #include<stdio.h>

int main() {
    float sayi1, sayi2, sayi3;
    char devam;

    do {
        printf("Üç sayıyı boşluk bırakarak giriniz: ");
        scanf("%f%f%f", &sayi1, &sayi2, &sayi3);

        // Sıralama işlemleri
        if ((sayi1 > sayi2) && (sayi2 > sayi3)) {
            printf("%.2f, %.2f, %.2f\n", sayi1, sayi2, sayi3);
        } else if ((sayi1 > sayi3) && (sayi3 > sayi2)) {
            printf("%.2f, %.2f, %.2f\n", sayi1, sayi3, sayi2);
        } else if ((sayi3 > sayi2) && (sayi2 > sayi1)) {
            printf("%.2f, %.2f, %.2f\n", sayi3, sayi2, sayi1);
        } else if ((sayi3 > sayi1 ) && (sayi1 > sayi2)) {
            printf("%.2f, %.2f, %.2f\n", sayi3, sayi1, sayi2);
        } else if ((sayi2 > sayi1) && (sayi1 > sayi3)) {
            printf("%.2f, %.2f, %.2f\n", sayi2, sayi1, sayi3);
        } else {
            printf("%.2f, %.2f, %.2f\n", sayi2, sayi3, sayi1);
        }

        printf("Devam etmek istiyor musunuz? (e/h): ");
        scanf(" %c", &devam);  // Boşluk karakteri, önceki giriş işleminin etkisini azaltmak için kullanılır
    } while (devam == 'e' || devam == 'E');

    return 0;
}  Bu kodu inceleyelim biraz ilerleyince <3 1
*/
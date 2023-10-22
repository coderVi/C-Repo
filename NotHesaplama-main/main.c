#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vize;
    float quiz;
    // değişkenleri fınal ve final isimleri ile tanımlayamamızın sebebi Final isimli bir komutun olması
    float son;
    float sonuc;

    printf("Lutfen Vize Sinav Sonucunuzu Giriniz : ");
    scanf("%f",&vize);

    printf("Lutfen Quiz Sinav Sonucunuzu Giriniz : ");
    scanf("%f",&quiz);

    printf("Lutfen Final Sinav Sonucunuzu Giriniz : ");
    scanf("%f",&son);

    sonuc = (vize * 0.3 + quiz * 0.1 + son * 0.6);

    if(sonuc >= 90){
        printf(" Notunuz : %.2f \n Harf Notu Karsiliginiz : AA ", sonuc);
    }

    else if(sonuc >= 80){
        printf(" Notunuz : %.2f \n Harf Notu Karsiliginiz : AB ", sonuc);
    }

    else if(sonuc >= 70){
        printf(" Notunuz : %.2f \n Harf Notu Karsiliginiz : BB ",sonuc);
    }

    else if(sonuc >= 65){
        printf(" Notunuz : %.2f \n Harf Notu Karsiliginiz : CB ", sonuc);
    }

    else if(sonuc >= 60){
        printf(" Notunuz : %.2f \n Harf Notu Karsiliginiz : CC ", sonuc);
    }

    else if(sonuc >= 55){
        printf(" Notunuz : %.2f \n Harf Notu Karsiliginiz : DC ", sonuc);
    }

    else if(sonuc >= 50){
        printf(" Notunuz : %.2f \n Harf Notu Karsiliginiz : DD ", sonuc);
    }

    else{
        printf(" Notunuz %.2f \n Harf Notunuz DD den dusuk oldugu icin kaldiniz", sonuc);
    }


    return 0;
}

#include <stdio.h>

#define MAX_OGRENCI 100  // Maksimum öğrenci sayısı

struct Ogrenci
{
    char ad[50];
    char soyad[50];
    int yas;
    float not;
};

float enYuksekNotuBul(struct Ogrenci sinif[], int ogrenciSayisi)
{
    if (ogrenciSayisi <= 0)
    {
        printf("Hata: Ogrenci sayisi sifir veya daha kucuk.\n");
        return -1;  // Hata durumu
    }

    float enYuksek = sinif[0].not;

    for (int i = 1; i < ogrenciSayisi; ++i)
    {
        if (sinif[i].not > enYuksek)
        {
            enYuksek = sinif[i].not;
        }
    }

    return enYuksek;
}

int main()
{
    struct Ogrenci sinif[MAX_OGRENCI];

    int ogrenciSayisi;

    printf("Siniftaki ogrenci sayisini giriniz (en fazla %d): ", MAX_OGRENCI);
    scanf("%d", &ogrenciSayisi);

    if (ogrenciSayisi > MAX_OGRENCI)
    {
        printf("Girilen ogrenci sayisi %d'den fazla olamaz.\n", MAX_OGRENCI);
        return 1;  // Hata durumu
    }

    for (int i = 0; i < ogrenciSayisi; ++i)
    {
        printf("Ogrenci %d Bilgileri:\n", i + 1);

        printf("Adi giriniz: ");
        scanf("%s", sinif[i].ad);

        printf("Soyadi giriniz: ");
        scanf("%s", sinif[i].soyad);

        printf("Yasi giriniz: ");
        scanf("%d", &sinif[i].yas);

        printf("Notu giriniz: ");
        scanf("%f", &sinif[i].not);
    }

    // En yüksek notu bulma
    float enYuksekNot = enYuksekNotuBul(sinif, ogrenciSayisi);

    if (enYuksekNot != -1)
    {
        printf("\nEn Yuksek Not: %.2f\n", enYuksekNot);
    }

    return 0;
}

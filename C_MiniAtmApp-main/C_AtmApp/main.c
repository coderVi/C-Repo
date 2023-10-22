#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int MusteriNo;
    int sifre;
    int islem;
    int bakiye = 1000;
    int CekmeYatirma;

    printf("************************************\n");
    printf("      Yilmaz BANK a Hosgeldiniz     \n");
    printf("************************************\n");

    printf("Lutfen Musteri Numaranizi giriniz : \n");
    scanf("%d",&MusteriNo);

    printf("Lutfen Sifrenizi giriniz : \n");
    scanf("%d",&sifre);
    printf("************************************\n");

    if(MusteriNo == 123456 && sifre == 0000){

        printf("1 => Bakiye Sorgulama \n");
        printf("2 => Para Cekme \n");
        printf("3 => Para Yatirma \n");
        printf("Lutfen Yapmak Istediginiz Islem Numarasini Giriniz \n");
        scanf("%d",&islem);

        if(islem == 1){
            printf("Bakiyeniz : %d TL dir",bakiye);
        }

        else if(islem == 2){
                printf("Cekmek Istediginiz Miktari Giriniz : ");
                scanf("%d",&CekmeYatirma);
                if(CekmeYatirma <= bakiye){
                    printf("Islem Basarili Kalan Tutar : %d TL dir",bakiye-CekmeYatirma);
                }
                else{
                    printf("Yetersiz Bakiye! Bakiyeniz Uzerinde Para Cekme Islemi Yapamazsiniz \n");
                }
        }
        else if(islem == 3){
            printf("Lutfen Yatirmak istediginiz Tutari Giriniz :");
            scanf("%d",&CekmeYatirma);
            printf("\n Yatirilan Tutar : %d TL , Yeni Bakiyeniz : %d TL",CekmeYatirma, CekmeYatirma+bakiye);

        }
        else{
            printf("Bilinmeyen Islem Numarasi");
        }


    return 0;
}

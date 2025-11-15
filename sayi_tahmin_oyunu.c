/* Murat Kadir Yılmaz Computer Engineering Student sayı tahmin oyunu:
Kullanıcının 1-1000 arasında rastgele bir sayıyı 10 denemede tahmin ettiği basit bir oyun. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() { // Rastgele sayı üreteci başlatılıyor (her çalıştırmada farklı sayı üretmek için.)
    srand(time(NULL));

    int sayi = rand() % 1000 +1; // 1 - 1000 arası rastgele sayı
    int tahmin; // Kullanıcının tahmini
    int sayac= 1; // Kaçıncı deneme olduğunu tutar
    int deneme= 10; // Toplam deneme hakkı
    printf("=== SAYI TAHMIN OYUNU ===\n"); // Oyunun ismi
    // Oyun başlıyor..
    printf("1-1000 arasinda rastgele sayi secildi!\n");
    printf("10 Deneme hakkiniz bulunmaktadir.\n");
    printf("----------------------------------------\n");
    
    while(deneme > 0){ // Kullanıcının tahmin hakkı bitene kadar döngü devam eder.
    printf("\n%d.Tahmini giriniz(Kalan deneme:%d):\n",sayac,deneme); // Tahmin ister.
    scanf("%d",&tahmin); // Tahminleri alır.

    if(tahmin == sayi){ // Eğer tahmin doğruysa oyunu bitir.
        printf("Tebrikler! Rastgele sayi %d.tahminde bulundu.\n",sayac);
        break;
    }
    // Tahmin yanlışsa ipucu ver.
    if(tahmin > sayi){
        printf("Tahmin sayidan buyuktur.\n");
    }
    else{
        printf("Tahmin sayidan kucuktur.\n");
    }
    // Deneme ve sayaç güncelle.
    sayac ++;
    deneme --;
}
    if(deneme == 0){ // Deneme hakkı bittiyse kullanıcıya doğru sayıyı göster.
        printf("Basarisiz! (Deneme hakkiniz bitti.) Dogru sayi: %d\n",sayi);
    }
    printf("\n=== OYUN BITTI ===\n"); // oyunun bittiğine dair bildiri.
    return 0;
}



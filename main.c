#include <stdio.h> 

int main() {
    float batarya_sicakligi;
    int sarj_yuzdesi;
    char kapi_durumu;
    int fren_pedali;
    printf ("Batarya sıcaklığı: ");
    scanf("%f", &batarya_sicakligi);
    

    printf("şarj yüzdesi: ");
    scanf("%d", &sarj_yuzdesi);
    
    printf("kapı durumu A/K: ");
    scanf(" %c", &kapi_durumu);
    
    printf("fren pedalı: ");
    scanf(" %d", &fren_pedali);

    if (batarya_sicakligi < -100.0 || batarya_sicakligi > 200.0) {
        printf("HATA: Mantıksız sıcaklık değeri! (-100 ile 200 arası olmalı)\n");
    }
    else if (sarj_yuzdesi < 0 || sarj_yuzdesi > 100) {
        printf("UYARI: Hatalı sensör verisi! (Şarj 0-100 arası olmalı)\n");
    }
    else if (kapi_durumu != 'A' && kapi_durumu != 'K' && kapi_durumu != 'a' && kapi_durumu != 'k') {
        printf("UYARI: Geçersiz kapı durumu! Sadece 'A' veya 'K' giriniz.\n");
    }
    else if (fren_pedali != 0 && fren_pedali != 1) {
        printf("UYARI: Geçersiz fren pedalı verisi! Sadece 1 veya 0 giriniz.\n");
    }
    
    else if (batarya_sicakligi > 60.0) {
        printf( "KRİTİK HATA: Motor Aşırı Isındı! Sürüş Engellendi.");
    } 
    else if (sarj_yuzdesi < 10) {
        printf("UYARI: Batarya Kritik Seviyede! Sürüş Başlatılamaz.");
    }
    else if (kapi_durumu == 'A') {
        printf("HATA: Kapılar Açık! Lütfen Kapatınız.");
    }
    
    else if (fren_pedali == 0) {
        printf("BİLGİ: Güvenlik için frene basarak tekrar deneyin.");
    }
    else {
        printf("BAŞARILI: SİSTEM HAZIR. MOTOR BAŞLATILIYOR...");
    }
    return 0;
}
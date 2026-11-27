# Elektromobil Güvenlik ve Başlatma Kontrol Sistemi

## Açıklama
Bu proje, bir elektrikli aracın (elektromobil) motoru çalıştırılmadan önce temel güvenlik ve donanım parametrelerini denetleyen C tabanlı bir kontrol simülasyonudur. Kullanıcıdan alınan batarya sıcaklığı, şarj yüzdesi, kapı durumu ve fren pedalı verilerini analiz ederek hem sensör sınır değerlerini (edge cases) doğrular hem de belirlenen güvenlik öncelik sırasına göre sürüş onayını veya ilgili uyarı mesajlarını üretir.

## Kurulum ve Çalıştırma

Proje dosyasını derlemek ve çalıştırmak için terminalde projenin ana dizinine giderek aşağıdaki komutları uygulayın:

```bash
# Kodu derlemek için:
gcc main.c -o check

# Derlenen programı çalıştırmak için (macOS / Linux):
./check
Batarya sicakligi: 42.8
Sarj yuzdesi: 75
Kapi durumu A/K: K
Fren pedali: 1
BAŞARILI: SİSTEM HAZIR. MOTOR BAŞLATILIYOR...
Batarya sicakligi: 35.0
Sarj yuzdesi: 60
Kapi durumu A/K: A
Fren pedali: 1
HATA: Kapılar Açık! Lütfen Kapatınız.
Batarya sicakligi: 230
Sarj yuzdesi: 20
Kapi durumu A/K: K
Fren pedali: 1
HATA: Mantıksız sıcaklık değeri! (-100 ile 200 arası olmalı)

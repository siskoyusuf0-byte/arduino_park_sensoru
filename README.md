# Arduino Tabanlı Dinamik Park Sensörü Sistemi

Bu projede, Arduino UNO ve HC-SR04 ultrasonik mesafe sensörü kullanılarak nesne mesafesine göre dinamik uyarı veren bir park sensörü geliştirilmiştir. Sensörden alınan veriye göre buzzer'ın bipleme sıklığı ve LED'in yanıp sönme hızı değişmektedir.

## Proje Dosyaları
* **Kod:** Devreye yüklenen Arduino yazılımına `park_sensoru.ino` dosyasından ulaşabilirsiniz.
* **Demo Video:** Sistemin test videosu için depodaki `park_sensor_video.mp4` dosyasını inceleyebilirsiniz.

## Öne Çıkan Özellikler
* **Gerçek Zamanlı Ölçüm:** HC-SR04 sensörü ile anlık mesafe tespiti.
* **Dinamik Sesli Uyarı:** Engel yaklaştıkça artan bipleme frekansı.
* **Kritik Bölge Uyarısı:** Engel 5 cm'den daha yakın olduğunda kesintisiz (sürekli) sesli uyarı.

## Donanım Bileşenleri
* Arduino UNO
* HC-SR04 Ultrasonik Sensör
* Buzzer
* Kırmızı LED (220Ω direnç ile)
* Breadboard ve Jumper Kablolar

---
**Geliştirici:** Yusuf Şişko  
**Eğitim:** Gazi Üniversitesi - Elektrik-Elektronik Mühendisliği

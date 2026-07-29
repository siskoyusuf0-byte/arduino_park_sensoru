# Arduino Tabanlı Dinamik Park Sensörü Sistemi

Bu proje, Arduino UNO ve HC-SR04 ultrasonik mesafe sensörü kullanılarak geliştirilmiş gerçek zamanlı bir park uyarı sistemidir. Sensörün nesneye olan uzaklığına bağlı olarak buzzer ses frekansı ve LED uyarı temposu dinamik olarak değişmektedir.

## 🎬 Proje Demosu ve Dosyalar

- **Çalışma Videosu:** Projenin canlı test videosunu izlemek için yukarıdaki `park_sensor_video.mp4` dosyasına tıklayabilirsiniz.
- **Arduino Kodu:** Devreye yüklenen C++ kodlarına `park_sensoru.ino` dosyasından ulaşabilirsiniz.

## 🚀 Özellikler
- **Gerçek Zamanlı Mesafe Ölçümü:** HC-SR04 sensör verilerinin milisaniyelik işlenmesi.
- **Dinamik Sesli Geri Bildirim:** Nesne yaklaştıkça artan buzzer bip frekansı.
- **Kritik Bölge Uyarısı:** Nesneye 5 cm'den daha fazla yaklaşıldığında kesintisiz sesli uyarı.

## 🛠️ Kullanılan Bileşenler
- Arduino UNO
- HC-SR04 Ultrasonik Sensör
- Buzzer
- Kırmızı LED (220Ω Direnç ile)
- Breadboard ve Jumper Kablolar

---
**Geliştirici:** Yusuf Şişko  
**Eğitim:** Gazi Üniversitesi - Elektrik-Elektronik Mühendisliği

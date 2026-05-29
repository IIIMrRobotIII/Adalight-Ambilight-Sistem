# 🖥️ DIY PC Ambilight Projesi

Bu proje, bilgisayar ekranınızdaki renkleri anlık olarak analiz edip monitör arkasına yerleştirilen adreslenebilir LED'ler vasıtasıyla duvara yansıtan dinamik bir ambiyans aydınlatma sistemidir. Film izlerken veya oyun oynarken görsel deneyimi en üst seviyeye çıkarmak için tasarlanmıştır.

Projenin yapım aşamalarını, testlerini ve detaylı rehber videosunu kaçırmamak için YouTube kanalıma göz atabilirsiniz:
📺 **[YouTube Kanalımı Ziyaret Edin](https://www.youtube.com/channel/UCAguJ_iQj9wAHMfCUJmO9KQ)**

---

## 🛠️ Kullanılan Malzemeler

* **Kontrolcü:** Arduino (Uno / Nano / Pro Micro)
* **Işık Kaynağı:** WS2812B RGB Şerit LED (Adreslenebilir)
* **Montaj ve Gövde:** 3D Yazıcı ile basılmış köşe aparatları ve koruyucu kutu (Enclosure)
* **Bağlantı Elemanları:** Lehim havyası, lehim teli ve bağlantı kabloları

---

## 🔌 Bağlantı Şeması

Donanım bağlantılarını hatasız ve güvenli bir şekilde tamamlamak için aşağıdaki şemayı takip edebilirsiniz:

```
  Arduino Kartı                        WS2812B LED Şerit
+---------------+                    +-------------------+
|            5V |------------------->| +5V               |
|               |                    |                   |
|            D4 |------------------->| DIN (Data In)     |
|               |                    |                   |
|           GND |------------------->| GND               |
+---------------+                    +-------------------+
```

> ⚠️ **Not:** Şerit üzerindeki ok yönlerinin (veri akış yönü) Arduino'dan dışarıya doğru baktığından emin olun.

---

## 💻 Kurulum ve Yazılım

### 1. Arduino Kodunun Yüklenmesi
* Depo içerisinde yer alan özelleştirilmiş `Adalight` kodunu Arduino IDE ile açın.
* Kod içerisindeki veri pininin **D4** olarak ayarlandığından emin olun ve kendi kurulumunuza uygun LED sayısını girin.
* Düzenlediğiniz kodu Arduino kartınıza yükleyin.

### 2. Bilgisayar Yazılımı (Senkronizasyon)
Ekrandaki piksel renklerini tarayıp USB üzerinden Arduino'ya göndermek için bilgisayarınıza aşağıdaki aracı yazılımlardan birini kurmanız gerekmektedir:
* **Prismatik** (Tavsiye edilen)
* **Ambibox**
* **Hyperion**

---

## 🗺️ 3D Tasarımlar

* **3D Modeller (STL):** LED şeritlerin monitör arkasında potluk yapmadan düzgün dönmesini sağlayan köşe aparatları ile Arduino muhafaza kutusunun STL dosyalarına depo içerisinden erişebilirsiniz.

---

## 👤 Geliştirici ve İletişim

* **Yazar:** Burak Zahter
* **GitHub Deposu:** [github.com/BurakZahter/DIY-PC-Ambilight](https://github.com/BurakZahter/DIY-PC-Ambilight)
* **YouTube:** Teknoloji, Arduino ve genel mühendislik projelerine odaklanan YouTube kanalım - [Kanalı Ziyaret Edin](https://www.youtube.com/channel/UCAguJ_iQj9wAHMfCUJmO9KQ)

# 🛒Otomat Machine & Kasa Simülasyonu

## 📝 Proje Hakkında
Bu proje, bir akıllı otomatın veya yazar kasanın arka planda nasıl çalıştığını simüle eden bir C konsol uygulamasıdır. Kullanıcının ürün seçimi yapabildiği, dinamik bir sepet oluşturabildiği ve gerçekçi bir ödeme sistemiyle alışverişi tamamladığı bir algoritma içerir.

## ⚙️ Öne Çıkan Özellikler
* **Dinamik Sepet Mantığı:** Kullanıcının farklı ürünlerden istediği adette alabilmesi ve `switch-case` yapısıyla toplam tutarın arka planda kümülatif olarak hesaplanması.
* **Gerçekçi Ödeme Sistemi (Esnaf Mantığı):** Kasa işlemlerinde kullanıcının eksik ödeme yapması durumunda işlemi iptal etmek yerine, `while` döngüsü ile eksik kalan tutarı tahsil edene kadar para istemeye devam etmesi.
* **Güvenlik ve Mantık Kontrolleri:** * Sepete eksi (-) veya sıfır (0) adet ürün eklenmesini engelleyen miktar kontrolü.
  * Boş sepetle kasaya gidildiğinde sistemi yormadan işlemi sonlandıran optimizasyon.

## 💻 Kullanılan Teknolojiler
* C Programlama Dili
* Kontrol Yapıları: `if-else`, `switch-case`, `do-while`, `while`

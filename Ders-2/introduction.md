## Mutex nedir?
- Mutex: senkronizasyon araci olarak kullanilir ve kritik bolgelere erisimi kontrol eder.  
Daha basit: Mutex, paylasilan kaynaklara ayni anda erisimi engellemek icin kullanilir.

## Neden Mutex kullanilir?
Multi threaded uygulamalar pek cok zaman ayni kaynaga erisim gerektirir.
Ornegin, birden fazla thread ayni degiskene yazabilir veya okuyabilir. Bu durumda, verilerin tutarsiz hale gelmesini onlemek icin mutex kullanilir.

## Example Problem:
counter adinda global bir degiskenimiz var ve iki thread bu degiskene ayni anda erisim saglayip degerini artiriyor. Eger mutex kullanulmazsa, iki thread ayni anda counter degiskenine erisip degerini artirabilir ve beklenmedik sonuclar ortaya cikabilir.

## Kritik Bolge Nedir?
Birden fazla thread'in ayni anda erismesi durumunda verilerin tutarsiz hale gelmesine neden olabilecek kod bloklarina kritik bolge denir. Kritik bolgelere erisimi kontrol etmek icin mutex kullanilir.

## Lock ve Block Nedir?
pthread_mutex_lock fonksiyonu, bir thread'in mutex'i kilitlemesini saglar. Eger baska bir thread zaten bu mutex'i kilitlemisse, kilitlemeye calisan thread block olur ve mutex serbest birakilincaya kadar bekler.

pthread_mutex_unlock fonksiyonu ise, kilitli olan mutex'i serbest birakir ve baska thread'lerin bu mutex'e erisim saglamasina izin verir.

## Visual Flow:
1. Thread A: lock mutex -> kritik bolgeye girer
2. Thread B: lock mutex -> block olur
3. Thread A: kritik bolgeden cik -> unlock mutex
4. Thread B: mutex serbest -> kritik bolgeye girer

## Mutex API Fonksiyonlari:
- pthread_mutex_init: Mutex'i baslatir.
- pthread_mutex_lock: Mutex'i kilitler.
- pthread_mutex_unlock: Mutex'i serbest birakir.
- pthread_mutex_destroy: Mutex'i yok eder ve kaynaklari serbest birakir.




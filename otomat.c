#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int secim, adet, sepettutari, paraustu;
	int toplamtutar = 0;
	int devammi;
	
	printf("\n----YAZAR KASA PROGRAMI----\n\n");
	
	do {
        printf("Urunler Alt Kisimda Listelenmistir\n");
        printf("-------------------------\n");
        printf("1)Somun Ekmek 8 tl \n");
        printf("2)Bitter Karam 24 tl \n");
        printf("3)Karamel Biskrem 18 tl \n");
        printf("4)Elidor Sampuan 98 tl \n");
        printf("-------------------------\n");
        
        printf("Secim Yapar misiniz: ");
        scanf("%d", &secim);
        
        if(secim >= 1 && secim <= 4) {
            printf("Kac Adet Alacaksiniz: ");
            scanf("%d", &adet);	
            
            if(adet > 0) {
                switch(secim) {
                    case 1:
                        toplamtutar += (adet * 8);
                        printf("Sectiginiz urunden %d adet aldiniz\n", adet);
                        break;
                    case 2:
                        toplamtutar += (adet * 24);
                        printf("Sectiginiz Urunden %d adet aldiniz\n", adet);
                        break;
                    case 3:	
                        toplamtutar += (adet * 18);
                        printf("Sectiginiz Urunden %d adet aldiniz\n", adet);
                        break;
                    case 4:
                        toplamtutar += (adet * 98);
                        printf("Sectiginiz Urunden %d adet aldiniz\n", adet);
                        break;
                }	
                printf("Guncel sepet tutariniz %d TL'dir\n\n", toplamtutar);
            } 
            else {
                printf("Hatali giris! Adet 0 veya negatif olamaz.\n\n");
            }
        }
        else {
            printf("Oyle bir secim yok maalesef yanlis bastin!\n\n");
        }	
        
        printf("Baska bir isteginiz var mi? 1 Evet, 0 Hayir Tuslama Yapiniz: ");
        scanf("%d", &devammi);
        printf("\n");
	
	} while(devammi != 0);
	
	if(toplamtutar == 0) {
	    printf("Hicbir urun almadiniz. Iyi gunler dileriz!\n");
	    return 0;
	}
	
	printf("Urunler secildi. Toplam borcunuz: %d TL\n", toplamtutar);
	
	int odenen = 0;
	int girilenPara = 0;
	
	while(odenen < toplamtutar) {
	    printf("Lutfen para girisi yapiniz (Kalan Borc: %d TL): ", toplamtutar - odenen);
	    scanf("%d", &girilenPara);
	    
	    if(girilenPara > 0) {
	        odenen += girilenPara;
	    } else {
	        printf("Gecersiz para girisi! Lutfen gecerli bir tutar girin.\n");
	    }
	}
	
	if(odenen > toplamtutar) {
	    paraustu = odenen - toplamtutar;
		printf("\nOdeme Basarili! Verilecek Para ustu: %d TL. Afiyet olsunn!\n", paraustu);
	}
	else { 
        printf("\nOdeme tam olarak yapildi. Afiyet olsunn..\n");	
	}

	return 0;
}

#include <stdio.h>

int main()
{
    int o;
    printf("Lutfen ogrenci sayisi giriniz: ");
    scanf("%d",&o);
    int OgrenciSayisi[o];
    int vizeler[o];
    int finaller[o];
    int ortalamalar[o];
    float sinifortalamasi=0;
    
    
    
    for(int i=0;i<o;i++)
    {
        printf("lutfen %d ninci ogrencinin vize notunu giriniz:",i);
        scanf("%d",&vizeler[i]);
        printf("lutfen %d ninci ogrencinin final notunu giriniz:",i);
        scanf("%d",&finaller[i]);
        ortalamalar[i]=(((vizeler[i]*40)/100)+((finaller[i]*60)/100));
        sinifortalamasi=sinifortalamasi+(float)ortalamalar[i];
        
    }
    
    for(int i=0;i<o;i++)
    {
        printf("\n%d ninci ogrencinin vize notu:%d ve final notu: %d ve ortalamasi: %d\n",i,vizeler[i],finaller[i],ortalamalar[i]);
    }
    
    
    printf("\n**********************\n");
    printf("\n**********************\n");
    printf("\n**********************\n");
    printf("\n**********************\n");
    
    
    sinifortalamasi=sinifortalamasi/o;
    printf("Sinif ortalamasi:%f\n",sinifortalamasi);
    
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* 1-baþla
ERDOÐANLAR AUTO
2-printf  istediðiniz arabayý seçin
3- 1-þu 2-bu...
4-eðer arabanýzý deðiþtirmek isterseniz 1 e basýn hayýrsa 2 ye basýn 
5-sipariþiniz alýndý bizi tercih ettiðiniz için teþekkür ederiz:)
6-
*/

int main()
{
	int b=0,i=0,a=0,arabasayisi=5,islem=0,hata=404,durum=0;
	int dizi1[3]={25,72,325};
	int dizi[5]={800,750,250,350,500};
	char car1[]="FORD MUSTANG GT";
	char car2[]="SHELBY COBRA";
	char car3[]="MURAT 131";
	char car4[]="FIAT EGEA"; 
 	char car5[]="BMW M3 E46";
 	char ad[50];
 	char soyad[50];
 	char aksesuar[50];
 	int onaylama;
 	char onay1[]="evet";
 	char onay2[]="hayir";
 	 
 	
 	

	printf("ERDOGANLAR AUTO\n\n");
	bilgilendirme_metni();
	printf("\n\n");
	 printf("adinizi giriniz:");
	 gets(ad); 
  printf("soyadinizi giriniz:");
  gets(soyad);
  strcat(ad,soyad);
	printf("hosgeldin %s\n\n",ad);
	
	printf("araba aksesuar urunu almak icin 3 e basin, araba kiralamak icin 1 e basin:");
	scanf("%d",&durum);
	if(durum==3)
	{
		while(1)
		{

		printf("anahtarlik %d TL\nkoku %d TL\nspoiler %d TL\n",dizi1[b],dizi1[b+1],dizi1[b+2]);
				printf("urunu secmek icin adini girin:\n");
		printf("1-anahtarlik\n2-koku\n3-spoiler\n");
		scanf("%s",&aksesuar);
		printf("%s secildi\n",aksesuar);
		
			printf("sectigin urunu degistirmek ister misin?(E=1 H=2)\n");
			scanf("%d",&onaylama);
			if(onaylama==1)
			{
				printf("tekrar yönlendiriliyorsunuz");
				continue;
			}
		else if(onaylama==2)
				{
			
				printf("%s sectin\n bizi tercih ettiginiz icin tesekkurler:)",aksesuar);
				break;
				}
		}
		
		
	}
	
	
	
	if(durum==1)
	{		
	printf("1-FORD MUSTANG GT\n2-SHELBY COBRA\n3-MURAT131\n4-FIAT EGEA\n5-BMW M3 E46\n\n");
	
	for(i=0;i<arabasayisi;i++)
{

		printf("%d.arabanin gunluk ucreti %d TL dir\n",i+1,dizi[i]);	
}

	printf("\naraba seciniz:");
	scanf("%d",&a);
	if(a<1)
	{
	hatayibelirt();
	}
	else if(a>5)
	
	
	{
	hatayibelirt();		
	}
switch(a)	
	{
	
	case 1:
		
	    printf("arabanizi degistirmek isterseniz 1 e basin degistirmek istemezseniz 0 a basin\n");
	    scanf("%d",&islem);
	    if(islem==1)
	    {
	

				    	
	    	printf("araba seciniz:");
	    	scanf("%d",&a);
	    		if(a<1)
	{
	hatayibelirt();
	}
	else if(a>5)
	
	
	{
	hatayibelirt();
	break;		
	}
	    	if(a==1)
			{
	    	printf("secilen araba %s. basariyla siparisiniz olusturulmustur\n",car1);
	    	printf("bizi tercih ettiginiz icin tesekkurler");
	    	break;
	    	}
	    	if(a==2)
			{
	    	printf("secilen araba %s. basariyla siparisiniz olusturulmustur\n",car2);
	    	printf("bizi tercih ettiginiz icin tesekkurler");
	    	break;
	    	}
			if(a==3)
			{
	    	printf("secilen araba %s. basariyla siparisiniz olusturulmustur\n",car3);
	    	printf("bizi tercih ettiginiz icin tesekkurler");
	    	break;
	    	}
			if(a==4)
			{
	    	printf("secilen araba %s. basariyla siparisiniz olusturulmustur\n",car4);
	    	printf("bizi tercih ettiginiz icin tesekkurler");
	    	break;
	    	}
			if(a==5)
			{
	    	printf("secilen araba %s. basariyla siparisiniz olusturulmustur\n",car5);
	    	printf("bizi tercih ettiginiz icin tesekkurler");
	    	break;
	    }
	    	
	    	
		}
	    else if(islem==0)
	    {
		printf("secilen araba FORD MUSTANG GT. basariyla siparisiniz olusturulmustur\n");
	    printf("bizi tercih ettiginiz icin tesekkurler:)");
	    break;
		}
			
	case 2:
		printf("arabanizi degistirmek isterseniz 1 e basin degistirmek istemezseniz 0 a basin\n");
	    scanf("%d",&islem);
	    	if(a<1)
	{
	hatayibelirt();
	}
	else if(a>5)
	
	
	{
	hatayibelirt();
	break;		
	}
	    if(islem==1)
	    {
	    	printf("araba seciniz:");
	    	scanf("%d",&a);
	    	
	    	if(a==1)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car1);
	    	break;
	    	}
	    	if(a==2)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car2);
	    	break;
	    	}
			if(a==3)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car3);
	    	break;
	    	}
			if(a==4)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car4);
	    	break;
	    	}
			if(a==5)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car5);
	    	break;
	    }
	    	
	    	
	    }
	    else if(islem==0)
	    {
		printf("secilen araba SHELBY COBRA. basariyla siparisiniz olusturulmustur\n");
	    printf("bizi tercih ettiginiz icin tesekkurler:)");
	    break;
		}

	
	
	
	case 3:
	printf("arabanizi degistirmek isterseniz 1 e basin degistirmek istemezseniz 0 a basin\n");
	    scanf("%d",&islem);
	    if(islem==1)
	    {
	    	printf("araba seciniz:");
	    	scanf("%d",&a);
	    		if(a<1)
	{
	hatayibelirt();
	}
	else if(a>5)
	
	
	{
	hatayibelirt();
	break;		
	}
	    	if(a==1)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car1);
	    	break;
	    	}
	    	if(a==2)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car2);
	    	break;
	    	}
			if(a==3)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car3);
	    	break;
	    	}
			if(a==4)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car4);
	    	break;
	    	}
			if(a==5)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car5);
	    	break;
	    }
	    	
	    	
	    }
	    else if(islem==0)
	    {
		printf("secilen araba MURAT 131. basariyla siparisiniz olusturulmustur\n");
	    printf("bizi tercih ettiginiz icin tesekkurler:)");
	    break;
		}
	
	
	
	case 4:
		printf("arabanizi degistirmek isterseniz 1 e basin degistirmek istemezseniz 0 a basin\n");
	    scanf("%d",&islem);
	    if(islem==1)
	    {
	    	printf("araba seciniz:");
	    	scanf("%d",&a);
	    		if(a<1)
	{
	hatayibelirt();
	}
	else if(a>5)
	
	
	{
	hatayibelirt();
	break;		
	}
	    	if(a==1)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car1);
	    	break;
	    	}
	    	if(a==2)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car2);
	    	break;
	    	}
			if(a==3)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car3);
	    	break;
	    	}
			if(a==4)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car4);
	    	break;
	    	}
			if(a==5)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car5);
	    	break;
	    }
	    	
	    	
	    }
	    else if(islem==0)
	    {
		printf("secilen araba FIAT EGEA. basariyla siparisiniz olusturulmustur\n");
	    printf("bizi tercih ettiginiz icin tesekkurler:)");
	    break;
		}
			
	case 5:printf("arabanizi degistirmek isterseniz 1 e basin degistirmek istemezseniz 0 a basin\n");
	    scanf("%d",&islem);
	    if(islem==1)
	    {
	    	printf("araba seciniz:");
	    	scanf("%d",&a);
	    		if(a<1)
	{
	hatayibelirt();
	}
	else if(a>5)
	
	
	{
	hatayibelirt();
	break;		
	}
	    	if(a==1)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car1);
	    	break;
	    	}
	    	if(a==2)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car2);
	    	break;
	    	}
			if(a==3)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car3);
	    	break;
	    	}
			if(a==4)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car4);
	    	break;
	    	}
			if(a==5)
			{
	    	printf("secilen araba %s dir\nbizi tercih ettiginiz icin tesekkurler:)",car5);
	    	break;
	    }
	    	
	    	
	    }
	    else if(islem==0)
	    {
		printf("secilen araba BMW M3 E46. basariyla siparisiniz olusturulmustur\n");
	    printf("bizi tercih ettiginiz icin tesekkurler:)");
	    break;
		}
	}
}
	return 0;
}


void bilgilendirme_metni()
{
	printf("yapacaginiz alisverisler tamamen erdoganlar auto ltd.sti guvencesi altindadir");
}

void hatayibelirt()
{	
int hata=404;
printf("yanlis bir islem yaptiniz, hata kodu %d",hata);
	

}


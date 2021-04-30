class personel{
public:
personel();
personel(char sicil_no[20],char isim[20],
char soyisim[20],char dogum_yili[20],
char aylik_calisma_saati[20],
char saat_basi_ucreti[20]);

void personelBilgileri();
void yasOrtalamasi();
void maasOrtalamasi();

private:
char sicil_no[20];
char isim[20];
char soyisim[20];
char dogum_yili[20];
char aylik_calisma_saati[20];
char saat_basi_ucreti[20];
int dy;
float cs;
float ucret; 
};
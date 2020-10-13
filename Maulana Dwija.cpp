//* Program Billing Warnet *//
/* Maulana Dwija Sukma (20051397021) */
#include <stdio.h>
#include <conio.h>

main ()
{
int sisa,Total_detik_mulai,Total_detik_selesai,jam_mulai,menit_mulai,detik_mulai,jam_selesai,menit_selesai,detik_selesai,lama_pemakaian,menit_pemakaian,detik_pemakaian,durasi,	tot_bayar;

printf ("billing warnet Sukma\n");
printf ("NIM 20051397021");
printf ("\n \n");

printf ("Mulai\n");
printf ("Jam mulai	="); scanf("%i",&jam_mulai);
printf ("Menit mulai	="); scanf("%i",&menit_mulai);
printf ("Detik mulai	="); scanf("%i",&detik_mulai);
Total_detik_mulai=(jam_mulai*3600)+(menit_mulai*60) +detik_mulai;
printf ("\n \n");

printf ("Selesai\n");
printf ("Jam selesai	="); scanf("%i",&jam_selesai);
printf ("Menit selesai	="); scanf("%i",&menit_selesai);
printf ("Detik selesai	="); scanf("%i",&detik_selesai);
Total_detik_selesai=(jam_selesai*3600)+(menit_selesai*60) +detik_selesai;
durasi=Total_detik_selesai-Total_detik_mulai;

tot_bayar=durasi*5000/3600;
	lama_pemakaian=durasi/3600;
	sisa=durasi%3600;
	menit_pemakaian=sisa/60;
	detik_pemakaian=sisa%60;
	printf ("\n \n");
	
printf ("Lama pemakaian\n");
	printf(": %i jam\n", lama_pemakaian);
	printf(": %i menit\n", menit_pemakaian);
	printf(": %i detik\n", detik_pemakaian);
	printf ("\n \n");
	
printf ("Tarif = Rp.5000,- per jam\n");
	printf ("Total Biaya Yang Harus Dibayar: Rp.%i",tot_bayar);
	printf ("\n");
	printf ("Terima Kasih");
	printf ("\n");
}

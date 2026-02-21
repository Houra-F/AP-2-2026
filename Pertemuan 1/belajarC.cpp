#include <stdio.h> //header standar utk c
#include <conio.h>

int main()
{
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf ("Hello world \n"); //printf utk fungsi output pada c

    printf ("masukkan nama: ");
    gets (nama); //gets kepanjangan dr getstring

    printf ("masukkan nim: ");
    scanf ("%d", &nim);

    getchar(); //agar line selanjutnya terbaca

    printf ("masukkan kom: ");
    gets (kom);

    printf ("masukkan ip: ");
    scanf ("%f", &ip);
    

    /* ini untuk output */
    printf ("nama: ");
    puts (nama); //put string untuk string dalam bentuk array char

    printf ("nim: %d\n", nim);

    printf("kom: ");
    puts (kom);

    printf ("ip: %1.f\n", ip);

    printf ("press any button to continue...");
    getch();
}
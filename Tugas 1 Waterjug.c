//mengisi air sampai penuh
//maaf pak waktu itu saya kira pakai python, lupa matkulnya bahasa C :(
#include <stdio.h>

int main()
{
    //program menu
    printf("Daftar Instruksi: \n");
    printf("1. isi A\n");
    printf("2. isi B\n");
    printf("3. empty A\n");
    printf("4. empty B\n");
    printf("5. A ke B\n");
    printf("6. B ke A\n");
    
    //initialize
    int A = 0;
    int B = 0;
    int i = 0;
    int inp;
    
    //pouring
    while ((B != 4) || (A != 4))
    {
        printf("\nmasukkan nomor instruksi: ");
        scanf("%d", &inp);
        
        if ((inp == 1) && (A != 3)){
            A = 3;
        }
        else if ((inp == 2) && (B != 5)){
            B = 5;
        }
        else if ((inp == 3) && (A != 0)){
            A = 0;
        }
        else if ((inp == 4) && (B != 0)){
            B = 0;
        }
        else if (inp == 5){
            A = 3-A;
            B = 5-B;
        }
        else if (inp == 6){
            A = 3-A;
            B = 5-B;
        }
        
        else if ((inp != 1) && (inp != 2) && (inp != 3) && (inp != 4) && (inp != 5) && (inp != 6)){
            printf("error");
        }
        //ending
        if ((B=4) && (A=4)){
            printf("yeay penuh!");
            printf("how many clicks: %d\n", i+1);
            printf("%d =\n", A);
            printf("%d =\n", B);
    
            return 0;
        }
        //counting the clicks
        i = i + 1;
    }
}

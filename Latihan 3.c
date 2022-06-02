//sebelumnya salah judul, seharusnya Latihan 3 bukan Tugas 3
#include <stdio.h>

struct Student
{
  char nama[12];
  char nim[8];
  float absen;
};

int main()
{
    struct Student dummy1 = {"amy", "18320031", 30.0};
    struct Student dummy2 = {"diane", "18320021", 70.0};
    struct Student dummy3 = {"brigitta", "18320011", 90.5};
  
    struct Student EB[] = {dummy1, dummy2, dummy3};
    printf("yang tidak bisa mengikuti ujian\n\n"); 
    for (int i = 0; i < 3; i++)
    {
        
        if (EB[i].absen < 80.0)
        {
            printf("%-12s\t", EB[i].nama);
            printf("%-8s\t", EB[i].nim);
            printf("%.2f\n", EB[i].absen);
        }
    }
    return 0;
}

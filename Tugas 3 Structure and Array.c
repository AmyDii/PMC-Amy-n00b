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
  
    struct Student students[] = {dummy1, dummy2, dummy3};
      
    for (int i = 0; i < 10; i++)
    {
        cout << "masukan nama" << (i + 1) << ": ";
        cin >> Student[i].nama;
        cout << "masukan nim" << (i + 1) << ": ";
        cin >> Student[i].nim;
        cout << "masukan persentase absen tanpa persennya" << (i + 1) << ": ";
        cin >> Student[i].absen;
    }
    return 0;
  
  printf("yang tidak bisa mengikuti ujian");
  if Student[i].absen < 80;
  {
    printf("%-12s"\t, Student[i].nama);
    printf("%-8s"\t, Student[i].nim);
    printf("%.2f"\n, Student[i].absen);
  }
}


//Buatlah program yang menerima sebuah file, kemudian menampilkan 
//apakah file sebuah pdf, jpg atau sebuah tidak terdefinisi

#include <stdio.h>

int main()
{
    //declare
    FILE *file;
    char filename[100];
    unsigned char content[5];
    
    //input file
    printf("Input filename: ");
    scanf("%s", filename);
    
    //open file
    file = fopen(filename, "r");
    
    //checking file
    if (file != NULL)
    {
        //reading file
        fread(content, 5, 1, file);
        //printing the content of the file
        printf("File contents: \n");
        printf("%x\n%x\n%x\n", content[0], content[1], content[2]);
        printf("%x\n%x\n", content[3], content[4]);
        
        //looking for file type
        if ((content[0] == 0x25) && (content[1] == 0x50) && (content[2] == 0x44) && (content[3] == 0x46) && (content[4] == 0x2d))
        {
            printf("The file is PDF\n");
        }
        else if ((content[0] == 0xFF) && (content[1] == 0xd8) && (content[2] == 0xFF))
        {
            printf("The file is JPG\n");
        }
        else
        {
            printf("File is can't be defined");
        }
    }
    
    else
    {
        printf("File error.");
    }
    
    //closing File
    fclose(file);
    
    return 0;
}

//referensi
//https://www.geeksforgeeks.org/c-program-to-check-whether-the-file-is-jpeg-file-or-not/
//https://stackoverflow.com/questions/33745701/determining-the-filetype-of-a-file-in-c

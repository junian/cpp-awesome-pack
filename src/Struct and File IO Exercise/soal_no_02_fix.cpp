#include <stdio.h>
#include <conio.h>

struct mahasiswa{
     char nama[50];
     int umur;
};

void cetakData(struct mahasiswa data){
     printf("%s\n", data.nama);
     printf("%d\n", data.umur);
}

int main()
{
     struct mahasiswa data;
     gets(data.nama);
     scanf("%d", data.umur);
     cetakData(data);
     getch();
     return 0;
}

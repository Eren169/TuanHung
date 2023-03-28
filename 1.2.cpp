#include <stdio.h>
#include <conio.h>

struct HonSo
{
	int SoNguyen, TuSo, MauSo;
};

typedef struct HonSo HONSO;

void NhapHonSo(HONSO%);
void XuatHonSo(HONSO);

void NhapHonSo(HONSO&hs)
{
	printf("\nNhap So Nguyen: ");
	scanf("%d", &hs.SoNguyen);
	
	do
	{
		printf("\nNhap Mau So: ");
		scanf("%d" &hs.MauSo);
	}
	do 
	{
		printf("\nNhap Tu So: ")
		 scanf("%d", &hs.MauSo);

        if(hs.MauSo == 0)
        {
            printf("\nMau so phai khac 0. Xin kiem tra lai !");
        }
    }while(hs.MauSo == 0);
	}
}
void XuatHonSo(HONSO hs)
{
	prinf("%d*(%d/%d)", hs.SoNguyen, hs.MauSo, hs.TuSo);
}
int main()
{
	HONSO hs;
	NhapHonSo(hs);
	XuatHonSo(hs);
	
	getch();
	return;
}

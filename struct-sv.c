#include<stdio.h>
struct SINH_VIEN{
	char mssv[10];
	char hoten[30];
	int namsinh;
	float diem;
	char malop[10];
};
typedef struct SINH_VIEN SV;

void nhapSV(SV *a);//Truyen tham bien
void xuatSV(SV a);//Truyen tham tri
void nhapDSSV(SV a[], int n);
void nhapDSSV(SV a[], int n);
int main()
{
	SV a[10];	
	int n = 2;
	nhapDSSV(a, n);
	xuatDSSV(a, n);
	return 0;
}
void nhapDSSV(SV a[], int n){
	int i;
	for(i = 1; i <= n; i++){
		printf("\nNhap du lieu sinh vien thu %d: \n",i);
		nhapSV(&a[i]);
	}
}
void xuatDSSV(SV a[], int n){
	int i;
	for(i = 1; i <= n; i++){
		xuatSV(a[i]);
	}
}
//Xuat thong tin 1 sinh vien
void xuatSV(SV a)
{
	printf("\n%s\t%s\t%d\t%.1f\t%s", a.mssv, a.hoten, a.namsinh, a.diem, a.malop);
}


//Ham nhap thong tin 1 sinh vien
void nhapSV(SV *a)
{
	printf("\nHay nhap ma so sinh vien: ");
	fflush(stdin);
	scanf("%s", a->mssv);
	
	printf("\nHay nhap ho ten: ");
	fflush(stdin);
	gets(a->hoten);
	
	printf("\nHay nhap nam sinh: ");
	fflush(stdin);
	scanf("%d", &a->namsinh);
	
	printf("\nHay nhap diem: ");
	fflush(stdin);
	scanf("%f", &a->diem);
		
	printf("\nHay nhap ma lop: ");
	fflush(stdin);
	scanf("%s", a->malop);
	
}

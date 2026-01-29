#include <stdio.h>
#include <stdlib.h>

struct SINH_VIEN {
    char mssv[10];
    char hoten[30];
    int namsinh;
    float diem;
    char malop[10];
};
typedef struct SINH_VIEN SV;

void nhapSV(SV *a);
void xuatSV(SV a);
void nhapDSSV(SV a[], int n);
void xuatDSSV(SV a[], int n);

int main() {
    SV a[10];
    int n = 2;

    nhapDSSV(a, n);

    FILE *fp = fopen("dssv.out", "wb");
    if (fp != NULL) {
        fwrite(a, sizeof(SV), n, fp);
        fclose(fp);
    }else{
    	printf("Loi mo file");
    }

    if (fp != NULL) {
        fread(a, sizeof(SV), n, fp);
        fclose(fp);
        printf("\nDu lieu tu file dssv.out:");
        xuatDSSV(a, n);
    }else{
    	printf("Loi mo file");
    }

    return 0;
}

void nhapSV(SV *a) {
    printf("\nHay nhap ma so sinh vien: ");
    scanf("%s", a->mssv);
    getchar();
    printf("Hay nhap ho ten: ");
    fgets(a->hoten, sizeof(a->hoten), stdin);
    int i;
    for (i = 0; a->hoten[i] != '\0'; i++) {
        if (a->hoten[i] == '\n') a->hoten[i] = '\0';
    }
    printf("Hay nhap nam sinh: ");
    scanf("%d", &a->namsinh);
    printf("Hay nhap diem: ");
    scanf("%f", &a->diem);
    printf("Hay nhap ma lop: ");
    scanf("%s", a->malop);
}

void xuatSV(SV a) {
    printf("\n%s\t%s\t%d\t%.1f\t%s", a.mssv, a.hoten, a.namsinh, a.diem, a.malop);
}

void nhapDSSV(SV a[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("\nNhap du lieu sinh vien thu %d: \n", i + 1);
        nhapSV(&a[i]);
    }
}

void xuatDSSV(SV a[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        xuatSV(a[i]);
    }
    printf("\n");
}

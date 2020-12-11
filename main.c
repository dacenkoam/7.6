#include <stdio.h>
#include <stdlib.h>

int* merge(int *pm, int m, int *pn, int n){
    int i=0, j=0,k=0;
    int *pu;
    pu = (int*) calloc(m+n, sizeof(int));
    while (i<m && j<n){
        if (pm[i]<pn[j])
            pu[k++]=pm[i++];
        else
            pu[k++]=pn[j++];}
    while(i<m){
        pu[k++]=pm[i++];}
    while (j<n){
        pu[k++]=pn[j++];}

    printf("\n");
    return pu;
}

int six()
{
    int *pn,*pm, m, n, i;
    printf("Введите количество элементов первого массива\n");
    scanf("%d", &m);
    pm = (int*) calloc(m, sizeof(int));
    printf("Введите элементы первого массива\n");
    for(i=0; i<m; i++){
        scanf("%d", &pm[i]);
    }
    printf("Введите количество элементов второго массива\n");
    scanf("%d", &n);
    pn = (int*) calloc(n, sizeof(int));
    printf("Введите элементs второго массива\n");
    for(i=0; i<n; i++){
        scanf("%d", &pn[i]);
    }
    int *pu=merge(pm,m,pn,n);
    printf("Полученный массив\n");
    for(i=0; i<m+n; i++){
        printf("%d ", pu[i]);
    }
    printf("\n");
    return 0;
}
int main(){
    int n;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    while(1){
        printf("6 - задача 7.6\n0 - выход\n");
        scanf("%d", &n);
        switch(n){
        case 6: six(); break;
        case 0: return 0;
    }

    }

}

#include <stdio.h>

int main()
{
    int n;
    printf("nhap so luong dia: ");
    scanf("%d", &n);
    int tongbuoc = 1;
    for(int i = 0; i<n;i++)
    {
        tongbuoc *= 2;
    }
    tongbuoc -=1;
    printf("so buoc toi thieu de chuyen tat ca dia la: %d", tongbuoc);
    char cot[3]={'A', 'B', 'C'};
    int vitri[100]={0};
for(int i = 0; i<tongbuoc;i++)
    {
        int dia=0;
        int t = i;
        while(t%2==1)
        {
            dia++;
            t/=2;
        }
        int dau = vitri[dia];
        int cuoi;
        if (dia==0)
        {
            if (n%2 == 1){
                if (dau==0) cuoi=2;
                else if (dau==2) cuoi=1;
                else cuoi=0;
            }
            else{
                if (dau==0) cuoi=1;
                else if (dau==1) cuoi=2;
                else cuoi=0;
            }
        }
    else {
        int c1 = (dau+1)%3;
        int c2 = (dau+2)%3;
        if (vitri[dia-1]==c1) cuoi=c2;
        else cuoi=c1;
    }
        printf("chuyen dia %d tu cot %c sang cot %c\n", dia+1, cot[dau], cot[cuoi]);
        vitri[dia]=cuoi;  
}  
    return 0;
}
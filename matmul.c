#include <stdio.h>

int main() {
    int l1,c1,i,n,l2,c2,z;
     scanf("%d %d", &l1,&c1);
     float m1[l1][c1];
     for(i = 0;i <l1;i++){
         for(n = 0; n<c1;n++){
             scanf("%f", &m1[i][n]);
         }
     }
     scanf("%d %d", &l2,&c2);
      float m2[l2][c2];
     for(i = 0;i <l2;i++){
         for(n = 0; n<c2;n++){
             scanf("%f", &m2[i][n]);
         }
        }
          if(c1 != l2){
             printf("ERRO");
             return 1;
     }
      float m3[l1][c2];
     for(i = 0;i <l1;i++){
         for(n = 0; n<c2;n++){
             m3[i][n] = 0;
             for(z = 0;z<c1;z++){
                 m3[i][n] = m3[i][n] + m1[i][z] * m2[z][n];
             }
             printf("%.2f ", m3[i][n]);
         }
         printf("\n");
     }
    return 0;
}
#include <stdio.h>

int drawrectangle(int satir, int n){
  int written = 0;
            while(written < 2*n - 1){
                if( (satir == 0 || written == 0) || (satir == 2*n - 2 || written == 2*n - 2)){
                    printf("%d ", n);
                    written++;
                }
                else if (satir >= 0){
                    written += drawrectangle(satir - written , n - written);
                }
        }
  return written;
}


int main() 
{

    int n;
    scanf("%d", &n);
    for(int i = 0 ; i < 2*n - 1; i++){
    drawrectangle(i,n);
    printf("\n");
    }
    return 0;
}


#include <stdio.h>

int main() {
   
   int num[10];
   int i,temp1=3,temp2=10;
   for(i=0;i<=9;i++){
    if(i%2==0){
        num[i]=temp1;
        temp1+=3;
    }
    else{
        num[i]=temp2;
        temp2+=10;
    }
   }
   for(i=0;i<=9;i++){
    printf("%d ",num[i]);
   }
    return 0;
}
// 3 10 6 20 9 30 12 40 15 50
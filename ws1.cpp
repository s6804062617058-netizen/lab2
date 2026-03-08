#include <stdio.h>
int main(){
    int n1,n2,n3,n4;
    int max1,max2;
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

    max1=(n1>n2)?n1:n2;
    max2=(n1>n2)?n1:n2;

    max2=(n3>max1)?max1:(n3>max2?n3:max2);
    max1=(n3>max1)?n3:max1;

    max2=(n4>max1)?max1:(n4>max2?n4:max2);
    max1=(n4>max1)?n4:max1;

    printf("number max2: %d\n",max2);
    return 0;
}

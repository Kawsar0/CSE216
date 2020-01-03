#include<stdio.h>


void array (int n)

{

if (n<1)
    return;
    array(n-1);
printf("%d\t",n);
}



 int main(){
 int n=5;
 array(n);


 return 0;
 }










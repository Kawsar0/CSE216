
#include<stdio.h>


void array (int n,int i)

{

if (i>n)
    return;

printf("%d\t",i);
array(n,i+1);

}



 int main(){
 int n=5,i=1;
 array(n,i);


 return 0;
 }










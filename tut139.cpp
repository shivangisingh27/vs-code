#include <stdio.h>

void update(int *a,int *b) {
    int pa,pb;
    
    {
    pa=*a+*b;
    *a=pa;}
if(*b>*a)
{
 
     pb= *a -*b;

     *b=pb;}
     else 
     {
          pb= *b-*a;
          *b=pb;
     }
      
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

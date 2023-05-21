#include <stdio.h>
#include <math.h> 
int main() {
  int a20; 
  int b50; 
  int s100; 
  int d200;
  int a,b,s,d;
  printf("\n перше число a="); 
  scanf("%d",&a); 
  printf("\n друге число b=");
  scanf("%d",&b);
  printf("\n третье число s="); 
  scanf("%d",&s); 
  printf("\n четверте число d=");
  scanf("%d",&d);
  a20=20*a;
  b50=50*b;
  s100=100*s;
  d200=200*d;
  printf("\n a20=%d",a20);
  printf("\n b50=%d",b50);
  printf("\n s100=%d",s100);
  printf("\n d200=%d",d200);
  if (a20<b50&&a20<s100&&a20<d200) {printf("\n найменша сума грошей номіналом 20 грн a20=%d",a20 );} 
   else if (b50<a20&&b50<s100&&b50<d200) {printf("\n найменша сума грошей номіналом 50 грн b50=%d",b50);} 
   else if (s100<a20&&s100<b50&&s100<d200) {printf("\n найменша сума грошей номіналом 100 грн s100=%d",s100);}
   else if (d200<a20&&d200<b50&&d200<s100) {printf("\n найменша сума грошей номіналом 200 грн d200 =%d",d200);}
  return 0;
}
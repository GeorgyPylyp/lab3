#include <stdio.h>
#include <math.h> 
int main() { 
  int s, a;
  int f;
  printf("\n перше число s=");
  scanf("%d",&s); 
  printf("\n друге число a=");
  scanf("%d",&a);
  if(s < 0)  {f=2*s + a, printf("\n s менше 0 f=%d", f);}
  else if(s > 0)  {f=2+(s/(2*a-4)), printf("\n s більше 0 f=%d", f);}
  else if(s == 0) {f=(sqrt(s+a-5)), printf("\n s дорівнює 0 f=%d", f);}
  return 0;
}
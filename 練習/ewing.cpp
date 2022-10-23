#include <stdio.h>
int main() {
 long long y;
 int z=0;
 scanf("%lld",&y);
while (y > 0) {
    z=z*10+y%10;//100
y /= 10;
 }
 printf("%d",z);
 return 0;
}

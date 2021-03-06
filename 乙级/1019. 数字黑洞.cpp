/*

%04d  表示:在输出整数x的时候  按照4个位子的空间左对齐  多余的位子用0代替
(例如:x=3  -->  输出:0003  x=33  -->  输出:0033)
这里x=7  就是0007

%4.4  表示:输出的数的格式为:整数部分为4位  小数部分为4位(多余的位子用0代替)
(例如:3.24  -->  输出:0003.2400)
这里x=7  没有小数部分  就只有:0007

*/

#include <stdio.h>
#include <algorithm>
using namespace std;
int inc, de;

void gao(int x){
  int a[4];
  a[0] = x / 1000;
  a[1] = x / 100 % 10;
  a[2] = x / 10 % 10;
  a[3] = x % 10;
  sort(a, a + 4);
  inc = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
  de = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
}

int main(){
  int n, s;
  scanf("%d", &n);
  if ((n / 1000 == n / 100 % 10) && (n / 1000 == n / 10 % 10) && (n / 1000 == n % 10)){
    printf("%04d - %04d = 0000\n", n, n);
    return 0;
  }
  do{
    gao(n);
    s = de - inc;
    printf("%04d - %04d = %04d\n", de, inc, s);
    n = s;
  } while (s != 6174);
  return 0;
}
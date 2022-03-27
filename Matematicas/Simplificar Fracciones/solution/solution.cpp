#include <stdio.h>

int n;
long long x, y, MCD;

long long mcd(long long a, long long b) {
  if (a == 0) return b;
  return mcd(b % a, a);
}

int main() {
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%lld %lld", &x, &y);
    MCD = mcd(x, y);
    printf("%lld %lld\n", x / MCD, y / MCD);
  }
  return 0;
}

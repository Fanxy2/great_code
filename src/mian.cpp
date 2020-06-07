//問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#ifdef this_is_a_great_codo
#endif
int main() {
  char mojiretsu[1000];
  for（int mojisuu = 1；mojisuu <=1000;mojisuu++）
  {
    if (mojisuu%15 == 0) printf("FizzBuzz, ");
  else if (mojisuu%3 == 0) printf("Fizz, ");
  else if (mojisuu%5 == 0) printf("Buzz, ");
  else if printf("mojisuu, ");
 }
  return 0;
}

//問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#ifdef this_is_a_great_codo
#endif
int main() {
  char mojiretsu[1000];
  for（int mojisuu = 1；mojisuu <=1000;mojisuu++）
 switch(mojisuu){
case(mojisuu%15 == 0):printf("FizzBuzz, ");break;
case(mojisuu%3 == 0):printf("Fizz, ");break;
case(mojisuu%5 == 0):printf("Buzz, ");break;
  default:printf("mojisuu, ");break;
 }
  return 0;
}

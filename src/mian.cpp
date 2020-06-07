//問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#ifdef this_is_a_great_codo
#endif
int main{
for（int mojisuu = 1；mojisuu <=1000;mojisuu++）
swtich(mojisuu){
case(mojisuu%15=0):cout<<“FizzBuzz”;break;
case(mojisuu%3=0):cout<<“Fizz”;break;
case(mojisuu%5=0):cout<<“Buzz”;break;
  default:cout<<mojisuu;break;
 }
  return 0
}

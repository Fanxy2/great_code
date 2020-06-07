//問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#pragma warning(disable : 4996)
#ifdef this_is_a_great_codo
#endif
int main() 
{
  for(int n = 1;n <= 1000;n++)
  {
   switch (n)
  case (n % 15 == 0) std::cout<<"FizzBuzz,";
  case (n % 3 == 0) std::cout<<"Fizz,";
  case (n % 5 == 0) std::cout<<"Buzz,";
    default std::cout<<n<<",";
  }
  return 0;
}

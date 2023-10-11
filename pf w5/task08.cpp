#include <iostream>
using namespace std;

int main()
{
   int num, num1, num2, num3, num4, num5, result;
   cout << "Enter a five-digit number: ";
   cin >> num;
   num1 = num / 10000;
   num2 = (num / 1000) % 10;
   num3 = (num / 100) % 10;
   num4 = (num / 10) % 10;
   num5 = (num / 1) % 10;
   result = num1 + num2 + num3 + num4 + num5;
   if (result % 2 == 1)
   {
      cout << "Oddish";
   }
   else
   {
      cout << "Evenish";
   }
}
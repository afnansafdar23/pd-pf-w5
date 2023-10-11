#include <iostream>
using namespace std;
void isSymmetrical(int num);
int main()
{
   int num;

   cout << "Enter a number: ";
   cin >> num;
   isSymmetrical(num);
}
void isSymmetrical(int number)
{
   int n;
   int rev = 0;
   n = number;
   while (number > 0)
   {
      rev = rev * 10 + number % 10;
      number = number / 10;
   }
   if (n == rev)
   {
      cout << "The number is symmetrical.";
   }
   if (n != rev)
   {
      cout << "The number is not symmetrical.";
   }
}
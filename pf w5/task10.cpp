#include <iostream>
using namespace std;

void number(int num);

int main()
{
   int num;

   cout << "Enter a number (1-99): ";
   cin >> num;
   number(num);
}
void number(int num)

{
   int tens;
   int ones;

   tens = num / 10;
   ones = num % 10;
   if (num >= 20)
   {
      if (tens == 2)
      {
         cout << "Twenty";
      }
      if (tens == 3)
      {
         cout << "Thirty";
      }
      if (tens == 4)
      {
         cout << "Forty";
      }
      if (tens == 5)
      {
         cout << "Fifty";
      }
      if (tens == 6)
      {
         cout << "Sixty";
      }
      if (tens == 7)
      {
         cout << "Seventy";
      }
      if (tens == 8)
      {
         cout << "Eighty";
      }
      if (tens == 9)
      {
         cout << "Ninety";
      }
      if (ones == 1)
      {
         cout << "One";
      }
      if (ones == 2)
      {
         cout << "Two";
      }
      if (ones == 3)
      {
         cout << "Three";
      }
      if (ones == 4)
      {
         cout << "Four";
      }
      if (ones == 5)
      {
         cout << "Five";
      }
      if (ones == 6)
      {
         cout << "Six";
      }
      if (ones == 7)
      {
         cout << "Seven";
      }
      if (ones == 8)
      {
         cout << "Eight";
      }
      if (ones == 9)
      {
         cout << "Nine";
      }
   }
   if (num < 10)
   {
      if (ones == 1)
      {
         cout << "One";
      }
      if (ones == 2)
      {
         cout << "Two";
      }
      if (ones == 3)
      {
         cout << "Three";
      }
      if (ones == 4)
      {
         cout << "Four";
      }
      if (ones == 5)
      {
         cout << "Five";
      }
      if (ones == 6)
      {
         cout << "Six";
      }
      if (ones == 7)
      {
         cout << "Seven";
      }
      if (ones == 8)
      {
         cout << "Eight";
      }
      if (ones == 9)
      {
         cout << "Nine";
      }
   }
   if (num == 10)
   {
      cout << "Ten";
   }
   if (num == 11)
   {
      cout << "Eleven";
   }
   if (num == 12)
   {
      cout << "Twelve";
   }
   if (num == 13)
   {
      cout << "Thirteen";
   }
   if (num == 14)
   {
      cout << "Fourteen";
   }
   if (num == 15)
   {
      cout << "Fifteen";
   }
   if (num == 16)
   {
      cout << "Sixteen";
   }
   if (num == 17)
   {
      cout << "Seventeen";
   }
   if (num == 18)
   {
      cout << "Eighteen";
   }
   if (num == 19)
   {
      cout << "Nineteen";
   }
}

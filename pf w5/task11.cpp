#include <iostream>
using namespace std;

string calculatepoolstate(float vol, float pipe1, float pipe2, float hour);

main()
{
   float vol, pipe1, pipe2, hour;
   string result;
   cout << "Enter the volume of pool in litres: ";
   cin >> vol;
   cout << "Enter flow rate of the first pipe per hour: ";
   cin >> pipe1;
   cout << "Enter flow rate of the second pipe per hour: ";
   cin >> pipe2;
   cout << "Enter hours that the worker is absent: ";
   cin >> hour;
   result = calculatepoolstate(vol, pipe1, pipe2, hour);
   cout << result;
   return 0;
}
string calculatepoolstate(float vol, float pipe1, float pipe2, float hour)
{
   float full;
   float percentage;
   float percentagepipe1;
   float percentagepipe2;
   float overflow;
   string result = "";
   full = (pipe1 * hour) + (pipe2 * hour);
   percentage = (full / vol) * 100;
   percentagepipe1 = (pipe1 * hour) / full * 100;
   percentagepipe2 = (pipe2 * hour) / full * 100;
   if (full <= vol)
   {

      cout << "The pool is " << (int)(percentage) << "% full. Pipe 1: " << (int)percentagepipe1 << "%. Pipe 2: " << (int)percentagepipe2 << "%.";
   }
   else
   {
      overflow = full - vol;
      cout << "For " << hour << " hours, the pool overflows with " << overflow << " litres.";
   }
   return result;
}
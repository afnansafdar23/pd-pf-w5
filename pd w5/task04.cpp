#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

string projectTimeCalculator(int neededhours, int days, int workers);

main()
{
   int neededhours, days, workers;
   cout << "Enter the needed hours: ";
   cin >> neededhours;
   cout << "Enter the days that the firm has: ";
   cin >> days;
   cout << "Enter the number of all workers: ";
   cin >> workers;
   string result;
   result = projectTimeCalculator(neededhours, days, workers);
   cout << result;
}
string projectTimeCalculator(int neededhours, int days, int workers)
{
   float timetaken, percentage, finaltime;
   int answer;
   timetaken = 10 * workers * days;
   percentage = (timetaken * 10) / 100;
   abs(percentage);
   finaltime = timetaken - percentage;
   if (finaltime >= neededhours)
   {
      answer = finaltime - neededhours;
      return "Yes! " + to_string(answer) + " hours left.";
   }
   if (finaltime < neededhours)
   {
      answer = neededhours - finaltime;
      return "Not enough time! " + to_string(answer) + " hours needed.";
   }
}

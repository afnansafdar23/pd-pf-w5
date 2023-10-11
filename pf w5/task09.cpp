#include <iostream>
using namespace std;

void timetravel(int hour, int min);
int main()
{
   int hour;
   int min;
   cout << "Enter Hours: ";
   cin >> hour;
   cout << "Enter Minutes: ";
   cin >> min;
   timetravel(hour, min);
}
void timetravel(int hour, int min)
{
   int totalmin;
   int timeafter;
   int afterhour;
   int aftermin;
   totalmin = hour * 60;
   timeafter = totalmin + min + 15;
   afterhour = timeafter / 60;
   aftermin = timeafter % 60;
   cout << afterhour << ":" << aftermin;
}
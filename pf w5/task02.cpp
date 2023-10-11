#include <iostream>
using namespace std;

float volume(float length, float width, float height, string units);

int main()
{
   float length;
   float width;
   float height;
   string units;
   cout << "Enter the length of the pyramid (in meters): ";
   cin >> length;
   cout << "Enter the width of the pyramid (in meters): ";
   cin >> width;
   cout << "Enter the height of the pyramid (in meters): ";
   cin >> height;
   cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
   cin >> units;
   float result;
   result = volume(length, width, height, units);
   cout << "The volume of the pyramid is: " << result << " cubic " << units;
}
float volume(float length, float width, float height, string units)
{
   float volume;
   volume = (length * width * height) / 3;
   if (units == "millimeters")
   {
      volume = volume * 1000000000;
   }
   if (units == "centimeters")
   {
      volume = volume * 1000000;
   }
   if (units == "kilometers")
   {
      volume = volume / 1000000000;
   }
   return volume;
}
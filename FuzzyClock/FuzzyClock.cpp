#include <iostream>
#include <ctime>

using namespace std;
int main() 
{
  // current system time
  time_t sysTime = time(0);
  tm *localTime = localtime(&sysTime);
  int hour = localTime->tm_hour;
  int minutes = localTime->tm_min;
  
  string fuzzy1;  // holds the hour
  string fuzzy2;  // holds the minutes
  
  // translates int minutes to string fuzzy2
  if (minutes >= 0 && minutes < 5) 
  {
      fuzzy2 = "around ";
  } 
  else if (minutes >= 5 && minutes < 10)
  {
      fuzzy2 = "five after ";
  }
  else if (minutes >= 10 && minutes < 15)
  {
      fuzzy2 = "ten after ";
  }
  else if (minutes >= 15 && minutes < 20)
  {
      fuzzy2 = "a quarter after ";
  }
  else if (minutes >= 20 && minutes < 25)
  {
      fuzzy2 = "twenty after ";
  }
  else if (minutes >= 25 && minutes < 30)
  {
      fuzzy2 = "twenty-five after ";
  }
  else if (minutes >= 30 && minutes < 35)
  {
      fuzzy2 = "half past ";
  }
  else if (minutes >= 35 && minutes < 40)
  {
      fuzzy2 = "twenty-five to ";
  }
  else if (minutes >= 40 && minutes < 45)
  {
      fuzzy2 = "twenty to ";
  }
  else if (minutes >= 45 && minutes < 50)
  {
      fuzzy2 = "a quarter to ";
  }
  else if (minutes >= 50 && minutes < 55)
  {
      fuzzy2 = "ten to ";
  }
  else if (minutes >= 55 && minutes < 57)
  {
      fuzzy2 = "five to ";
  }
  else if (minutes >= 57 && minutes <= 59)
  {
      fuzzy2 = "just about ";
  }
  else 
  {
      cout << "Time not set!" <<endl;
  }

  // if minute is after 35, advance the hour
  if (minutes >= 35)
  {
      hour = hour + 1;
  }

  // translates int hour to string fuzzy1
  if (hour == 1 || hour == 13)
  {
      fuzzy1 = "one";
  }
  else if (hour == 2 || hour == 14)
  {
      fuzzy1 = "two";
  }
  else if (hour == 3 || hour == 15)
  {
      fuzzy1 = "three";
  }
  else if (hour == 4 || hour == 16)
  {
      fuzzy1 = "four";
  }
  else if (hour == 5 || hour == 17)
  {
      fuzzy1 = "five";
  }
  else if (hour == 6 || hour == 18)
  {
      fuzzy1 = "six";
  }
  else if (hour == 7 || hour == 19)
  {
      fuzzy1 = "seven";
  }
  else if (hour == 8 || hour == 20)
  {
      fuzzy1 = "eight";
  }
  else if (hour == 9 || hour == 21)
  {
      fuzzy1 = "nine";
  }
  else if (hour == 10 || hour == 22)
  {
      fuzzy1 = "ten";
  }
  else if (hour == 11 || hour == 23)
  {
      fuzzy1 = "eleven";
  }
  else if (hour == 12 || hour == 24)
      if (hour == 12)
      {
          fuzzy1 = "noon";
      }
      else 
      {
          fuzzy1 = "midnight";
      }
  else
  {
      cout << "Time not set!" << endl;
  }

  // putting it all together:
  string fuzzy = fuzzy2 + fuzzy1;
  cout << "It is " << fuzzy << endl;
  
  return 0;
}

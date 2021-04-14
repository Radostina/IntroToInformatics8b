  #include <iostream>
using namespace std;

int main() {
    
   int headsToday;
   int Sandwiches2DaysAgo = 1;
   int Sandwiches1DayAgo = 2;
   int daysFromNewYear = 1;
   int n;
   cin >> n;
   while(daysFromNewYear != n  ){

     Sandwiches2DaysAgo = Sandwiches1DayAgo;
     Sandwiches1DayAgo = headsToday - daysFromNewYear;
     headsToday = headsToday + Sandwiches2DaysAgo;

      daysFromNewYear++;
   }
int a = 5;
   cout << headsToday;
}

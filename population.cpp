#include <iostream>
#include <math.h>
using namespace std;
//Seconds per year= 365*24*60*60=31,536,000
#define SECONDS_PER_YEAR 31536000
#define CURRENT_POPULATION 312032486

int main(){

    double population = CURRENT_POPULATION;
    //Constants expressions
    constexpr double births_per_year= SECONDS_PER_YEAR / 7.0;
    constexpr double deaths_per_year= SECONDS_PER_YEAR / 13.0;
    constexpr double immigrants_per_year= SECONDS_PER_YEAR / 45.0;
    constexpr double net_change_per_year= births_per_year - deaths_per_year + immigrants_per_year;

    //The while loop
    for(int year=1; year<=5; year++){
        population += net_change_per_year;
        cout << "Population after year " << year << ": " << llround(population) << endl;
    }

    

  
    return 0;
}

#include <iostream>
using namespace std;

int main() {
 
     int num_cities = 3;
     int week = 7;

   
    int temperatures[num_cities][week];

 
    cout << "Enter temperature data for " << num_cities << " cities for " << week << " days:\n";

   
    for (int i = 0; i <num_cities; ++i) {
        cout << "Info for City " << (i + 1) << ":\n";

        for (int j = 0; j < week; ++j) {
            cout << "   Temperature for Day " << (j + 1) << ": ";
            cin >> temperatures[i][j];
        }
    }

   
    cout << "\nTemperature Data Summary:\n";
    cout << "City    Day1    Day2    Day3    Day4    Day5    Day6    Day7    Weekly Average\n";
    cout << "--------------------------------------------------------------------------------\n";

   

    double total_week_temp = 0;

   
    for (int i = 0; i < num_cities; ++i) {
        double total_city_temp = 0;
    
       
        cout.width(8);
        cout << left << (i + 1);

 
        for (int j = 0; j < week; ++j) {
            cout.width(8);
            cout << temperatures[i][j];
            total_city_temp += temperatures[i][j];
        }

       
        double avg_city_week = total_city_temp / week;
        cout.width(8);
        cout << avg_city_week << "\n";

        total_week_temp += total_city_temp;
    }

    cout << "--------------------------------------------------------------------------------\n";

   
    cout << "Daily Average:";
    for (int j = 0; j < week; ++j) {
        double total_day_temp = 0;
        for (int i = 0; i < num_cities; ++i) {
            total_day_temp += temperatures[i][j];
        }
        double avg_day = total_day_temp / num_cities;
        cout.width(8);
        cout << avg_day;
    }
    cout << "\n";


    double overall_avg_week = total_week_temp / (num_cities * week);
    cout << "\nOverall Weekly Average Temperature: " << overall_avg_week << "\n";

    return 0;
}


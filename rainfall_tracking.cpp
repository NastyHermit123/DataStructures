#include <iostream>

using namespace std;

int main() {
   
    int rainfall[3][4];

 
    cout << "Enter rainfall data for 3 cities:\n";

 
    for (int i = 0; i < 3; ++i) {
        cout << "Info for City " << (i + 1) << ":\n";
       
        for (int j = 0; j < 4; ++j) {
            cout << "  Rainfall for Month " << (j + 1) << ": ";
            cin >> rainfall[i][j];
        }
    }

   
    cout << "\nRainfall Data Summary:\n";
    cout << "City    Month1  Month2  Month3  Month4   Average\n";
   
    cout << "--------------------------------------------------\n";  

   
    for (int i = 0; i < 3; ++i) {
        double total_rainfall_city = 0;

     
        for (int j = 0; j < 4; ++j) {
            total_rainfall_city += rainfall[i][j];
        }

 
        double avg_rain_city = total_rainfall_city / 4.0;

     
        cout.width(8);
        cout << left << (i + 1);

       
        for (int j = 0; j < 4; ++j) {
            cout.width(8);
            cout << rainfall[i][j];
        }
       
       
        cout.width(8);
        cout << avg_rain_city << "\n";
    }

    return 0;
}

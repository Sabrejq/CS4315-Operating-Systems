/*Team 12 HW3
 *
 * Dung Dang & Julio Quintero
 *
 */

#include <iostream>
#include <iomanip>  // for set precision
using namespace std;

struct monthData {
   int landed;
   int departed;
   int maxDailyLanded;
   int minDailyLanded;
};

const int num_months = 12;


int main() {

    monthData *allMonthData = new monthData[num_months];


    for (int i = 0; i < 12; ++i) {
        cout << "Enter the total number of planes that landed in month "<< i+1 << ": ";
        cin >> allMonthData[i].landed;
        while(allMonthData[i].landed < 0){
            cerr<< "Please use number above or equal to zero: " << endl;
            cin >> allMonthData[i].landed;
        }

        cout << "Enter the total number of planes that departed in month " << i+1 << ": ";
        cin >> allMonthData[i].departed;
        while(allMonthData[i].departed < 0){
            cerr<< "Please use number above or equal to zero: " << endl;
            cin >> allMonthData[i].departed;
        }


        cout << "Enter the greatest number of planes to land in a day during month " << i+1 << ": ";
        cin >> allMonthData[i].maxDailyLanded;
        while(allMonthData[i].maxDailyLanded < 0){
            cerr<< "Please use number above or equal to zero: " << endl;
            cin >> allMonthData[i].maxDailyLanded;
        }

        cout << "Enter the least number of planes to land in a day during month " << i+1 << ": ";
        cin >> allMonthData[i].minDailyLanded;
        while(allMonthData[i].minDailyLanded < 0){
            cerr<< "Please use number above or equal to zero: " << endl;
            cin >> allMonthData[i].minDailyLanded;
        }

        cout << '\n';
    }

    int totalLanded = 0;
    int totalDeparted = 0;
    int maxLandedMonth = 0;
    int minLandedMonth = 0;

    for (int j = 0; j < num_months; j++) {
        totalLanded += allMonthData[j].landed;
        totalDeparted += allMonthData[j].departed;

        if (j != 0)
        {
            if (allMonthData[j].maxDailyLanded > allMonthData[maxLandedMonth].maxDailyLanded)
            {
                maxLandedMonth = j;
            }
            if (allMonthData[j].minDailyLanded < allMonthData[minLandedMonth].minDailyLanded)
            {
                minLandedMonth = j;
            }
        }
    }


    cout << fixed <<setprecision(1);

    cout << "Average number of planes landed per month: "
              << (static_cast<float>(totalLanded) / num_months) << '\n';

    cout << "Average number of planes departed per month: "
              << (static_cast<float>(totalDeparted) / num_months) << '\n';

    cout << "Total number of planes landed: " << totalLanded << '\n';

    cout << "Total number of planes departed: " << totalDeparted << '\n';

    cout << "Greatest number of planes landed on one day: "
              << allMonthData[maxLandedMonth].maxDailyLanded
              << " (Month " << maxLandedMonth << ")\n";

    cout << "Least number of planes landed on one day: "
              << allMonthData[minLandedMonth].minDailyLanded
              << " (Month " << minLandedMonth << ")\n";

    return 0;
}

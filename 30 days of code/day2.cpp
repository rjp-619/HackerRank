//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         10th May, 2020
//	Description:  Input Format
//			There are 3 lines of numeric input:
//			The first line has a double, mealCost  (the cost of the meal before tax and tip).
//			The second line has an integer, tipPercent (the percentage of mealCost being added as tip).
//			The third line has an integer, taxPercent (the percentage of mealCost being added as tax).
//		      Output Format
//			Print the total meal cost, where  is the rounded integer result of the 
//			entire bill ( with added tax and tip).
//	Version:      g++ version 9.3.0
//
//********************************************************************************************** //

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    //int tip=tip_percent;
    double tip=(tip_percent*0.01)*meal_cost;
   // cout<<tip<<endl;
    double tax=(tax_percent*0.01)*meal_cost;
    //cout<<tax<<endl;
    int out=round((tip+tax+meal_cost));
    cout<<out<<endl;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    //cout<<meal_cost<<endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //cout<<meal_cost<<endl;
    int tip_percent;
    cin >> tip_percent;
    //cout<<tip_percent<<endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //cout<<tip_percent<<endl;
    int tax_percent;
    cin >> tax_percent;
    //cout<<tax_percent<<endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //cout<<tax_percent<<endl;
    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}


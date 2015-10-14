//
//  main.cpp
//  Proy1Ejercicio3
//
//  Created by Zareek Galvan on 10/7/15.
//  Copyright © 2015 Trisquel Labs. All rights reserved.
//

//Team Members: Armando Galván & Oscar Leal

#include <iostream>
#include <iomanip>
using namespace std;

double maxConsecutiveSumatory(double arr[], int n)
{
    double tempC = 0, max = 0;
    
    for (int i = 0; i < n; i++)
    {
        tempC = tempC + arr[i];
        if (tempC < 0)
        {
            tempC = 0;
        }
        if (tempC >= max)
        {
            max = tempC;
        }
    }
    return max;
}

int main()
{
    int cases = 0;
    
    cin >> cases;
    
    for (int c = 0; c < cases; c++)
    {
        int length;
        cin >> length;
        double arr[length];
        for (int i = 0; i < length; i++)
        {
            cin >> arr[i];
        }
        cout<<fixed<<setprecision(2);
        cout<<"case "<<c+1<<": "<<maxConsecutiveSumatory(arr, length)<<endl;
        
    }
}
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: homayoun
 *
 * Created on December 5, 2017, 7:55 PM
 */

#include <cmath>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int size(600000000);
    double *sinValue = new double [size];

    //#pragma omp parallel
    //    {
    //        cout << "Hello world" << endl;
    //    }
#pragma omp parallel for
    for (int i = 0; i < size; i++) {
        sinValue[i] = sin(2*i*3.141592)*cos(2*i*3.141592);
    }

    return 0;
}


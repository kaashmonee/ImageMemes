/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: skanda
 *
 * Created on April 16, 2017, 10:27 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int number;
    cout<<"What is the number? ";
    cin>>number;
    if (number%2==0) cout<<"The number is even!";
    else cout<<"The number is odd :(";
    
    return 0;
}


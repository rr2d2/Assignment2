// main.cpp
//g++-4.7 -std=c++11 *.cpp will compile all files in working directory
//gcc-4.7 -std=c++11 *.cpp
//gcc -std=c++11 *.cpp
//
//gcc main.c -o main.out creates executable file
//run by ./.main.out
#include <iostream>
#include <sstream>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdexcept>
#include "generic.h"//remeber to change

using namespace std;

int main(){
    try{
        string filename;
        stringstream ss;
        int mod,random;
        //increasing order
        for (int i =2; i<6;i++){//ordered files
            ofstream myfile;
            ss <<"inputInc"<<(i-1)<<".txt";//create filename
            filename = ss.str();
            cout<<filename<<endl;
            myfile.open (filename);//create and open file
            myfile <<pow(10,i)<<"   ";//give first number in file count of numbers
            
            for (int j = 0; j<pow(10,i); j++) {//all numbers in order
                myfile <<j<<" ";
            }
            
            myfile.close();
            cout<<"done\n";
            ss.str(string());
        }
        //decreasing order
        for (int i =2; i<6;i++){//ordered files
            ofstream myfile;
            ss <<"inputDec"<<(i-1)<<".txt";//create filename
            filename = ss.str();
            cout<<filename<<endl;
            myfile.open (filename);//create and open file
            myfile <<pow(10,i)<<"   ";//give first number in file count of numbers
            
            for (int j = pow(10,i); 0<j; j--) {//all numbers in order
                myfile <<j<<" ";
            }
            
            myfile.close();
            cout<<"done\n";
            ss.str(string());
        }
        //random order
        for (int i =2; i<6;i++){//ordered files
            ofstream myfile;
            ss <<"inputRan"<<(i-1)<<".txt";//create filename
            filename = ss.str();
            cout<<filename<<endl;
            myfile.open (filename);//create and open file
            myfile <<pow(10,i)<<"   ";//give first number in file count of numbers
            
            for (int j = pow(10,i); 0<j; j--) {//all numbers in order
                mod = pow(10,i-1);
                random = rand() %mod;
                myfile <<random<<" ";
            }
            
            myfile.close();
            cout<<"done\n";
            ss.str(string());
        }
        
    }
    catch(exception &error){
        cerr << "Error: " << error.what() << endl;
    }
}
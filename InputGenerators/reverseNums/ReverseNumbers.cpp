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
#include <vector>

using namespace std;

int main(){
    try{
        stringstream ss1,ss2;
        string filename1,filename2;
        int num,n;
        vector<int> vec;
        
        for (int i=2; i<6; i++) {
            ofstream fs;
            ss1 <<"inputDec"<<(i-1)<<".txt";//create filename
            filename1 = ss1.str();
            cout<<filename1<<endl;
            fs.open (filename1);//create and open file
            
            ifstream myfile;
            ss2 <<"InputInc"<<(i-1)<<".txt";//create filename
            filename2 = ss2.str();
            cout<<filename2<<endl;
            myfile.open (filename2);//create and open file
            
            while (myfile>>num) {
                vec.push_back(num);
            }
            n = vec.size();
            for (int j=0; j<n; j++) {
               fs<<vec[n-j]<<" ";
            }
            
            fs.close();
            cout<<"done\n";
            ss1.str(string());
            
            myfile.close();
            cout<<"done\n";
            ss2.str(string());
        }
    }
    catch(exception &error){
        cerr << "Error: " << error.what() << endl;
    }
}
//
//  ReverseNums.cpp
//  
//
//  Created by Cory Thompson on 9/26/14.
//
//

#include <iostream>
#include <stack>
#include <fstream>
#include <sstream>
#include <stdexcept>

using namespace std;

int main() {
    try {
        stack<int> stack;
        stringstream ss1,ss2;
        string filename1,filename2;
        int num,n;
        
        for (int i=2; i<6; i++) {
            ofstream fs;
            ss1 <<"inputDec"<<(i-1)<<".txt";    //create filename
            filename1 = ss1.str();
            cout<<filename1<<endl;
            fs.open (filename1);                //create and open file
            
            ifstream myfile;
            ss2 <<"InputInc"<<(i-1)<<".txt";    //create filename
            filename2 = ss2.str();
            cout<<filename2<<endl;
            myfile.open (filename2);            //create and open file
            
            while (myfile>>num) {
                stack.push(num);
            }
            fs << stack.size()-1 << " ";        //print num of elements first
            while (!stack.empty()) {
                if (stack.size() != 1)          //ignore last element
                    fs<<stack.top()<<" ";       //prints element
                stack.pop();                    //pops off top of stack
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

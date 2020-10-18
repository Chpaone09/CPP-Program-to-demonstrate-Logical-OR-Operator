/*
***********************************************************

Topic   : Program to demonstrate Logical OR ( || ) Operator in cpp.
Author  : Chpaone09®
Date    : Oct 19, 2020

************************************************************
*/

#include <iostream>
using namespace std;

int main(){

        bool a = true;
        bool b = true;
        bool c = false;
        bool d = false;

        if(a || b){
            cout<<"\n\n\t True if either A or B is True. ";
        }

        if(a || c){
            cout<<"\n\n\t True if either A or C is True. ";
        }

        if(b || c){
            cout<<"\n\n\t True if either B or C is True. ";
        }

        if(c || d){
            cout<<"\n\n\t True if either C or D is True. ";
        }



}

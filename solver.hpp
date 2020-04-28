#pragma once
#include <complex>
#include <iostream>

using namespace std;

namespace solver 
{
    
    //define real variable class
    class RealVariable
    {
         private:
         double num; 

        public:
                 

                 //define varibales we may nedd
                 int power = 1; //as we did in opp
                 double coff = 1; //as we did in opp
                 double answer = 0; //as we did in opp

                 //define find values
                 int index_x=0; //we may use it to find x
                 int index_coff=0;//we may use it to find coff
                 int index_op=0;//we may use it to find op

                 //define varibles for now use

                // ==
                friend RealVariable& operator==(RealVariable& y, int x);//define: x=int
                friend RealVariable& operator==(RealVariable& y,  double x);//define: x=double
                friend RealVariable& operator==(int x, RealVariable& y);//define: int=x
                friend RealVariable& operator==( double x, RealVariable& y);//define: double=x
                friend RealVariable& operator==(RealVariable& x, RealVariable& y);//define: x1=x2

                //+
                friend RealVariable& operator+(int x, RealVariable& y);//define: int+x
                friend RealVariable& operator+( double x, RealVariable& y);//define: double+x
                friend RealVariable& operator+(RealVariable& x, RealVariable& y);//define: x1+x2
                friend RealVariable& operator+(RealVariable& y,  double x);//define: x+double
                friend RealVariable& operator+(RealVariable& y, int x);//define: x+int

                //-
                friend RealVariable& operator-(RealVariable& y, int x);//define: x-int
                friend RealVariable& operator-(RealVariable& y,  double x);//define: x-double
                friend RealVariable& operator-(RealVariable& x, RealVariable& y);//define: x1-x2
                friend RealVariable& operator-(RealVariable& y);//define: x
                friend RealVariable& operator-(int x,RealVariable& y);//define: int-x
                friend RealVariable& operator-( double x,RealVariable& y);//define: double-x
                

                //*
                friend RealVariable& operator*(int x, RealVariable& y); //define: int*x
                friend RealVariable& operator*( double x, RealVariable& y);//define: dobule*x
                friend RealVariable& operator*(RealVariable& y, int x);//define: x*int
                friend RealVariable& operator*(RealVariable& y,  double x);//define: x*double
                
                //^
                friend RealVariable& operator^(RealVariable& y, int x);//define: x^int

                // /
                friend RealVariable& operator/(RealVariable& y,  double x);////define: x/double

    };


    //define complex variable class
    class ComplexVariable 
    {
        private:
        double realNum,imaginaryNum;

        public:
        

        //define varibales we may nedd
        complex <int> power = 1; //as we did in opp
        complex <double> coff = 1; //as we did in opp
        complex <double>  answer = 0; //as we did in opp

        //define find values
        int index_comp_x=0; //we may use it to find x
        int index_comp_coff=0;//we may use it to find coff
        int index_comp_op=0;//we may use it to find op

        //define varibles for now use

        //==
        friend ComplexVariable& operator==(ComplexVariable& y, int x);//define: x=int
        friend ComplexVariable& operator==(ComplexVariable& y,  double x);//define: x=double
        friend ComplexVariable& operator==(ComplexVariable& x, ComplexVariable& y);//define: x1=x2
        friend ComplexVariable& operator==(int x, ComplexVariable& y);//define: int=x
        friend ComplexVariable& operator==( double x, ComplexVariable& y);//define: double=x

        //+
        friend ComplexVariable& operator+(int x, ComplexVariable& y);//define: int+x
        friend ComplexVariable& operator+( double x, ComplexVariable& y);//define: double+x
        friend ComplexVariable& operator+(ComplexVariable& x, ComplexVariable& y);//define: x1+x2
        friend ComplexVariable& operator+(ComplexVariable& y,  double x);//define: x+double
        friend ComplexVariable& operator+(ComplexVariable& y, int x);//define: x+int
        friend ComplexVariable& operator+(ComplexVariable& x, complex<double> y);//define: x+x(double)

        //-
        friend ComplexVariable& operator-(ComplexVariable& y, int x);//define: x-int
        friend ComplexVariable& operator-(int x, ComplexVariable& y);//define: int-x
        friend ComplexVariable& operator-( double x, ComplexVariable& y);//define: double-x
        friend ComplexVariable& operator-(ComplexVariable& y,  double x);//define: x-double
        friend ComplexVariable& operator-(ComplexVariable& x, ComplexVariable& y);//define: x1-x2
        friend ComplexVariable& operator-(ComplexVariable& y);//define: x
        friend ComplexVariable &operator-(complex<double> x, ComplexVariable &y);//define: x(double)-x
        

        //*
        friend ComplexVariable& operator*(int x ,ComplexVariable& y);//define: int*x
        friend ComplexVariable &operator*(complex<double> x, ComplexVariable &y);//define: x(double)*x
        //friend RealVariable &operator*(double x, RealVariable &y);//define: double*x
        friend ComplexVariable& operator*(ComplexVariable& y, int x);//define: x*double


        // /
        friend ComplexVariable& operator/(ComplexVariable& y,  double x);//define: x/double

        //^
        friend ComplexVariable& operator^(ComplexVariable& y, int x);//define: x^int
        
        

    };

    //solve func
    double solve(RealVariable &x); //get real variable and return answer in double.
    complex<double> solve(ComplexVariable &x); //get complex variable and return answer in complex double.
    

}


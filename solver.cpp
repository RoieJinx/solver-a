#include "solver.hpp"
#include <complex>

using namespace solver;


double solver::solve(RealVariable &x)
{
    return 0.0;
}

complex<double> solver::solve(ComplexVariable &x)
{
    complex <double> a=1.0;
    return a;
}


//RealVariable class
//Default constructor
RealVariable::RealVariable():number(0){}

//Parameters constructor
RealVariable::RealVariable(double number):number(number){}

//==
RealVariable& solver::operator==(RealVariable& y, int x)
{
    return y;
}

RealVariable& solver::operator==(RealVariable& y, const double x)
{
    return y;
}

RealVariable& solver::operator==(int x, RealVariable& y)
{
    return y;
}

RealVariable& solver::operator==(const double x, RealVariable& y)
{
    return y;
}

RealVariable& solver::operator==(RealVariable& x, RealVariable& y)
{
    return y;
}

//+
RealVariable& solver::operator+(int x, RealVariable& y)
{
    return y;
}

RealVariable& solver::operator+(const double x, RealVariable& y)
{
    return y;
}

RealVariable& solver::operator+(RealVariable& x, RealVariable& y)
{
    return y;
}

RealVariable& solver::operator+(RealVariable& y, const double x)
{
    return y;
}

RealVariable& solver::operator+(RealVariable& y, int x)
{
    return y;
}

//-
RealVariable& solver::operator-(RealVariable& y, int x)
{
    return y;
}

RealVariable& solver::operator-(RealVariable& y, const double x)
{
    return y;
}

RealVariable& solver::operator-(RealVariable& x, RealVariable& y)
{
    return y;
}

RealVariable& solver::operator-(RealVariable& y)
{
    return y;
}

RealVariable& solver::operator-(int x,RealVariable& y)
{
    return y;
}

RealVariable& solver::operator-(const double x,RealVariable& y)
{
    return y;
}

//*
RealVariable& solver::operator*(int x, RealVariable& y)
{
   return y; 
}

RealVariable& solver::operator*(const double x, RealVariable& y)
{
   return y; 
}

RealVariable& solver::operator*(RealVariable& y, int x)
{
   return y; 
}

RealVariable& solver::operator*(RealVariable& y,const double x)
{
   return y; 
}

//^
RealVariable& solver::operator^(RealVariable& y, int x)
{
    return y;
}

// /
RealVariable& solver::operator/(RealVariable& y, const double x)
{
    return y;
}


//complex
ComplexVariable::ComplexVariable():realnumber(0),imagenumber(0){}

//Parameters constructor
ComplexVariable::ComplexVariable(double realnumber,double imagenumber):realnumber(realnumber),imagenumber(imagenumber){}
//==
ComplexVariable& solver::operator==(ComplexVariable& y, const double x)
{
    return y;
}

ComplexVariable& solver::operator==(ComplexVariable& x, ComplexVariable& y)
{
    return y;
}

ComplexVariable& solver::operator==(int x, ComplexVariable& y)
{
    return y;
}

ComplexVariable& solver::operator==(const double x, ComplexVariable& y)
{
    return y;
}

ComplexVariable& solver::operator==(ComplexVariable& y, int x)
{
    return y;
}

//+
ComplexVariable& solver::operator+(int x, ComplexVariable& y)
{
    return y;
}

ComplexVariable& solver::operator+(const double x, ComplexVariable& y)
{
    return y;
}

ComplexVariable& solver::operator+(ComplexVariable& x, ComplexVariable& y)
{
    return y;
}

ComplexVariable& solver::operator+(ComplexVariable& y, const double x)
{
    return y;
}

ComplexVariable& solver::operator+(ComplexVariable& y, int x)
{
    return y;
}

ComplexVariable& solver::operator+(ComplexVariable& x, complex<double> y)
{
    return x;
}

//-
ComplexVariable& solver::operator-(ComplexVariable& y, int x)
{
    return y;
}

ComplexVariable& solver::operator-(int x, ComplexVariable& y)
{
    return y;
}

ComplexVariable& solver::operator-(const double x, ComplexVariable& y)
{
    return y;
}

ComplexVariable& solver::operator-(ComplexVariable& y, const double x)
{
    return y;
}

ComplexVariable& solver::operator-(ComplexVariable& x, ComplexVariable& y)
{
    return y;
}

ComplexVariable& solver::operator-(ComplexVariable& y)
{
    return y;
}

ComplexVariable& solver::operator-(complex<double> x, ComplexVariable &y)
{
    return y;
}

//*
ComplexVariable& solver::operator*(int x ,ComplexVariable& y)
{
    return y;
}

ComplexVariable& solver::operator*(complex<double> x, ComplexVariable &y)
{
    return y;
}



ComplexVariable& solver::operator*(ComplexVariable& y, int x)
{
    return y;
}

//^
ComplexVariable& solver::operator^(ComplexVariable& y, int x)
{
    return y;
}

// /
ComplexVariable& solver::operator/(ComplexVariable& y, const double x)
{
    return y;
}
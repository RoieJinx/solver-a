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


//==
RealVariable& solver::operator==(RealVariable& y, int x)
{
    return y;
}

RealVariable& solver::operator==(RealVariable& y,  double x)
{
    return y;
}

RealVariable& solver::operator==(int x, RealVariable& y)
{
    return y;
}

RealVariable& solver::operator==( double x, RealVariable& y)
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

RealVariable& solver::operator+( double x, RealVariable& y)
{
    return y;
}

RealVariable& solver::operator+(RealVariable& x, RealVariable& y)
{
    return y;
}

RealVariable& solver::operator+(RealVariable& y,  double x)
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

RealVariable& solver::operator-(RealVariable& y,  double x)
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

RealVariable& solver::operator-( double x,RealVariable& y)
{
    return y;
}

//*
RealVariable& solver::operator*(int x, RealVariable& y)
{
   return y; 
}

RealVariable& solver::operator*( double x, RealVariable& y)
{
   return y; 
}

RealVariable& solver::operator*(RealVariable& y, int x)
{
   return y; 
}

RealVariable& solver::operator*(RealVariable& y, double x)
{
   return y; 
}

//^
RealVariable& solver::operator^(RealVariable& y, int x)
{
    return y;
}

// /
RealVariable& solver::operator/(RealVariable& y,  double x)
{
    return y;
}


//complex

//==
ComplexVariable& solver::operator==(ComplexVariable& y,  double x)
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

ComplexVariable& solver::operator==( double x, ComplexVariable& y)
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

ComplexVariable& solver::operator+( double x, ComplexVariable& y)
{
    return y;
}

ComplexVariable& solver::operator+(ComplexVariable& x, ComplexVariable& y)
{
    return y;
}

ComplexVariable& solver::operator+(ComplexVariable& y,  double x)
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

ComplexVariable& solver::operator-( double x, ComplexVariable& y)
{
    return y;
}

ComplexVariable& solver::operator-(ComplexVariable& y,  double x)
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
ComplexVariable& solver::operator/(ComplexVariable& y,  double x)
{
    return y;
}
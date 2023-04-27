//
// Created by josorian on 27/04/2023.
//

#include "mjday.h"
double myday(double y,double m,double d,double h,double min,double s){
    double a =(14-m)/12;
    double Y = y + 4800 - a;
    double M = m + 12 * a - 3;
    double JDN = d + (153 * min + 2) / 5 + 365 * Y + Y / 4 - Y / 100 + Y / 400 - 32045;
    double JD = JDN + (h - 12) / 24.0 + min / 1440.0 + s / 86400.0;
    return JD;
}
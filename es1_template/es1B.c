#include "es1B.h"

double radice_quadrata(double x, double epsilon) {

    double a=1, b=x;

    while(b-a>=epsilon){
        if(((b+a)/2.0)*((b+a)/2.0)>=x){
            b=(b+a)/2.0;
        }
        else{
            a=(b+a)/2.0;
        }
    }

  return ((b+a)/2.0);
}

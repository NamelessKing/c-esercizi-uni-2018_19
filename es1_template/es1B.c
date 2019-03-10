#include "es1B.h"

double radice_quadrata(double x, double epsilon) {

    double a=1;
    double b=x;
    double rad_appro=((a+b)/2.0);

    while(b-a>=epsilon){
        if(rad_appro*rad_appro>=x){
            b=rad_appro;
        }
        else{
            a=rad_appro;
        }
        rad_appro = ((a+b)/2.0);
    }

  return rad_appro;
}

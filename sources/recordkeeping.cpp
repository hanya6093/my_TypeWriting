#include "recordkeeping.h"

Recordkeeping::Recordkeeping():
    is_Ch(false),
    com_index(0),
    speed_arg(0),
    speed_max(0),
    speed_min(0),
    correct_rate(0),
    typing_time(0)
{

}


Recordkeeping::Recordkeeping(double sp_arg, double sp_max, double sp_min,
                             double co_rate, unsigned  ti, bool flag)
{
    speed_arg = sp_arg;
    speed_max = sp_max;
    speed_min = sp_min;
    typing_time = ti;
    correct_rate = co_rate;
    is_Ch = flag;
}

double Recordkeeping::Com_index()
{
    double com_index;
    if(!is_Ch){
        double y1 = (double)speed_arg/100.;
        double y2 = (double)speed_max/300.;
        double y3 = (double)speed_min/(double)speed_arg;
        com_index = 0.6*y1 + 0.2*y2 + 0.2*y3;
    }
    else{
        double y1 = (double)speed_arg/40.;
        double y2 = (double)speed_max/150.;
        double y3 = (double)speed_min/(double)speed_arg;
        com_index = 0.6*y1 + 0.2*y2 + 0.2*y3;
    }
    return com_index;
}

 Recordkeeping::~Recordkeeping()
 {

 }








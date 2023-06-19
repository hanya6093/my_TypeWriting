#ifndef RECORDKEEPING_H
#define RECORDKEEPING_H

class Recordkeeping
{
public:
    Recordkeeping();
    ~Recordkeeping();
    Recordkeeping(double sp_arg, double sp_max, double sp_min,  double co_rate, unsigned  ti, bool flag);
    double Com_index();

    bool is_Ch;                    //判断是否为英文
    double com_index;
    double speed_arg;        //平均速度
    double speed_max;        //最高速度
    double speed_min;        //最低速度
    double correct_rate;            //正确率
    unsigned  typing_time;       //打字时间


};

#endif // RECORDKEEPING_H

#ifndef _SavingAccount
#define _SavingAccount
class SavingAccount{
    private:
        int num;
        double deposit;
        float profit;
        static int order;
    public:
        SavingAccount(double ini):profit(0.05){
            //static int order = 1;
            num = order;
            ++ order;
            deposit = ini;
            //profit = 0.05;
        }

        void display();
        void calculate();
        void changerate(float new_rate);


};
#endif
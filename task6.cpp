#include<iostream>
using namespace std;

class Time{
    private:
        int hour;
        int minute;
        int second;
    public:
        void getTime(){
            string t;
            int temp;
            int hcount=0,mcount=0,scount=0;
            int t1 = hour,t2=minute,t3=second;
            while(t1>0){
                t1 = t1/10;
                hcount++;
            }
            while(t2>0){
                t2 = t2/10;
                mcount++;
            }
            while(t3>0){
                t3 = t3/10;
                scount++;
            }
            if(hcount==1){
                t+='0';
                t+=to_string(hour);
                t+=':';
            }
            else{
                t+=to_string(hour);
                t+=':'; 
            }
            if(mcount==1){
                t+='0';
                t+=to_string(minute);
                t+=':';
            }
            else{
                t+=to_string(minute);
                t+=':'; 
            }
            if(scount==1){
                t+='0';
                t+=to_string(second);
            }
            else{
                t+=to_string(second); 
            }
            cout<<"The time is : "<<t<<endl;
        }
        void setTime(){
            cout<<"Enter Time :- \nHours : ";
            cin>>hour;
            cout<<"Minutes : ";
            cin>>minute;
            cout<<"Seconds : ";
            cin>>second;
        }
        void getSeconds(){
            int sum = 0;
            sum = (hour*60*60)+(minute*60)+second;
            cout<<"Time in total seconds : "<<sum;
        }
};

int main(){
    Time t;
    t.setTime();
    t.getTime();
    t.getSeconds();
}
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;

static int p=0;

class Bus{
    private:
        int busnum,seats,booked=0;string driver,from,to;
        char passengers[30][20];
    public:
        void installBus(){
            cout<<"Enter Bus Number : ";cin>>busnum;
            cout<<"Enter Number of Seats : ";cin>>seats;
            cout<<"Enter Name of Driver : ";cin>>driver;
            cout<<"Enter From : ";cin>>from;
            cout<<"Enter Destination : ";cin>>to;
            p++;
        }
        void busReserve(){
            if(booked<seats){
                cout<<"Enter Name of Passenger : ";cin>>passengers[booked];
                cout<<"Processing .....\n";
                cout.flush();
                usleep(3000000);
                cout<<"--- Ticket Summary ---\n";
                cout<<"Bus Number : "<<busnum<<endl;
                cout<<"Name of Passenger : "<<passengers[booked]<<endl;
                cout<<"Seat Number : "<<booked+1<<endl;
                cout<<"Name of Driver : "<<driver<<endl;
                cout<<"From : "<<from<<endl;
                cout<<"To : "<<to<<endl;
                booked = booked + 1;
            }
            else{
                cout<<"No Seats Available !";
            }
        }
        void busDetails(){
            cout<<"--- Bus Details ---\n";
            cout<<"Bus Number : "<<busnum<<endl;
            cout<<"From : "<<from<<endl;
            cout<<"To : "<<to<<endl;
            cout<<"Driver Name : "<<driver<<endl;
            cout<<"\nPassenger Details :-\n";
            cout<<"Seat no.    Passenger Name";
            for(int i=0;i<booked;i++){
                cout<<endl<<i+1<<".          "<<passengers[i];
            }
        }
        void availableBus(){
            cout<<"Bus Number : "<<busnum<<endl;
            cout<<"From : "<<from<<endl;
            cout<<"To : "<<to<<endl;
            cout<<"Seats Available : "<<(seats-booked);
        }
        int busNum(){
            return busnum;
        }
};



int main(){
    Bus list[1];
    int ch,bn,c=0;
    char op = 'y';
    while(op=='y'||op=='Y'){
    cout<<"Bus Menu\n";
    cout<<"1. Add Bus\n";
    cout<<"2. Reserve Bus\n";
    cout<<"3. Bus Info.\n";
    cout<<"4. Available Buses\n";
    cout<<"5. Exit\n";
    cin>>ch;
    switch(ch){
        case 1:
            if(p>=1)
                cout<<"Bus Limit Reached";
            else
                list[p].installBus();
            break;
        case 2:
            cout<<"Enter Bus Number : ";cin>>bn;
            for(int i=0;i<5;i++){
                if(list[i].busNum() == bn){
                    c=1;
                    list[i].busReserve();
                }
            }
            if(c==0)
                cout<<"Bus Number is Invalid";
            break;
        case 3:
            c=0;
            cout<<"Enter the Bus Number : ";cin>>bn;
            for(int i=0;i<5;i++){
                if(list[i].busNum()==bn){
                    c=1;
                    list[i].busDetails();cout<<endl;
                }
            }
            if(c==0)
                cout<<"Bus Number is Invalid";
            break;
        case 4:
            for(int i=0;i<p;i++){
                list[i].availableBus();cout<<endl;
            }
            break;
        case 5:
            exit(0);
        default:
            cout<<"Invalid Option";
            break;
    }
    cout<<"\nDo you want to continue ?(y/n)";
    cin>>op;
    system("cls");
    }

}
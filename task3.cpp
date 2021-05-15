#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int age;
    int choice;
    char ok = 'y';
    while(ok=='y'||ok=='Y'){
        cout<<"\t\tInternational Voting Eligibility\n\n";
        cout<<"Choose your Country\n\n";
        cout<<"1. India"<<endl;
        cout<<"2. Austria"<<endl;
        cout<<"3. Bahrain"<<endl;
        cout<<"4. Cameroon"<<endl;
        cout<<"5. Germany"<<endl;
        cout<<"6. United States of America"<<endl;
        cout<<"\nChoose your country (1-6)"<<endl;
        cin>>choice;
        switch (choice){
            case 1:cout<<"Enter your age : ";
                cin>>age;
                if(age>=18){
                    cout<<"Congrats.You are eligible to vote !\n";
                }
                else{
                    cout<<"Sorry, you are not eligible to vote. You can vote after "<<18-age<<" years\n";    
                }
                break;

            case 2:cout<<"Enter your age : ";
                cin>>age;
                if(age>=16){
                    cout<<"Congrats.You are eligible to vote !\n";
                }
                else{
                    cout<<"Sorry, you are not eligible to vote. You can vote after "<<16-age<<" years\n";    
                }
                break;
            case 3:cout<<"Enter your age : ";
                cin>>age;
                if(age>=20){
                    cout<<"Congrats.You are eligible to vote !\n";
                }
                else{
                    cout<<"Sorry, you are not eligible to vote. You can vote after "<<20-age<<" years\n";    
                }
                break;
            case 4:cout<<"Enter your age : ";
                cin>>age;
                if(age>=21){
                    cout<<"Congrats.You are eligible to vote !\n";
                }
                else{
                    cout<<"Sorry, you are not eligible to vote. You can vote after "<<21-age<<" years\n";    
                }
                break;
            case 5:cout<<"Enter your age : ";
                cin>>age;
                if(age>=18){
                    cout<<"Congrats.You are eligible to vote !\n";
                }
                else{
                    cout<<"Sorry, you are not eligible to vote. You can vote after "<<18-age<<" years\n";    
                }
                break;
            case 6:cout<<"Enter your age : ";
                cin>>age;
                if(age>=18){
                    cout<<"Congrats.You are eligible to vote !\n";
                }
                else{
                    cout<<"Sorry, you are not eligible to vote. You can vote after "<<18-age<<" years\n";    
                }
                break;
            default:cout<<"Invalid option! Please try again\n";        
        }
        cout<<"\nDo you want to continue ? (y/n) : ";
        cin>>ok;
        system("cls");
    }

}
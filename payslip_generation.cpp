#include <iostream>

using namespace std;

int main()
{
    //program for implementing a small circle pay roll system
    //required computations:
    /*
    1-net pay for employers
    2-running pay
    3-allowances
    4-deductions
    #HRA(house rent allowance
    #SSB(SOCIAL SEcURITY BENIFIT)
    #ARA(Adhoc relief fund)
    #GP(gross pay)*/
         //variable declaration:
         int age,experience,running_pay,Basepay,per_Increment_amount;
         int ARA,gross_pay,annual_income,net_pay;
         float it_Rate;
         int HRA,SSB,income_tax,GPF,total_Deduction;
         char grade;
         cout<<"Enter your age,grade and years of experience\t";
         cin>>grade>>age>>experience;
         cout<<"_______________________________________________";
         cout<<"\n\nBASIC PAY";
         //Condition for Running Pay:
         if(grade=='W'||grade=='w'){
            Basepay=10000;
            per_Increment_amount=700;
         }
else if (grade=='X'||grade=='x'){
    Basepay=12900;
    per_Increment_amount=910;

}
else if(grade=='Y'||grade=='y'){
    Basepay=221700;
    per_Increment_amount=1500;

}
else if(grade=='Z'||grade=='z'){
    Basepay=32600;
    per_Increment_amount=2800;

}
    //Compute the running pay
    //runningpay=basic salary+number of increments + perincrement_Amount
    running_pay=Basepay+(experience*per_Increment_amount);
    //Print the running pay:
    cout<<"\n\nBasic Salary:\t\t\t"<<Basepay;
    cout<<"\nNumber of increments\t\t"<<experience;
   cout<<"\nRunning Pay \t\t\t"<<running_pay;

cout<<"\n\nAllowance";
cout<<"\n________________";
//Compute the allowances:
//HRA is computed as 45% of running pay(RP):
HRA=(running_pay*45)/100;
//print the allowance:
cout<<"\nHouse rent allowance\t:\t"<<HRA;
//compute the SSB:
//SSB is the 30% of basic salary:
SSB=(Basepay*30)/100;
//print the ssb:
cout<<"\nSocial Security Benifit\t:\t"<<SSB;
/*a fixed amount of PKR3000 is given to employers with grade :"w" having more than
3 years of experience*/
/*but not younger than 30 years.in case of other grades,a fixed amount of
pkr1500 is given to employers older than 40years of age*/
if(grade=='W'||grade=='w'&&experience>3&&age>=30){
    ARA=3000;

}
else if(grade!='W'||grade!='w'&&age>=40){
    ARA=1500;

}
else{
    ARA=0;
}
cout<<"\nAdhoc Releif allowance:\t\t"<<ARA;
//Compute the gross pay:
gross_pay=running_pay+HRA+SSB+ARA;
cout<<"\n\nGROSS PAY:\t\t\t"<<gross_pay;
cout<<"\n\nDEDUCTIONS";
cout<<"\n____________";
annual_income=gross_pay*12;
if(annual_income>=0&&annual_income<=400000){
    it_Rate=0;
    income_tax=gross_pay*(it_Rate/100);
}
else if(annual_income>=400001&&annual_income<=650000){
    it_Rate=2.5;
    income_tax=gross_pay*(it_Rate/100);
}
else if(annual_income>=650001&&annual_income<=1000000){
    it_Rate=4.75;
    income_tax=gross_pay*(it_Rate/100);
}
else if(annual_income>=1000001&&annual_income<=1500000){
    it_Rate=7;
    income_tax=gross_pay*(it_Rate/100);
}
else{    it_Rate=11.5;
    income_tax=gross_pay*(it_Rate/100);
}
cout<<"\nINCOME TAX at("<<it_Rate<<"%)\y\y"<<income_tax;
//Compute the general providant fund:
//10% of gross pay:
GPF=(gross_pay*10)/100;
cout<<"\nGeneral Providant fund:\t\t\t"<<GPF;
//total deduction:
total_Deduction=income_tax+GPF;
cout<<"\nTotal Deductions:\t\t\t"<<total_Deduction;
//computing the net pay:
net_pay=gross_pay-total_Deduction;
cout<<"\n\n\nNET PAY:\t\t\t"<<net_pay;
//----------------------------------sharpsbrain (pay slip generation)------------------
    return 0;
}

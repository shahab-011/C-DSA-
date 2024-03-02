#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double a,b,c;
    double discriminant,root1,root2;
    cout<<"Enter the coefficient of a,b,c of the equation:";
    cin>>a>>b>>c;
    discriminant = b*b-4*a*c;
    if(discriminant>0){
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        cout<<"Roots are real and different"<<endl;
        cout<<"Root1= "<<root1<<endl;
        cout<<"Root1= "<<root1<<endl;
    }
    else if(discriminant==0){
        root1=root2= -b/(2*a);
        cout<<"Root1= "<<root1<<endl;
        cout<<"Root1= "<<root1<<endl;

    }
    else{
        double realPart = -b/(2*a);
        double imaginaryPart = sqrt(discriminant)/(2*a);
        cout<<"Root are real and imaginary:"<<endl;
        cout<<"Real Part = "<<realPart<<endl;
        cout<<"Imaginary Parrt = "<<imaginaryPart<<endl;

    }


return 0;
}
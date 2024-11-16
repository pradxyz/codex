#include<iostream>
using namespace std;
int main()
{
    int temp;//kel represents kelvin,cel represents celsius,and far represents fahrenheit
    int ch,res;
    cout<<"Enter the temperature"<<endl;
    cin>>temp;
    cout<<"Enter\n1:converting celsius to kelvin\n2:converts celsius to fahrenheit\n3:converts fahrenheit to celsius\n4:converts fahrenheit to kelvin\n5:converts kelvin to celsius\n6:converts kelvin to fahrenheit"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
        res=temp+273.15;
        cout<<"The temperature in KELVIN is"<<" "<<res<<"K"<<endl;
        break;
        case 2:
        res=(temp*9/5)+32;
        cout<<"The temperature in FAHRENHEIT is"<<" "<<res<<"F"<<endl;
        break;
        case 3:
        res=(temp-32)*5/9;
        cout<<"the temperature in CELSIUS is"<<" "<<res<<"C"<<endl;
        break;
        case 4:
        res=(temp-32)*5/9+273.15;
        cout<<"the temperature in KELVIN is"<<" "<<res<<"K"<<endl;
        break;
        case 5:
        res=(temp-273.15);
        cout<<"the temperature in CELSIUS is"<<" "<<res<<"C"<<endl;
        break;
        case 6:
        res=(temp-273.15)*9/5+32;
        cout<<"the temperature in FAHRENHEIT is"<<" "<<res<<"F"<<endl;
        default:
        cout<<"Enter valid choice"<<endl;
    }
}

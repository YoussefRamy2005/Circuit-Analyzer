#include<iostream>
#include<cmath>
#include<string>
#include<array>
#include<cctype>
#include<cstdlib>
using namespace std;









bool error_check(string input);
float Requivalant(string& input,int &position);
float Rseries(float resistors[],int Rnumber);
float Rparallel(float resistors[],int Rnumber);









int main()
{
    string input;
    getline(cin,input);
    if(error_check(input))
    {
        cout<<"Wrong Description";
        return 0;
    }
    int position=0;
    float answer = Requivalant(input,position);
    cout<<answer;
    return 0;
}









bool error_check(string input)
{
    for(int i=0;i<=input.length();i++)
    {
        if(!isdigit(input[i]) && input[i]!=' ' && input[i]!=',' && input[i]!='e' && input[i]!='P' && input[i]!='p' && input[i]!='S' && input[i]!='s')
            return true;
        else
            return false;
    }
}









float Requivalant(string& input,int &position)
{
    float resistors[20];
    int Rnumber=0;
    char connection='\0';
    while(position<input.length() && (input[position]==' ' || input[position]==',')){
        position++;
    }
    if(position<input.length() && (input[position]=='P' || input[position]=='p' || input[position]=='S' || input[position]=='s'))
    {
        connection=input[position];
        position++;
    }

    else
    {
        cout<<"Incorrect Input";
        exit(0);
    }
    while (position<input.length()&&(input[position]!='e' ))
    {
        while(position<input.length() && (input[position]==' ' || input[position]==',')){
            position++;
        }
         if (position<input.length()&&(input[position]=='.' || isdigit(input[position]))){
            float resistor;
            size_t final_position;
            resistor = stof(input.substr(position),&final_position);
            resistors[Rnumber++]=resistor;
            position+=final_position;
         }
         else if (position<input.length() && (input[position]=='P' || input[position]=='p' || input[position]=='S' || input[position]=='s'))
         {
            resistors[Rnumber]=Requivalant(input,position);
         }
         else
            break;

    }
    if(position<input.length()&& input[position]=='e')
    {
        position++;
    }
    else
    {
        cout<<"Incorrect Input";
        exit(0);
    }
    if(connection=='S'||connection=='s')
    {
        if(Rnumber<1)
        {
            cout<<"Incorrect Input";
            exit(0);
        }
        else
        {
            return Rseries(resistors,Rnumber);
        }
    }
    if(connection=='P'||connection=='p')
    {
        if(Rnumber<2)
        {
            cout<<"Incorrect Input";
            exit(0);
        }
        else
        {
            return Rparallel(resistors,Rnumber);
        }
    }

        cout<<"Incorrect Input";
        exit(0);
}










float Rseries(float resistors[],int Rnumber)
{
    float Rtotal= 0.0;
    for(int i=0;i<Rnumber;i++)
    {
        Rtotal+=resistors[i];
    }
    return Rtotal;
}










float Rparallel(float resistors[],int Rnumber)
{
    float Rreciprocal=0.0;
    for(int i=0;i<Rnumber;i++)
    {
        if(resistors[i]==0)
            return 0;
        else
        {
            Rreciprocal+=1.0/resistors[i];
        }
    }
    return 1.0/Rreciprocal;
}
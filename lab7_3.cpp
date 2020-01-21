//status = "ONE-NIGHT-STAND";
#include<iostream>
#include<string>
using namespace std;
main(){

   string status;
   float age,height,asset;

   cout<<"Input Age : ";
   cin>>age;
   if(age<=20){
    cout<<"Height : ";
    cin>>height;


       if(height<160){
       status="UNFRIENDS";
       }else if(height<175)
         {
        status="FRIEND";
        }
        else {cout<<" Asset :  ";
         cin>>asset;
             if(asset>69000000){
        status="MARRIED";
    }
    else
    {
        status="ONE-NIGHT-STAND";
    }}

       

   }





   else if(age<30)
   { 
       cout<<"Asset : ";
       cin>>asset;
       if(asset>1000000){
           status="BEST FRIEND";
       }
       else
       {
           status="UNFRIEND";
       }
       
   }
   else
   {
       status="UNFRIEND";
   }
   
   cout<<status;

}
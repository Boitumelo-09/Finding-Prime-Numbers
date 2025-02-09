#include <iostream>
#include <cmath>
  int main(){
    int low, high, index;
    bool isPrime_Flag;
    char option;
    system("cls");
    std::cout<<"We're Doing Prime Numbers Today"<<std::endl;
    std::cout<<"_________________________"<<std::endl;
        do
        {
            do
            {
               std::cout<<"Enter the lower limit:";
           std::cin>>low;
       system("cls");
       std::cout<<"Enter the higher limit:";
           std::cin>>high;
       system("cls");
         std::cout<<"_________________________"<<std::endl;
         std::cout<<"Prime numbers from "<<low<<" to "<<high<<" are:"<<std::endl;
         while (low<high)
         {
            isPrime_Flag=true;
          if (low==1 || low ==0){
           isPrime_Flag=false;
          }
   
         
           for (index =2; index < low/2; index++)
           {
               if (low%index==0)
               {
                   isPrime_Flag=false;
                   break;
               }
               
           }
           if (isPrime_Flag)
           {
               std::cout<<low<<std::endl;
           }
           ++low;
        }
           std::cout<<"_________________________"<<std::endl;
           std::cout<<"Would you like to run another test?[Y/N]:";
               std::cin>>option;
               system("cls");
        std::cout<<"_________________________"<<std::endl; 
            } while (option=='Y' || option=='y');
            
              if (option=='N' || option=='n')
              {
               std::cout<<"Okay Thank You, Bye";
              }
              
              std::cout<<"_________________________"<<std::endl;  
        } while (option!='N' || option!='n' || option!='Y' || option!='y');
    system("pause");
  }
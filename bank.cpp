#include <iostream>

using namespace std;

class Bank{
    public:
    string name;
    int account_no;
    string account_type;
    float bal_amt;
    
    Bank(string A,int a_no,string a_type,float b_amt){
        name=A;
        account_no=a_no;
        account_type=a_type;
        bal_amt=b_amt;
        
    };
        
    void current_am(){
        
      cout<<bal_amt<<endl;
       
     };
    
    void deposite(float sal){
        
         
         bal_amt=bal_amt+sal;
         cout<<"Total Amount"<<"\t"<< bal_amt<<endl;
     };
    int am_wid(float sal){
        
        float dep;
        bal_amt=bal_amt-sal;
        if (bal_amt<0)
        cout<<"less amount";
        else 
         return bal_amt;
         
         return 0;
        };
    
     void displays() {
        cout<<name<<endl<<bal_amt;
        
     };
    
    
     };


int main()
{
    Bank A1("fahad",12344,"saving",30000);
    A1.deposite(5000);
    cout<<A1.am_wid(2000)<<endl;
    A1.current_am();
    
    A1.displays();
   
    return 0;
}

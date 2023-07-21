#include<iostream>
 #include<bits/stdc++.h>
using namespace std;


int returnTotalBill();
int main()
{
    int returnTotalBill(void);
    int ans =returnTotalBill();
    cout<<"Your Toatal Bill Amount is"<<ans<<endl;
    cout<<"Thank you for your order !"<<endl;
    getch();
    return 0;
}

int returnTotalBill()
{
    char c;
    char item;
    char vegItem;
    int billAmount=0;
    char selectAgain;
    char nonvegItem;
    cout<<"--------Welcome to Online Order-------"<<endl;
    cout<<"---------Please Follow below Instructions---"<<endl;
    cout<<"Step 1:Please press s to start your order"<<endl;
    cout<<"Step 2:You can order both veg and Non-veg"<<endl;
    cout<<"Step 3:Please press a to select veg item"<<endl;
    cout<<"Step 4:Please press b to select Non-veg item"<<endl;
    cin>>c;
    start:
    
    if(c=='s' || c=='S')
    {
        items:
        cout<<"Please select your choice "<<endl;
        cout<<"(a)Veg Items               (b)Non-Veg Items"<<endl;
        cin>>item;
        if(item=='a' || item=='A')
        {
             vegItemList:

            cout<<"Please select 1, 2 , 3 ,4 , 5  as per your choice"<<endl;
            cout<<"(1) Paneer :Price : Rs 250/-"<<endl;
             cout<<"(2) Burger :Price : Rs 50/-"<<endl;
              cout<<"(3) Pizza :Price : Rs 100/-"<<endl;
               cout<<"(4) Chowmien :Price : Rs 150/-"<<endl;
                cout<<"(5) Veg Roll :Price : Rs 100/-"<<endl;
               
                cin>>vegItem;
                if(vegItem=='1')
                    billAmount=billAmount+250;
                else if(vegItem=='2')
                    billAmount=billAmount+50;
                else if(vegItem=='3')
                    billAmount=billAmount+100;
                else if(vegItem=='4')
                    billAmount=billAmount+150;
               else if(vegItem=='5')
                    billAmount=billAmount+100;
               else 
               {
                    cout<<"You have entered wrong value Please Try again!"<<endl;
                    goto vegItemList;   
               }

        cout<<"Do you want some more items to add y or n!!"<<endl;
        cin>>selectAgain;
        if(selectAgain=='y' || selectAgain=='Y'){
            goto items;

        }
        
        else{
            return billAmount;
        }



        }
        else if(item=='b' || item =='B')
        {
             nonvegItemList:

                 cout<<"Please select 1, 2 , 3 ,4 , 5  as per your choice"<<endl;
            cout<<"(1) Chicken :Price : Rs 350/-"<<endl;
             cout<<"(2) Burger :Price : Rs 100/-"<<endl;
              cout<<"(3) Pizza :Price : Rs 150/-"<<endl;
               cout<<"(4) Chowmien :Price : Rs 200/-"<<endl;
                cout<<"(5) Non-Veg Roll :Price : Rs 200/-"<<endl;
                

                cin>>nonvegItem;
                if(nonvegItem=='1')
                    billAmount=billAmount+350;
                else if(nonvegItem=='2')
                    billAmount=billAmount+100;
                else if(nonvegItem=='3')
                    billAmount=billAmount+150;
                else if(nonvegItem=='4')
                    billAmount=billAmount+200;
               else if(nonvegItem=='5')
                    billAmount=billAmount+200;
               else {
                    cout<<"You have entered wrong value Please Try again!"<<endl;
                    goto nonvegItemList;     
               }

        cout<<"Do you want some more items to add y or n!!"<<endl;
        cin>>selectAgain;
        if(selectAgain =='y' || selectAgain=='Y'){
            goto items;

        }
        else{
            return billAmount;
        }

        }
        else{
            cout<<"You have entered wrong value ,please try again!!"<<endl;
             goto items;
        }

    }
    else
    {
        cout<<"you have entered wrong value ,please press s!"<<endl;
        goto start;
       

    }
    
    return billAmount;
    

}
#include<iostream>
using namespace std;
int main()
{
    //Author : Yaswanth Devabaktuni
    //LinkedIn : https://www.linkedin.com/in/yaswanthdevabaktuni/
    int choice,val=0;
    int q[29],i,total=0;
    int c[29]={280,330,385,410,450,430,185,195,235,235,270,270,270,270,300,300,180,190,190,230,180,270,240,230,270,240,210,150,180};
    for(i=0;i<29;i++)
    {
        q[i]=0;
    }
    string n[29];
    n[0]="Veg Biryani             ";
    n[1]="Special Veg Biryani     ";
    n[2]="Chicken Special Biryani ";
    n[3]="Chicken Mughalai Biryani";
    n[4]="Mutton Special Biryani  ";
    n[5]="Prawns Biryani          ";
    n[6]="Chilli Gobi             ";
    n[7]="Paneer 65               ";
    n[8]="Veg Manchurian          ";
    n[9]="Chilli Mushroom         ";
    n[10]="Chicken 65             ";
    n[11]="Chicken Lollipop       ";
    n[12]="Chilli Chicken         ";
    n[13]="Pepper Chicken         ";
    n[14]="Apollo Fish            ";
    n[15]="Chilli Prawns          ";
    n[16]="Palak Paneer           ";
    n[17]="Mushroom Masala        ";
    n[18]="Paneer Tikka           ";
    n[19]="Chicken Curry          ";
    n[20]="Special Palak Paneer   ";
    n[21]="Mutton Curry           ";
    n[22]="Butter Chcicken        ";
    n[23]="Chicken Masala         ";
    n[24]="Prawns Curry           ";
    n[25]="Kadai Chicken          ";
    n[26]="Chicken Fried Rice     ";
    n[27]="Veg Fried Rice         ";
    n[28]="Egg Fried Rice         ";
    long long int num;
    string name;
    while(true)
    {
        cout<<"S.No\tType\n";
        cout<<"1\tBiryani\n";
        cout<<"2\tStarters\n";
        cout<<"3\tCurries\n";
        cout<<"4\tFried Rice\n";
        cout<<"0\tBill\n";
        cout<<"Enter your choice\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                while(choice!=11)
                {
                    cout<<"S.No\tType\t\t\t\tPrice\n";
                    cout<<"5 \tVeg Biryani             \t"<<c[0]<<endl;
                    cout<<"6 \tSpecial Veg Biryani     \t"<<c[1]<<endl;
                    cout<<"7 \tChicken Special Biryani \t"<<c[2]<<endl;
                    cout<<"8 \tChicken Mughalai Biryani\t"<<c[3]<<endl;
                    cout<<"9 \tMutton Special Biryani  \t"<<c[4]<<endl;
                    cout<<"10\tPrawns Biryani          \t"<<c[5]<<endl;
                    cout<<"11\tExit"<<endl;
                    cout<<"Enter your choice\n";
                    cin>>choice;
                    switch (choice)
                    {
                        case 5:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[0]+=val;
                            break;
                        case 6:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[1]+=val;
                            break;
                        case 7:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[2]+=val;
                            break;
                        case 8:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[3]+=val;
                            break;
                        case 9:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[4]+=val;
                            break;
                        case 10:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[5]+=val;
                            break;
                        case 11:
                            break;
                        default:
                            cout<<"Please enter the correct value\n";
                            break;
                    }
                }
                break;
            case 2:
                while(choice!=22)
                {
                    cout<<"S.No\tType\t\t\tPrice\n";
                    cout<<"12\tChilli Gobi           \t"<<c[6]<<endl;
                    cout<<"13\tPaneer 65             \t"<<c[7]<<endl;
                    cout<<"14\tVeg Manchurian        \t"<<c[8]<<endl;
                    cout<<"15\tChilli Mushroom       \t"<<c[9]<<endl;
                    cout<<"16\tChicken 65            \t"<<c[10]<<endl;
                    cout<<"17\tChicken Lollipop      \t"<<c[11]<<endl;
                    cout<<"18\tChilli Chicken        \t"<<c[12]<<endl;
                    cout<<"19\tPepper Chicken        \t"<<c[13]<<endl;
                    cout<<"20\tApollo Fish           \t"<<c[14]<<endl;
                    cout<<"21\tChilli Prawns         \t"<<c[15]<<endl;
                    cout<<"22\tExit\n";
                    cout<<"Enter your choice\n";
                    cin>>choice;
                    switch (choice)
                    {
                        case 12:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[6]+=val;
                            break;
                        case 13:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[7]+=val;
                            break;
                        case 14:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[8]+=val;
                            break;
                        case 15:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[9]+=val;
                            break;
                        case 16:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[10]+=val;
                            break;
                        case 17:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[11]+=val;
                            break;
                        case 18:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[12]+=val;
                            break;
                        case 19:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[13]+=val;
                            break;
                        case 20:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[14]+=val;
                            break;
                        case 21:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[15]+=val;
                            break;
                        case 22:
                            break;
                        default:
                            cout<<"Please enter the correct value\n";
                            break;
                    }
                }
                break;
            case 3:
                while(choice!=33)
                {
                    cout<<"S.No\tType\t\t\tPrice\n";
                    cout<<"23\tPalak Paneer          \t"<<c[16]<<endl;
                    cout<<"24\tMushroom Masala       \t"<<c[17]<<endl;
                    cout<<"25\tPaneer Tikka          \t"<<c[18]<<endl;
                    cout<<"26\tChicken Curry         \t"<<c[19]<<endl;
                    cout<<"27\tSpecial Palak Paneer  \t"<<c[20]<<endl;
                    cout<<"28\tMutton Curry          \t"<<c[21]<<endl;
                    cout<<"29\tButter Chcicken       \t"<<c[22]<<endl;
                    cout<<"30\tChicken Masala        \t"<<c[23]<<endl;
                    cout<<"31\tPrawns Curry          \t"<<c[24]<<endl;
                    cout<<"32\tKadai Chicken         \t"<<c[25]<<endl;
                    cout<<"33\tExit\n";
                    cout<<"Enter your choice\n";
                    cin>>choice;
                    switch (choice)
                    {
                        case 23:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[16]+=val;
                            break;
                        case 24:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[17]+=val;
                            break;
                        case 25:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[18]+=val;
                            break;
                        case 26:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[19]+=val;
                            break;
                        case 27:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[20]+=val;
                            break;
                        case 28:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[21]+=val;
                            break;
                        case 29:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[22]+=val;
                            break;
                        case 30:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[23]+=val;
                            break;
                        case 31:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[24]+=val;
                            break;
                        case 32:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[25]+=val;
                            break;
                        case 33:
                            break;
                        default:
                            cout<<"Please enter the correct value\n";
                            break;
                    }
                }
                break;
            case 4:
                while(choice!=37)
                {
                    cout<<"S.No\tType\t\t\tPrice\n";
                    cout<<"34\tChicken Fried Rice    \t"<<c[26]<<endl;
                    cout<<"35\tVeg Fried Rice        \t"<<c[27]<<endl;
                    cout<<"36\tEgg Fried Rice        \t"<<c[28]<<endl;
                    cout<<"37\tExit\n";
                    cout<<"Enter your choice\n";
                    cin>>choice;
                    switch (choice)
                    {
                        case 34:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[26]+=val;
                            break;
                        case 35:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[27]+=val;
                            break;
                        case 36:
                            cout<<"Enter the quanity\n";
                            cin>>val;
                            q[28]+=val;
                            break;
                        case 37:
                            break;
                        default:
                            cout<<"Please enter the correct value\n";
                            break;
                    }
                }
                break;
            case 0:
                cout<<"Please enter your name\n";
                cin.ignore();
                getline(cin,name);
                cout<<"Please enter your mobile number\n";
                cin>>num;
                cout<<"_________________________________________________________________________________________________\n";
                cout<<"Name : "<<name<<" \t"<<"Mobile Number : "<<num<<endl;
                for(i=0;i<29;i++)
                {
                    if(q[i]>0)
                    {
                        cout<<n[i]<<"->"<<q[i]<<"*"<<c[i]<<" = Rs "<<q[i]*c[i]<<endl;
                        total+=q[i]*c[i];
                    }
                }
                cout<<"Total Bill = Rs "<<total<<endl;
                cout<<"Thank you for visiting :)\n";
                cout<<"_________________________________________________________________________________________________\n";
                exit(1);
                break;
        }
    }
    return 0;
}

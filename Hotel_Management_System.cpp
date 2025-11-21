#include<bits/stdc++.h>
using namespace std;

int main()
{
    int quantity;
    int choice;

     //1.quantity
    int quantityRooms = 0, quantityPasta = 0, quantityBurger = 0, quantityNoodles = 0,quantityShake = 0, quantityChicken = 0;
    //2.Food items sold
    int SoldRooms = 0, SoldPasta = 0, SoldBurger = 0, Soldnodles = 0, Soldshanke = 0, Soldchicken = 0;
    //3
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken =0;

    //4
    cout <<"\n\t quantity of items we have ";
    cout <<"\n Rooms  Avaliable: ";
    cin >> quantityRooms;
    cout <<"\n quantity of Pasta : ";
    cin >> quantityPasta;
    cout <<"\n quantity of burger : ";
    cin >> quantityBurger;
    cout <<"\n quantity of noodles : ";
    cin >> quantityNoodles;
    cout <<"\n quantity of shake : ";
    cin >> quantityShake;
    cout <<"\n quantity of chicken-roll : ";
    cin >> quantityChicken;

    //Now we have to create a menu to select food itmes 
    m:
    cout <<"\n\t\t\t Please select from the menu opition below: ";
    cout <<"\n\n1) Rooms";
    cout <<"\n\n2) Pasta";
    cout <<"\n\n3) Burger";
    cout <<"\n\n4) Noodles";
    cout <<"\n\n5) shake";
    cout <<"\n\n6) Chicken-roll";
    cout <<"\n\n7) Information regarding sales and collection ";
    cout <<"\n\n8) Exit";

    cout <<"\n\n Please Enter your choice! ";
    cin >> choice;

    //Now we will write switch case statement because when a user select a particular number that 
    //particular case would be exucuted. 
    switch (choice)
    {
    case 1:
        cout <<"\n\n Enter the number of rooms you want : ";
        cin >> quantity;
        if (quantityRooms - SoldRooms >= quantity) //we will check actually we have that many hotels,food items or not. 
        {
            SoldRooms += quantity; //adding quantityity to the sold rooms
            Total_rooms = Total_rooms + quantity * 1200;  //total price  of room
            cout <<"\n\n\t\t" <<quantity <<"room/rooms have been alloted to you!";
        }
        else
            cout <<"\n\tOnly"<<quantityRooms - SoldRooms <<"  Rooms remaining in hotel ";
        break;


        case 2:
        cout <<"\n\n Enter Pasta quantityaty : ";
        cin >>quantity;
        if (quantityPasta - SoldPasta >= quantity) //we will check actually we have that many hotels,food items  or not. 
        {
            SoldPasta += quantity; //adding quantityity to the sold rooms
            Total_pasta = Total_pasta + quantity * 250;  //total price  of room
            cout <<"\n\n\t\t" <<quantity <<" Pasta is the Order! ";
        }
        else
            cout <<"\n\tOnly"<<quantityPasta - SoldPasta <<" Pasta remaing in menu ";
        break;


        case 3:
        cout <<"\n\n Enter Burger quantityaty : ";
        cin >> quantity;
        if (quantityBurger - SoldBurger >= quantity) //we will check actually we have that many hotels,food items  or not. 
        {
            SoldBurger += quantity; //adding quantityity to the sold rooms
            Total_burger = Total_burger + quantity * 400;  //total price  of room
            cout <<"\n\n\t\t" <<quantity <<" Burger is the Order! ";
        }
        else
            cout <<"\n\tOnly"<<quantityPasta - SoldPasta <<" Burger remaing in menu ";

        break;


        case 4:
        cout <<"\n\n Enter Noodles quantityaty : ";
        cin >> quantity;
        if (quantityNoodles - Soldnodles >= quantity) //we will check actually we have that many hotels,food items  or not. 
        {
            Soldnodles += quantity; //adding quantityity to the sold rooms
            Total_noodles = Total_noodles + quantity * 100;  //total price  of room
            cout <<"\n\n\t\t" <<quantity <<" Noodles is the Order! ";
        }
        else
            cout <<"\n\tOnly"<<quantityNoodles - Soldnodles <<" Noodles remaing in menu ";
        break;


        case 5:
        cout <<"\n\n Enter Shakes quantityaty : ";
        cin >> quantity;
        if (quantityShake - Soldshanke >= quantity) //we will check actually we have that many hotels,food items  or not. 
        {
            Soldshanke += quantity; //adding quantityity to the sold rooms
            Total_shake = Total_shake + quantity * 120;  //total price  of room
            cout <<"\n\n\t\t" <<quantity <<" Pasta is the Order! ";
        }
        else
            cout <<"\n\tOnly"<<quantityShake - Soldshanke <<" Pasta remaing in menu ";
        break;


        case 6:
        cout <<"\n\n Enter Chicken-Roll quantityaty : ";
        cin >> quantity;
        if (quantityChicken - Soldchicken >= quantity) //we will check actually we have that many hotels,food items  or not. 
        {
            Soldchicken += quantity; //adding quantityity to the sold rooms
            Total_chicken = Total_chicken + quantity * 350;  //total price  of room
            cout <<"\n\n\t\t" <<quantity <<" Pasta is the Order! ";
        }
        else
            cout <<"\n\tOnly"<<quantityChicken - Soldchicken <<" Pasta remaing in menu ";
        break;

        //Now we have done second part of poject. 
        //Now in the case 7 if user  enter  it he/she will see the details. 

        case 7:

            cout << "\n\t\tDetails of slaes and colletion";
            cout <<"\n\n Number of rooms we had : " <<quantityRooms;
            cout <<"\n\n Number of rooms we gave for rent : " <<SoldRooms;
            cout <<"\n\n Reamining rooms : " <<quantityRooms - SoldRooms;
            cout <<"\n\n Total rooms collecton for the day : " <<Total_rooms <<endl;

            cout << "\n\n\t\tDetails of slaes and colletion";
            cout <<"\n\n Number of pasta we had : " <<quantityPasta;
            cout <<"\n\n Number of pasta we sold : " <<SoldPasta;
            cout <<"\n\n Reaming  Pasta : " <<quantityPasta - SoldPasta;
            cout <<"\n\n Total Pasta collection for the day : " <<Total_pasta <<endl;

            cout << "\n\n\t\tDetails of slaes and colletion";
            cout <<"\n\n Number of burger we had : " <<quantityBurger;
            cout <<"\n\n Number of burger sold : " <<SoldBurger;
            cout <<"\n\n Reamining burgers : " <<quantityBurger - SoldBurger;
            cout <<"\n\n Total burger collection for the day : " <<Total_burger <<endl;

            cout << "\n\t\tDetails of slaes and colletion";
            cout <<"\n\n Number of Noodles we had : " <<quantityNoodles;
            cout <<"\n\n Number of Noodles we sold : " <<Soldnodles;
            cout <<"\n\n Reamining Noodles : " <<quantityNoodles - Soldnodles;
            cout <<"\n\n Total Noodles collection for the day : " <<Total_noodles <<endl;

            cout << "\n\t\tDetails of slaes and colletion";
            cout <<"\n\n Number of shakes we had : " <<quantityShake;
            cout <<"\n\n Number of Shakes we sold : " <<Soldshanke;
            cout <<"\n\n Reamining shakes : " <<quantityShake - Soldshanke;
            cout <<"\n\n Total shakes collection for the day : " <<Total_shake <<endl;

            cout <<"\n\nTotal Collection for the day: " <<Total_rooms + Total_burger + Total_chicken + Total_noodles + Total_pasta + Total_shake <<endl;
            break;


            case 8:
                exit(0);

                default:
                    cout <<"\n Please  select the numbers  mentioned above 1 ";

    }
    goto m;  
}

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

// Declaring variables

int in_state_pnr = 100;
int out_state_pnr = 200;

// Class for inState train booking
class inState_booking
{

    // Declaring variables

protected:
    int in_pnr, inState_passengers, inState_meal_choice;
    char train_inState[50], inState_meal[20], meal1[20];
    ;
    char date_inState[10];
    char inState_dep[20], inState_arr[20];
    int choice_inState, source, destination;

public:
    // Function for generating inState ticket pnr numbers

    void generate_in_state_pnr()
    {

        in_state_pnr++;
        in_pnr = in_state_pnr;
    };

    // Function for getting inState travel information from the user

    int travel_details_inState()

    {

        cout << "\nPlease enter date of departure (DD/MM/YY):" << endl;
        cin >> date_inState;
        system("CLS");

        cout << "-----------------" << endl;
        cout << "      SOURCE     " << endl;
        cout << "-----------------" << endl;
        cout << "1.Mysore(1)" << endl;
        cout << "2.Hubballi(2)" << endl;

        cout << "3.Udupi(3)" << endl;
        cout << "4.Shivamogga(4) " << endl;
        cout << "------------------\n"
             << endl;
        cout << "Enter your source:" << endl;
        cin >> source;

        cout << "-----------------" << endl;
        cout << "  DESTINATION     " << endl;
        cout << "-----------------" << endl;
        cout << "1.Mysore(1)" << endl;
        cout << "2.Hubballi(2)" << endl;
        cout << "3.Udupi(3)" << endl;
        cout << "4.Shivamogga(4)" << endl;
        cout << "------------------\n"
             << endl;
        cout << "Enter your destination :" << endl;
        cin >> destination;

        if ((source == 1 && destination == 2) || (source == 2 && destination == 1))
        {
            cout << "\t \t \tAvailable trains" << endl
                 << endl;
            cout << "-------------------------------------------------------" << endl;
            cout << "Trains\tDeparture\tArrival\t\tPrice\n"
                 << endl;
            cout << "Mysore Express(1)\t08:00\t\t11:05\t\tRs.378\n";
            cout << "Karnataka Express(2)\t14:00\t\t17:05\t\tRs.444\n";
            cout << "Mangaluru Express(3)\t19:00\t\t22:05\t\tRs.563\n";
        }

        else if ((source == 1 && destination == 3) || (source == 3 && destination == 1))
        {
            cout << "\t \t \tAvailable trains" << endl
                 << endl;
            cout << "-------------------------------------------------------" << endl;
            cout << "Trains\tDeparture\tArrival\t\tPrice\n"
                 << endl;
            cout << "Mysore Express(1)\t08:00\t\t11:05\t\tRs.378\n";
            cout << "Karnataka Express(2)\t14:00\t\t17:05\t\tRs.444\n";
            cout << "Mangaluru Express(3)\t19:00\t\t22:05\t\tRs.563\n";
        }

        else if ((source == 1 && destination == 4) || (source == 4 && destination == 1))
        {
            cout << "\t \t \tAvailable trains" << endl
                 << endl;
            cout << "-------------------------------------------------------" << endl;
            cout << "Trains\tDeparture\tArrival\t\tPrice\n"
                 << endl;
            ;
            cout << "Mysore Express(1)\t08:00\t\t11:05\t\tRs.378\n";
            cout << "Karnataka Express(2)\t14:00\t\t17:05\t\tRs.444\n";
            cout << "Mangaluru Express(3)t18:00\t\t21:05\t\tRs.563\n";
        }

        else if ((source == 2 && destination == 3) || (source == 3 && destination == 2))
        {
            cout << "\t \t \tAvailable trains" << endl
                 << endl;
            cout << "-------------------------------------------------------" << endl;
            cout << "Trains\tDeparture\tArrival\t\tPrice\n"
                 << endl;
            cout << "Mysore Express(1)\t08:00\t\t11:05\t\tRs.378\n";
            cout << "Karnataka Express(2)\t14:00\t\t17:05\t\tRs.444\n";
            cout << "Mangaluru Express(3)\t18:00\t\t21:05\t\tRs.563\n";
        }

        else if ((source == 2 && destination == 4) || (source == 4 && destination == 2))
        {
            cout << "\t \t \tAvailable trains" << endl
                 << endl;
            cout << "-------------------------------------------------------" << endl;
            ;
            cout << "Trains\tDeparture\tArrival\t\tPrice\n"
                 << endl;
            cout << "Mysore Express(1)\t08:00\t\t11:05\t\tRs.378\n";
            cout << "Karnataka Express(2)\t14:00\t\t17:05\t\tRs.444\n";
            cout << "Mangaluru Express(3\t18:00\t\t21:05\t\tRs.563\n";
        }
        else if ((source == 3 && destination == 4) || (source == 4 && destination == 3))
        {
            cout << "\t \t \tAvailable trains" << endl
                 << endl;
            cout << "-------------------------------------------------------" << endl;
            cout << "Trains\tDeparture\tArrival\t\tPrice\n"
                 << endl;
            cout << "Mysore Express(1)\t08:00\t\t11:05\t\tRs.378\n";
            cout << "Karnataka Express(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "Mangaluru Express(3)\t18:00\t\t21:05\t\tRs.563\n";
        }
        else if (source == destination)
        {
            cout << "\nSource and destination are the same.Please enter try again.\n\n\n"
                 << endl;
            return travel_details_inState();
        }
        else
        {
            cout << "\nYou have entered the wrong input entered.Please try again\n\n\n"
                 << endl;
            return travel_details_inState();
        }
    }

    // Function for selecting inState train
    int select_train_inState()

    {

        cout << "\nEnter your choice : " << endl;
        cin >> choice_inState;

        // switch case
        switch (choice_inState)
        {
        case 1:
            cout << "\nYour travel information" << endl;
            cout << "---------------------------------------" << endl;
            cout << "train name : Mysore Express" << endl;
            strcpy(train_inState, "Mysore Express");
            cout << "Departure Time : 08:00" << endl;
            cout << "Arrival Time: 11:05" << endl;
            strcpy(inState_dep, "08:00");
            strcpy(inState_arr, "11:05");

            break;
        case 2:
            cout << "\nYour travel information:" << endl;
            cout << "---------------------------------------" << endl;
            cout << "train name : Karnataka Express" << endl;
            strcpy(train_inState, "Karnataka Express");
            cout << "Departure Time : 14:00" << endl;
            cout << "Arrival Time: 17:05" << endl;
            strcpy(inState_dep, "14:00");
            strcpy(inState_arr, "17:05");

            break;
        case 3:
            cout << "\nYour travel information" << endl;
            cout << "---------------------------------------" << endl;
            cout << "train name : Mangaluru Express" << endl;
            strcpy(train_inState, "Mangaluru Express");
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 21:05" << endl;
            strcpy(inState_dep, "18:00");
            strcpy(inState_arr, "21:05");

            break;
        default:
            cout << "\nYou have entered the wrong input entered.Try again\n\n\n"
                 << endl;
            return select_train_inState();
        }
    }

    // Function for selecting inState train meal
    int inState_meals()
    {

        cout << "---------------------------------------" << endl;

        cout << "Please enter your inState meal preference : " << endl;

        cout << "---------------------------------------" << endl;
        cout << "1.Vegetarian meal(1): Rs.100 \n";
        cout << "2.Non-Vegetarian meal(2) : Rs.150\n";
        cout << "3.No meal(3)\n\n";

        cout << "Enter your choice :  ";
        cin >> inState_meal_choice;

        while (inState_meal_choice > 3 || inState_meal_choice < 1)
        {
            cout << "You have entered the wrong input.Please a number between 1 and 3\n";
            cin >> inState_meal_choice;
        }
        {

            if (inState_meal_choice == 1)
            {
                strcpy(meal1, "vegetarian meal");
            }

            else if (inState_meal_choice == 2)
            {
                strcpy(meal1, "non-Vegetarian meal");
            }

            else
            {
                strcpy(meal1, "no meal");
            }

            cout << "You have chosen " << meal1 << endl;
        }
    }
};

// Class for out of state booking
class outState_booking
{

    // Declaring variables
protected:
    int out_pnr, out_passenger, out_meal_choice, out_meal_price;
    char train_out[20], out_dep[20], out_arr[20], meal2[30], out_meal_choices[20];
    char date_out[20];
    int source_out, destination_out, choice_out;

public:
    void generate_out_state_pnr()
    {
        out_state_pnr++;
        out_pnr = out_state_pnr;
    }

    // Function for getting out of state travel information from the user
    int travel_details_out()

    {

        cout << "\nEnter date of departure (DD/MM/YY) :" << endl;
        cin >> date_out;
        system("CLS");

        system("CLS");
        cout << "\n      SOURCE     " << endl;
        cout << "-----------------" << endl;
        cout << "1.Delhi(1)" << endl;
        cout << "2. Kolkata(2)" << endl;

        cout << "3.Hyderabad(3)" << endl;
        cout << "4.Mumbai(4) " << endl;
        cout << "------------------\n"
             << endl;
        cout << "Enter your source:" << endl;
        cin >> source_out;

        cout << "\n  DESTINATION     " << endl;
        cout << "-----------------" << endl;
        cout << "1.Delhi(1)" << endl;
        cout << "2. Kolkata(2)" << endl;

        cout << "3.Hyderabad(3)" << endl;
        cout << "4.Mumbai(4) " << endl;
        cout << "------------------\n"
             << endl;
        cout << "Enter your destination : \n"
             << endl;
        cin >> destination_out;

        if ((source_out == 1 && destination_out == 2) || (source_out == 2 && destination_out == 1))
        {

            cout << "\t \t \tAvailable trains" << endl;
            cout << "-------------------------------------------------------" << endl;
            cout << "Trains\tDeparture\tArrival\t\tPrice\n"
                 << endl;
            cout << "Rajdhani Express(1)\t04:10\t\t08:30\t\tRs.1401\n";
            cout << "Shatabdi Express(2)\t14:00\t\t18:05\t\tRs.1512\n";
            cout << "August Kranti(3)\t22:00\t\t02:10\t\tRs.1250\n";
        }

        else if ((source_out == 1 && destination_out == 3) || (source_out == 3 && destination_out == 1))
        {
            cout << "\t \t \tAvailable trains" << endl;
            cout << "-------------------------------------------------------" << endl;
            cout << "Trains\tDeparture\tArrival\t\tPrice\n"
                 << endl;
            cout << "Rajdhani Express(1)\t04:10\t\t08:30\t\tRs.1455\n";
            cout << "Shatabdi Express(2)\t14:00\t\t18:05\t\tRs.2311\n";
            cout << "August Kranti(3)\t22:00\t\t02:10\t\tRs.2976\n";
        }

        else if ((source_out == 1 && destination_out == 4) || (source_out == 4 && destination_out == 1))
        {
            cout << "\t \t \tAvailable trains" << endl;
            cout << "-------------------------------------------------------" << endl;
            cout << "Trains\tDeparture\tArrival\t\tPrice\n"
                 << endl;
            cout << "Rajdhani Express(1)\t04:10\t\t08:30\t\tRs. 1799\n";
            cout << "Shatabdi Express(2)\t14:00\t\t18:05\t\tRs.2431\n";
            cout << "August Kranti(3)\t22:00\t\t02:10\t\tRs.1998\n";
        }

        else if ((source_out == 2 && destination_out == 3) || (source_out == 3 && destination_out == 2))
        {
            cout << "\t \t \tAvailable trains" << endl;
            cout << "-------------------------------------------------------" << endl;
            cout << "Trains\tDeparture\tArrival\t\tPrice\n"
                 << endl;
            cout << "Rajdhani Express(1)\t04:10\t\t08:30\t\tRs.1401\n";
            cout << "Shatabdi Express(2)\t14:00\t\t18:05\t\tRs.1512\n";
            cout << "August Kranti(3)\t22:00\t\t02:10\t\tRs.1250\n";
        }

        else if ((source_out == 2 && destination_out == 4) || (source_out == 4 && destination_out == 2))
        {
            cout << "\t \t \tAvailable trains" << endl;
            cout << "-------------------------------------------------------" << endl;
            cout << "Trains\tDeparture\tArrival\t\tPrice\n"
                 << endl;
            cout << "Rajdhani Express(1)\t04:10\t\t08:30\t\tRs.1401\n";
            cout << "Ethiad(2)\t14:00\t\t18:05\t\tRs.1512\n";
            cout << "August Kranti(3)\t22:00\t\t02:10\t\tRs.1250\n";
        }
        else if ((source_out == 3 && destination_out == 4) || (source_out == 4 && destination_out == 3))
        {
            cout << "\t \t \tAvailable trains" << endl;
            cout << "-------------------------------------------------------" << endl;
            cout << "Trains\tDeparture\tArrival\t\tPrice\n"
                 << endl;
            cout << "Rajdhani Express(1)\t04:10\t\t08:30\t\tRs.1401\n";
            cout << "Shatabdi Express(2)\t14:00\t\t18:05\t\tRs.1512\n";
            cout << "August Kranti(3)\t22:00\t\t02:10\t\tRs.1250\n";
        }
        else if (source_out == destination_out)
        {
            cout << "\nSource and destination are the same.Please enter try again.\n\n\n"
                 << endl;
            cout << "\n\n\n"
                 << endl;
            return travel_details_out();
        }
        else
        {
            cout << "\nYou have entered the wrong input entered.Try again\n\n\n"
                 << endl;
            return travel_details_out();
        }
    }

    // Function for selecting out of state train

    int select_train_out()
    {
        cout << "\nEnter your choice : " << endl;
        cin >> choice_out;
        switch (choice_out)
        {

        case 1:
            cout << "\nYour travel information" << endl;

            cout << "-----------------------------\n"
                 << endl;
            cout << "train name :Rajdhani Express" << endl;
            strcpy(train_out, "Rajdhani Express");
            cout << "Departure Time: 04:10" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(out_dep, "10:00");
            strcpy(out_arr, "14:05");
            break;
        case 2:
            cout << "\nYour travel information" << endl;
            cout << "-----------------------------\n"
                 << endl;
            cout << "train name:Shatabdi Express" << endl;
            strcpy(train_out, "Shatabdi Express");
            cout << "Departure Time: 14:00" << endl;
            cout << "Arrival Time: 18:05" << endl;
            strcpy(out_dep, "14:00");
            strcpy(out_arr, "18:05");

            break;
        case 3:
            cout << "\nYour travel information" << endl;
            cout << "-----------------------------\n"
                 << endl;
            cout << "train name:August Kranti" << endl;
            strcpy(train_out, "August Kranti");
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(out_dep, "18:00");
            strcpy(out_arr, "22:05");
            break;
        default:
            cout << "\nYou have entered the wrong input entered.Try again\n\n\n"
                 << endl;
            return select_train_out();
        }
    }

    // Function for selecting out of state train meal
    int out_meal()
    {

        cout << "------------------" << endl;

        cout << "Meal preferences " << endl;

        cout << "------------------" << endl;
        cout << "1.Vegetarian meal(1): Rs.250 \n";
        cout << "2.Non-Vegetarian meal(2) : Rs.300\n";
        cout << "3.No meal(3)\n\n";

        cout << "Enter your choice :  ";
        cin >> out_meal_choice;

        while (out_meal_choice > 3 || out_meal_choice < 1)
        {
            cout << "You have entered the wrong input.Please enter a number between 1 and 3\n";
            cin >> out_meal_choice;
        }
        {

            if (out_meal_choice == 1)
            {

                strcpy(meal2, "vegetarian meal");
            }

            else if (out_meal_choice == 2)
            {
                strcpy(meal2, "non-vegetarian meal");
            }

            else
            {
                strcpy(meal2, "no meal");
            }
        }
        cout << "You have chosen " << meal2 << endl;
    }
};

// Class passenger inherits the classes inState_booking and outState_booking
class passenger : public inState_booking, public outState_booking
{

    // Declaring variables
protected:
    char name[100], email[50], gender[20], adhaar_num[16], contact_no[30];

public:
    // Function for getting the details of the passengers

    void passenger_details(int x)

    // if - else statements for inState and out of state booking selection

    {
        system("CLS");
        if (x == 1)
        {
            travel_details_inState();
            select_train_inState();

            inState_meals();
        }
        else
        {
            travel_details_out();
            select_train_out();

            out_meal();
        }

        system("CLS");
        cout << "\n\n\nEnter the required details:\n";
        cout << "------------------------------------\n"
             << endl;
        cout << "Enter your name:";
        cin >> name;
        cout << "Enter your email ID :";
        cin >> email;
        cout << "Enter your gender:";
        cin >> gender;
        cout << "Enter your contact number:";
        cin >> contact_no;
        cout << "Enter your passport number:";
        cin >> adhaar_num;
    }

    // Function to display passenger details
    void display_details()
    {
        system("CLS");
        cout << "\n\nPassenger details\n";
        cout << "--------------------------------------\n"
             << endl;
        ;
        cout << "Name:" << name << endl;
        cout << "Gender:" << gender << endl;
        cout << "Email ID:" << email << endl;
        cout << "Contact No.:" << contact_no << endl;
        cout << "Adhaar number :" << adhaar_num << endl;
    }

    // Function to get pnr for inState booking
    int getpnr_inState()
    {
        return in_pnr;
    }

    // Function to get pnr for out of state booking
    int getpnr_int()
    {
        return out_pnr;
    }

    // Function to display details of inState booking

    void disp_inState()
    {
        cout << "PNR :" << in_pnr << endl;
        cout << "train:" << train_inState << endl;
        cout << "Name:" << name << endl;
        cout << "Boarding date:" << date_inState << endl;
        cout << "Departure Time:" << inState_dep << endl;
        cout << "Arrival Time:" << inState_arr << endl;
        cout << "Meal choice:" << meal1 << endl;
    }

    // Function to display details of out of state booking

    void disp_int()
    {
        cout << "PNR:" << out_pnr << endl;
        cout << "train:" << train_out << endl;
        cout << "Name:" << name << endl;
        cout << "Boarding date:" << date_out << endl;
        cout << "Departure Time:" << out_dep << endl;
        cout << "Arrival Time:" << out_arr << endl;
        cout << "Meal choice:" << meal2 << endl;
    }
};

// class for payment
class payment
{

    // Declaring variables
protected:
    int choice3, bank, bank1, card, date, cvv, user_id;
    char password[30];

public:
    // Function for getting and displaying payment details
    void payment_details()

    {

        system("CLS");
        cout << "\n\n\nMode of payment\n";
        cout << "\n1.Debit Card(1) \n2.Credit Card(2) \n3.Net Banking(3)";
        cout << "\n\nEnter your choice :";
        cin >> choice3;
        switch (choice3)
        {
        case 1:
            cout << "Enter card number:";
            cin >> card;
            cout << "Enter expiry date:";
            cin >> date;
            cout << "Enter CVV number:";
            cin >> cvv;
            cout << "Transaction Successful\n";
            break;
        case 2:
            cout << "Enter card number:";
            cin >> card;
            cout << "Enter expiry date:";
            cin >> date;
            cout << "Transaction Successful\n";
            break;
        case 3:
            cout << "\nBanks Available:\n----------- \n1.State bank of India(1) \n2ICICI(2) \n3.Axis Bank(3) \n4.HDFC(4)";
            cout << "\nSelect your bank:";
            cin >> bank;

            cout << "\nYou have selected:" << bank;
            cout << "\nEnter user id:";
            cin >> user_id;
            cout << "Enter password:";
            cin >> password;
            cout << "-----------------------------";
            cout << "\nTransaction Successful\n";
            cout << "-----------------------------";
            break;
        default:
            cout << "\nWrong input entered.\nTry again\n";
            return payment_details();
        }
    }
};

// Function to create inState train ticket
void createfile_inState(passenger y)
{
    ofstream file_out("inState_train_details.txt", ios::binary | ios::app);
    // writing to file
    file_out.write((char *)&y, sizeof(y));
    // closing file
    file_out.close();
}
// Function to cancel inState train ticket
void inState_cancelticket(int x)
{
    passenger y;
    int f = 0;
    ifstream file_in("inState_train_details.txt", ios::binary | ios::app);
    ofstream file_out("inState_train_details1.txt", ios::binary | ios::app);
    file_in.read((char *)&y, sizeof(y));
    while (file_in)
    { // checking if pnr exists
        if (y.getpnr_inState() != x)
            file_out.write((char *)&y, sizeof(y));
        else
        { // Calling function to display details
            y.disp_inState();
            cout << "\nYour  ticket has been deleted\n";
            // Incrementing if pnr is found
            f++;
        }
        // reading another record from file
        file_in.read((char *)&y, sizeof(y));
    }
    if (f == 0)
        cout << "Ticket not found\n";
    file_out.close();
    file_in.close();

    // deleting old file
    remove("inState_train_details.txt");
    // renaming new file
    rename("inState_train_details1.txt", "inState_train_details.txt");
}

void inState_checkticket(int x)
{
    passenger y;
    int f = 0;
    ifstream file_in("inState_train_details.txt", ios::binary);
    file_in.read((char *)&y, sizeof(y));
    while (file_in)
    { // checking pnr
        if (y.getpnr_inState() == x)

        {
            cout << "\nTicket details\n"
                 << endl;
            y.disp_inState();

            f++;
            break;
        }
        // reading another record from the same file
        file_in.read((char *)&y, sizeof(y));
    }
    file_in.close();
    // if f==0, pnr not found
    if (f == 0)
        cout << "This PNR number does not exist" << endl;
}
// Function to create a file for out of state booking
void createfile_out(passenger y)
{
    ofstream file_out("out of state.txt", ios::binary | ios::app);
    file_out.write((char *)&y, sizeof(y)); // writing to file
    file_out.close();                      // closing file
}
// Function to cancel a file for out of state booking
void out_cancelticket(int x)
{
    passenger y;
    int f = 0;
    ifstream file_in("out of state.txt", ios::binary | ios::app);
    ofstream file_out("out of state1.txt", ios::binary | ios::app);
    file_in.read((char *)&y, sizeof(y));
    while (file_in)
    {
        if (y.getpnr_int() != x)
            // writing to new file;
            file_out.write((char *)&y, sizeof(y));
        else
        { // Calling function to display details
            y.disp_int();
            cout << "You ticket is being deleted\n";
            // incrementing f if pnr found
            f++;
        }
        // reading another record from old file
        file_in.read((char *)&y, sizeof(y));
    }
    // if f==0,pnr not found
    if (f == 0)
        cout << "\nTicket not found\n";
    file_in.close();
    file_out.close();
    // deleting old file
    remove("out of state.txt");
    // renaming new file
    rename("out of state1.txt", "out of state.txt");
}

void int_checkticket(int x)
{
    passenger y;
    int f = 0;
    ifstream file_in("out of state.txt", ios::binary);
    file_in.read((char *)&y, sizeof(y));
    while (file_in)
    {
        // checking pnr
        if (y.getpnr_int() == x)
        {
            cout << "\nTicket details\n"
                 << endl;
            y.disp_int();
            f++;
            break;
        }
        // reading another record from the file
        file_in.read((char *)&y, sizeof(y));
    }
    file_in.close();
    // if f==0, pnr not found
    if (f == 0)
        cout << "This PNR number does not exist" << endl;
}

int main()
{
    // Creating objects for classes
    class inState_booking d;
    class outState_booking i;
    class passenger p;
    class payment pay;

    // Declaring variables
    int choice, choice1, choice2, choice3, input;
    int flag = 0;

    // Do-While loop
    do
    {
        system("CLS");

        cout << "TRAIN RESERVATION SYSTEM" << endl;
        cout << "--------------------------------" << endl;
        cout << "1.Book train(1) \n2.Cancel train(2) \n3.Check your train ticket(3) \n4.Exit(4)" << endl;
        cout << "--------------------------------" << endl;
        cout << "Enter your choice:" << endl;
        cin >> choice;

        // Switch-Case statements
        switch (choice)
        {
        case 1:
            system("CLS");
            cout << "Please enter your choice" << endl;
            cout << "1.inter State Trains(1)\n2.out of state trains(2)" << endl;
            cout << "\nEnter your option" << endl;
            cin >> choice1;

            switch (choice1)
            {

                // Booking inState train

            case 1:
                p.generate_in_state_pnr();
                p.passenger_details(1);
                pay.payment_details();
                p.display_details();
                p.disp_inState();
                createfile_inState(p);
                break;

                // Booking out of state ticket
            case 2:
                p.generate_out_state_pnr();
                p.passenger_details(2);
                pay.payment_details();
                p.display_details();
                p.disp_int();
                createfile_out(p);
                break;

            default:
                cout << "Wrong input.\n\nPlease enter 1 for inState train booking and 2 for out of state train booking" << endl;
                return main();
            }
            break;

        // Canceling train ticket
        case 2:

            system("CLS");
            cout << "1.inState trains(1) \n2.out of state trains(2)" << endl;
            cout << "\nPlease enter your option" << endl;
            cin >> choice2;
            if (choice2 == 1)
            {
                cout << "Enter your PNR number :" << endl;
                cin >> input;
                inState_cancelticket(input);
            }
            else if (choice2 == 2)
            {
                cout << "Enter your PNR number :" << endl;
                cin >> input;
                out_cancelticket(input);
            }
            else
            {
                cout << "Wrong input.\n";
                return main();
            }
            break;

        // Displaying booked ticket details
        case 3:
            system("CLS");
            cout << "Check your tickets" << endl;
            cout << "------------------------" << endl;
            cout << "1.inter State Trains(1) \n2.out of state trains(2)" << endl;
            cout << "\nEnter your option :" << endl;
            cin >> choice3;
            if (choice3 == 1)
            {
                cout << "\nEnter your PNR number :" << endl;
                cin >> input;
                inState_checkticket(input);
            } // function call to display inState ticket details
            else if (choice3 == 2)
            {
                cout << "\nEnter your PNR number :" << endl;
                cin >> input;
                int_checkticket(input); // function call to display inState ticket details
            }
            else
            {
                cout << "Wrong input.";
                return main();
            }
            break;
        case 4:
            system("CLS");
            return 0;

        default: // for wrong input
            cout << "Wrong input.Please enter the correct input \n\n\n\n"
                 << endl;
            return main();
        }
        cout << "\n\n\n0 to exit, 1 to continue" << endl;
        cin >> flag;
    } while (flag == 1);
    return 0;
}


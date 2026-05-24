#include<iostream>
#include<fstream>
#include<string>
#include<limits>
using namespace std;
void Display();

void addExpense(){
    
    string type;
    int price;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');//Input Buffer Clean

    cout<<"Enter Item Type: ";
    getline(cin, type);

    while(true){
    cout<<"Enter Price(Rs): ";
    cin>>price;

    if(cin.fail()){
        cout<<"Invalid Input! Price Must be in Numbers."<<endl;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Buffer Clean
        
    }
    else{
        break; //loop is infinie , Break is used to stop Loop
    }

}

    ofstream file("data.csv", ios::app);
    
    file<<type<<","<<price<<endl;
    file.close();

    cout<<"Expense Added Successfully:"<<endl;

}

void viewExpense(){
    string output;
    ifstream file("data.csv");
    string line;
    
    while(getline(file, line)){ //getline return true
        int pos=line.find(","); //Find Comma to Seperate type part and price part of string
        string type=line.substr(0,pos);//store type part in type
        string price=line.substr(pos+1);//store price part in price
        cout<<"Type: "<<type<<" || Price: "<<price<<endl;;
    }

}

void showTotal(){
    ifstream file("data.csv");

    string output;
    int total = 0;

    while(getline(file, output)) //getline returns true
    {
        int pos = output.find(',');            // comma dhoondo
        string priceStr = output.substr(pos+1); // price nikaalo
        int price = stoi(priceStr);            // string → int

        total += price;  // add karo
    }

    cout << "Total Expense: " << total << endl;

    file.close();
}


void Display(){

    int choice;

    do {
        cout<<"<-------------Manage Your Expense-------------->"<<endl;
        cout<<"1. Add Expense "<<endl;
        cout<<"2. View Expense "<<endl;
        cout<<"3. Show Total "<<endl;
        cout<<"4. Exit "<<endl;
        while(true){
        cout<<"Enter Your Choice(1-4): ";
        cin>>choice;

        if (cin.fail()){
            cout<<"Invalid Input! Enter Number Only."<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Buffer Clean
        }else{
            break;
        }
    }

        switch(choice){
            case 1: 
            addExpense(); 
            break;
            case 2:
            viewExpense(); 
            break;
            case 3: 
            showTotal(); 
            break;
            case 4:
            exit(0);
            default:
            cout<<"Invalid Input! Enter Input (1-4)"<<endl;
        }

    } while(choice != 4);

}
int main(){
    Display();
}

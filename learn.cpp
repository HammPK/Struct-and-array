#include <iostream>
using namespace std;

//variable declaration
int currentThings = 0;
struct things{
    string name;
    float price;
    int stock;
} th[50];
//variable declaration end

//Menu 1
void viewStocks(){
    for (int i = 0; i < currentThings; i++){
        cout << i+1 <<". Name : "<<th[i].name << endl;
        cout << "Price : Rp " << th[i].price << ",- \n";
        cout << "Current stock : " << th[i].stock << endl << endl;
    }
}
//menu 1 end

//menu 2
void addStocks(){
    do{
        
    }while();
    for(int i = 0){

    }
}

//Main program
int main(){  
    string userName, password;
    int tryLeft = 3, menu;

    //login
    do{
        cout << "========= WELCOME TO LOGIN SECSION ========= \n";
        cout << "Please input your username and password \n";
        cout << "Username : ";
        cin >> userName;
        cout << "Password : ";
        cin >> password;

        if(userName != "ilham" || password != "admin123"){
            tryLeft--;
            if(tryLeft <= 0){
                return 0;
            }else{
                cout << "Inccorect username or password!!! Try again " << tryLeft << " left \n";
            }
        }else{
            cout << "Welcome Admin!!!!\n\n";
        }

    }while(userName != "ilham" || password != "admin123");
    //login end

    //Menu
    do{
        cout << "========== WELCOME TO MENU =========== \n";
        cout << "1. View Stocks \n";
        cout << "2. Add Stocks \n";
        cout << "3. Edit Stoks \n";
        cout << "Input menu (1-4) : ";
        cin >> menu;

        switch (menu)
        {
        case 1:
            if (currentThings > 0){
                viewStocks();
            }else{
            cout << "No stock available/ \n";
            }
            break;
        
        case 2:
            addStocks();
            break;

        case 3:
            editStocks();
            break;

        default:
            cout << "Incorrect Input!!! try again. \n";
            break;
        }
    }while(menu != 4);
    //menu end
    return 0;
}
//main program end
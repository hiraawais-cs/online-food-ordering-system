#include <iostream>  
#include <string>  
using namespace std;   
int main() {     
string name; 
string contact;    
string names[6] = {"Burger", "Pizza", "Pasta", "Fries", "Sandwich", "Coke"}; 
int prices[6] = {150, 450, 250, 100, 180, 80};     
int cart[6][2] = {        
    {0, 0},       
    {0, 0},       
    {0, 0},       
    {0, 0},        
    {0, 0},       
    {0, 0}    
};
int choice; 
char orderAgain;    
bool itemOrdered = false;     
cout << "=========================================" << endl;     
cout << "       ONLINE FOOD ORDERING SYSTEM       " << endl;    
cout << "=========================================" << endl;
cout << "Enter your name: "; 
getline(cin, name);    
cout << "Enter your contact number: ";    
cin >> contact;     
do {       
cout << "\n--- MENU ---" << endl;                
    
for (int i = 0; i < 6; i++)
{           
 cout << (i + 1) << ". " << names[i] << " - RS " << prices[i] << endl;}
    
cout << "\nEnter the number of the item you want: "; 
cin >> choice;       

if (choice >= 1 && choice <= 6) 
{           
    int quantity;         
    cout << "Enter quantity: ";             
    cin >> quantity;
 while (quantity <= 0) 
 {                 
    cout << "Quantity must be 1 or more! Re-enter: ";              
    cin >> quantity;            
 }            
    cart[choice - 1][0] += quantity;           
    cart[choice - 1][1] += quantity * prices[choice - 1];              
    itemOrdered = true;          
    cout << "Added to cart successfully!" << endl;
} 
else {  
    cout << "Invalid choice! Please select a number between 1 and 6." << endl;
 }       
   cout << "\nDo you want to order anything else? (y/n): ";         
   cin >> orderAgain; 

}while (orderAgain == 'y' ||orderAgain=='Y');   
cout<<"\n=========================================" << endl;
  cout << "FINAL RECEIPT " << endl;   
cout<<"=========================================" << endl;     
  cout << "Customer Name: " << name << endl;  
  cout << "Contact Number: " << contact << endl;
  cout << "-----------------------------------------" << endl;   
if (itemOrdered == false) 
{       
   cout << "No items ordered. Thank you!" << endl;
 } 
else {       
     int grandTotal = 0;      
    for (int i = 0; i < 6; i++) 
 {           
    if (cart[i][0] > 0) 
    {cout << names[i] << " x" << cart[i][0] << " = RS " << cart[i][1] << endl;               
grandTotal += cart[i][1]; 
    }       
}      
cout << "-----------------------------------------" << endl;       cout << "GRAND TOTAL: RS " << grandTotal << endl;         
cout << "=========================================" << endl;     
    } 
return 0;
}
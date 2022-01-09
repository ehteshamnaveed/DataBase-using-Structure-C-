#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int size=30 , present=0;

struct Data
{
  string name;
  int regNo;
  float CGPA;
  string email;
  };
    
    
        // Initialize Functionm
void Ini(Data  I[] , int a) // Done
{
  for ( int i=0 ; i<=a ; i++)
  {
    cout<<"\n Enter the Name: ";
    std :: cin.clear();
    cin.ignore();
    getline(cin,I[i].name);
    
    cout<<" Enter the RegNo: ";
    cin>>I[i].regNo;
    
    cout<<" Enter the CGPA: ";
    cin>>I[i].CGPA;
    
    cout<<" Enter the Email: ";
    std :: cin.clear();
    cin.ignore();
    getline(cin,I[i].email);
    
    present ++;
    cout<<endl;
    
    }
    system("cls");
    cout<<endl<< "\a ...........   Students are Initialized   ...........\n\n";
}
    
    
        // Search Function
int Ser(Data CS[] , int &present , int &ser1) // Done
{
  for(int i=0 ; i<present ; ++i)
  {
    if( CS[i].regNo == ser1 )
    {
        cout << " \n ....  Match Found !  ....\n";
        cout << "\n ** The Index Location : " << i << endl;
        cout << "\n Reg No : " << CS[i].regNo << endl;
        cout << "\n Name is : " << CS[i].name << endl;
        cout << "\n CGPA is  : " << CS[i].CGPA << endl;
        cout << "\n Email Address : " << CS[i].email << "\n\n";
        return i;
         } 
   }
      cout << "\n ....  Match not Found !  .... \n";
      return -1;
}
    
   
          // Insert Function
void Ins(Data A[] , int &present) // Done
{
      cout<<"\n .... Insert the Record .... \n\n";
      cout<<"\n Enter the Name: ";
      std :: cin.clear();
      cin.ignore();
      getline(cin,A[present].name);
    
      cout<<" Enter the RegNo: ";
      cin>>A[present].regNo;
    
      cout<<" Enter the CGPA: ";
      cin>>A[present].CGPA;
    
      cout<<" Enter the Email: "; 
      std :: cin.clear();
      cin.ignore();
      getline(cin,A[present].email);
    
      present ++;
      system("cls");
      cout<<endl;
  
  cout<<endl<< "\a ...........   Student is Added   ...........\n\n";
}
  
  
        // Update Function
void Upd(Data CS[] , int U) // Done
{
    cout<<"\n Enter the Name: ";
    std :: cin.clear();
    cin.ignore();
    getline(cin,CS[U].name);
    
    cout<<" Enter the RegNo: ";
    cin>>CS[U].regNo;
    
    cout<<" Enter the CGPA: ";
    cin>>CS[U].CGPA;
    
    cout<<" Enter the Email: ";
    std :: cin.clear();
    cin.ignore();
    getline(cin,CS[U].email);
    
    system("cls");
    cout<<endl;
  
  cout<<endl<< "\a ...........   Student is Updates   ...........\n\n";
}
  
  
        // Delete Function
void Del(Data CS[] , int &del , int &present) // Done
{
  int b = Ser (CS , present , del);
  if(b != -1)
  {
  char f;
  cout << "\n WARNING!!! . Are you sure you want to Delete : ";
  cin >> f;
  
   for(int  z= 0 ; z< 1 ; z++)
    {
      switch(f)
      {
       case 'y': case 'Y':
       for( int i=b ; i<present ; i++)
           {
             CS[i] = CS[i + 1];
           }
       present--;
       cout<<endl<< "\a ...........   Student is Deleted   ...........\n\n";
       break;
      
      case 'n': case 'N':
      cout << "\n  Request Reverted " ;
      break;
      }
      }
    }
}
  
  
  // Sort Function
void Sor(Data CS[] , int &present) // Done
{
    for (int i = 0 ; i < present ; ++i)
    {
        for (int j = i + 1 ; j < present ; ++j)
        {
            if (CS[i].regNo > CS[j].regNo)
            {
                int temp =  CS[i].regNo;
                CS[i].regNo = CS[j].regNo;
                CS[j].regNo = temp;
            }
        }
    }
  cout << endl << "\a ...........   Students are Sorted   ...........\n\n";
}
  
  
  // Prints the Array 
void Prin(Data CS[] , int &present) // Done
{
  system("cls");
  cout<<"\n\n .......   Printing the Array    .......\n";
     for (int i = 0; i < present ; ++i)
       {
         cout << "\n ** The Index Location : " << i << endl;
          cout << "\n Reg No : " << CS[i].regNo << endl;
         cout << "\n Name is : " << CS[i].name << endl;
         cout << "\n CGPA is  : " << CS[i].CGPA << endl;
         cout << "\n Email Address : " << CS[i].email << "\n\n";
        }
}


int main ()
{   
  int o;
  char c;
  Data CS[30];
  
  // Initializing The Array
  while ( int j=1)
  {
    int i;
  
    cout << " \n\n ...........   Welcome   ...........";
    cout << "\n\n\n How much Array you want to Initialize : ";
      cin >> i;
     
      if( i>=0 && i<=30)
       {
         Ini(CS , i);
         break;
         } 
     
      else
       {
       cout << "\n\n Enter between ( 0 to 30 ).\n\n";
         j=0; 
         }
     }
  
     // Menu 
  for(int i= 0 ; o!=7  ; i++)
  {
    cout <<"\n\a\a Welcome. Press C to continue: ";
      cin>>c;  
    if((c == 'c') || (c == 'C'))
    { 
     cout << "\n 1: Inserting a Record \n"
          << " 2: Update a Record \n"
          << " 3: Deleting a Record  \n"
          << " 4: Searching a Record \n"
          << " 5: Sorting all Records \n"
          << " 6: Print the Records \n"
          << " 7: Exit \n"
          << "\n Choose an option : ";
      cin >> o;  
    
     switch(o)
     {  
         // For First Function 
      case 1:
          system("cls");
          Ins(CS , present);
                break ;

         
         // For Second Function
      case 2:
          int up1;
          system("cls");
          while (int i=1)
          {
           cout<<"\n Enter the aray index to be Updated : ";
           cin>>up1;
         
           if(up1>=0 && up1<present)
           {
             Upd(CS , up1);
             break;
            }
           else 
            {
              cout<<" The Maximum array available is "<< present ;
              cout<<endl<<endl;
              i=0;
            }
         }
          break;
         
         // For Third Function 
      case 3:
          int de1;
          system("cls");
          cout<<"\n Enter the Reg No of the Location : ";
          cin>>de1; 
          Del(CS , de1 , present);
          break;
          
        // For Forth Function
      case 4:
          int ser1;
          system("cls");
          cout<<"\n Enter the Reg No : ";
          cin>>ser1;
          
          Ser(CS , present , ser1);
          break;
         
        // For Fifth Function  
      case 5:
                Sor(CS , present);    
                break;
          
        // Printing Function
      case 6:
          Prin (CS , present);
          break ;  
           
          // Exit menu
          case 7:
          i=2;
          break ;   
     }
       
            cout <<endl << endl;
      } 
            i--;
  }
    cout << endl;
    system("pause");
    return 0;
}

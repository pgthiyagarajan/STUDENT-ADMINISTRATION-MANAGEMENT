# include <iostream>	
# include <fstream>
# include <string>
using namespace std;

void Get_Student_Data();
void Input_Data();
int main()
{
   cout<<"######******************** STUDENT ADMISSION SYSTEM ********************######"<<endl;
   
   char select;
    string fileName;
    cout<<"ENTER 'E' TO ENTER DETAILS OF A STUDENT (OR) ENTER 'F' TO FIND A STUDENT  :  ";
    cin>>select;
    if(select=='E' || select=='e')
    {
         		
        Input_Data();  //function calling 	
   
	}
	if (select=='F' || select=='f')
	{
	    cout<<"To Get Info"; 
		Get_Student_Data();    // function calling
	}
    else{
    	
    	cout<<"Please Enter Correct Option..!!";
	}
	
return 0;	
}

void Input_Data()
{
	
	char student_data[2000];
	string  fileName,temp;	
	
	getline(cin,temp);
    cout<<"......................."<<endl;
   		cout<<"Enter Student Roll#=";
        getline(cin,fileName);
   ofstream wr(fileName.c_str());
	cout<<"Roll#"<<fileName<<endl;


	cout<<"Enter The Name Of Student=";
	cin.getline(student_data, 2000);
    wr<<"Name : "<<student_data<<endl;
    
	cout<<"Enter The father name=";
	cin.getline(student_data, 2000);
    wr<<" Father Name : "<<student_data<<endl;
	
	cout<<"Enter Adress =";
	cin.getline(student_data, 2000);
    wr<<"Adress :"<<student_data<<endl;
    
    cout<<"Enter the CNIC=";
	cin.getline(student_data, 2000);
    wr<<"CNIC :"<<student_data<<endl;
    
    cout<<"Enter the date of birth=";
	cin.getline(student_data, 2000);
    wr<<"Date of birth:"<<student_data<<endl;
		
	cout<<"Enter Contact No =";
	cin.getline(student_data, 2000);
    wr<<"Phone :"<<student_data<<endl;
    
    cout<<"Enter the religion  =";
	cin.getline(student_data, 2000);
    wr<<"religion :"<<student_data<<endl;
    
    cout<<"Enter the blood group  =";
	cin.getline(student_data, 2000);
    wr<<"blood group :"<<student_data<<endl;
    
    cout<<"Enter total inter marks=";
	cin.getline(student_data, 2000);	
    wr<<"Total inter marks= :"<<student_data<<endl;
    
	cout<<"Enter obtain inter Marks =";
	cin.getline(student_data, 2000);
    wr<<"obtain inter Marks :"<<student_data<<endl;
    
    cout<<"Enter the email address =";
	cin.getline(student_data, 2000);
    wr<<"email address :"<<student_data<<endl;
    
    cout<<"Enter the admission date =";
	cin.getline(student_data, 2000);
    wr<<"Admission date :"<<student_data<<endl;
    
 	cout<<"Department=";
	cin.getline(student_data, 2000);
    wr<<"Department :"<<student_data<<endl;
    
	cout<<"Enter Fees Per Semester=";
	cin.getline(student_data, 2000);
    wr<<"Fees Per Semester=:"<<student_data<<endl;
    
   
    wr.close();
}

void Get_Student_Data()
{
	ifstream rd;
	string lines;
	string fileName,temp;
    getline(cin,temp);
 cout<<"......................."<<endl;
   		cout<<"Enter Student Roll#=";
        getline(cin,fileName);
   rd.open(fileName.c_str());	
	if(rd.is_open())
	{
		while (getline(rd,lines))
		{
			cout<<lines<<endl;
		}
	 }
	 rd.close();
}

#include <iostream>
#include <iomanip>
using namespace std;

int footerFun(void);
int main()
{
	cout << left <<
		setw(20)<< "S.No" <<
		setw(20) << "City" << 
		setw(20) << "District" << 
		setw(20) << "Province" << 
		setw(20) << "Population" << endl;
	
	cout << left <<
		setw(20)<< "1." <<
		setw(20) << "Kathmandu" <<  
		setw(20) << "Kathmandu" << 
		setw(20) << "Bagmati" << 
		setw(20) << 50000 << endl;
	
	cout << left <<
		setw(20)<< "2." <<
		setw(20) << "Pokhara" << 
		setw(20) << "Kaski" << 
		setw(20) << "Gandaki" << 
		setw(20) << 50000 << endl;
	
	cout << left <<
		setw(20)<< "3." <<
		setw(20) << "Butwal" << 
		setw(20) << "Rupendehi" << 
		setw(20) << "Lumbini" << 
		setw(20) << 100000 << endl;
	
	cout << left <<
		setw(20)<< "4." <<
		setw(20) << "Dharan" << 
		setw(20) << "Sunsari" << 
		setw(20) << "Madhesh" << 
		setw(20) << 80000 << endl;
	
	footerFun();
	return 0;
}

int footerFun(){
		char name[] = "Sumit Kumar Chaurasiya";
	char faculty[] = "BSc.CSIT";
	char semester[] = "II";
	char section[] = "D";
	
	int rollNo = 132;
	int batch = 2082;	
	cout << endl <<"------------------------------------------------------------------------" << endl;
	cout << "Name" << ":" << left <<  name << endl;
	cout << "Class"<< right <<":"<<faculty << " Sem : " << semester << " Sec : " << section << endl;
	cout << "Roll No."<< left << ":" << rollNo;
}

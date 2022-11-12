#include <iostream>
using namespace std;
class Student {
    public:
        string fullname;
        string gender;
        int ID;
        string email;
        int bornyear;
        string country;
        void go (){
            cout << "Student " << fullname << " going to University. " << endl;
        }
        void get_info(){
            cout << "Fullname : "<<fullname<<endl;
            cout << "Gender : "<<gender<<endl;
            cout << "ID : "<<ID<<endl;
            cout << "Email : "<<email<<endl;
            cout << "Born year : "<<bornyear<<endl;
            cout << "Country : "<<country<<endl;
        }

        Student(string fullname , string male,int ID,string email,int bornyear,string country){
            this->fullname=fullname;
			this->gender=male;
            this->ID=ID;
            this->country=country;
            this->bornyear=bornyear;
            this->email=email;
        }
};

int main() {
    Student Talaba("Jonh Deer","Male",1234,"student1234@gmail.com",1998,"Uzbekistan");
    Talaba.go();
    Talaba.get_info();

    return 0;
}

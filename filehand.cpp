
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

class doctor {
private:
    string doctor_name;
    double doctor_fee;
    string doctor_time;
public:
    void setdata(string n, double f, string t) {
        doctor_name = n;
        doctor_fee = f;
        doctor_time = t;
    }
    string getdoctor_name()
    {
        return doctor_name;

    }
    double getdoctor_fee()
    {
        return doctor_fee;
    }
    string getdoctor_time()
    {
        return doctor_time;
    }
    virtual void information() = 0;
};

class dentist : public doctor {
public:
    void information() {
        cout << "Doctor Name: " << getdoctor_name() << endl;
        cout << "Appointment Time: " << getdoctor_time() << endl;
        cout << "Appointment Fee: " << getdoctor_fee() << endl;
    }
};

class cardiologist : public doctor {
public:
    void information() {
        cout << "Doctor Name: " << getdoctor_name() << endl;
        cout << "Appointment Time: " << getdoctor_time() << endl;
        cout << "Appointment Fee: " << getdoctor_fee() << endl;
    }
};

class entspecialist : public doctor {
public:
    void information() {
        cout << "Doctor Name: " << getdoctor_name() << endl;
        cout << "Appointment Time: " << getdoctor_time() << endl;
        cout << "Appointment Fee: " << getdoctor_fee() << endl;
    }
};

class bonespecialist : public doctor {
public:
    void information() {
        cout << "Doctor Name: " << getdoctor_name() << endl;
        cout << "Appointment Time: " << getdoctor_time() << endl;
        cout << "Appointment Fee: " << getdoctor_fee() << endl;
    }
};

class neurologist : public doctor {
public:
    void information() {
        cout << "Doctor Name: " << getdoctor_name() << endl;
        cout << "Appointment Time: " << getdoctor_time() << endl;
        cout << "Appointment Fee: " << getdoctor_fee() << endl;
    }
};
void filewrite(string patient_name,int patient_age,string n,double y,string z)
{
     ofstream info;
        info.open("tryagain.txt", ios::out | ios::app);

        info << "Patient Name: " << patient_name << endl;
        info << "Patient Age: " << patient_age << endl;
        info << "Doctor Name: " << n << endl;
        info << "Appointment fee: " << y << endl;
        info << "Appointment time: " << z << endl;
        info << "-----*********---------" << endl;

        info.close();

}


int main() {
    dentist d1;
    cardiologist d2;
    entspecialist d3;
    bonespecialist d4;
    neurologist d5;

    char exit = 'n';

    do {
        cout << "\n******* DOCTOR NAME AND APPOINTMENT ********\n";

        cout << "Patient Name: ";
        string patient_name;

        getline(cin, patient_name);

        int patient_age;
        cout << "Patient Age (use only digit): ";
        cin >> patient_age;

        cout << "Select Doctor:"<<endl;
        cout << "1. Dentist"<<endl;
        cout << "2. Cardiologist"<<endl;
        cout << "3. ENT Specialist"<<endl;
        cout << "4. Bone Specialist"<<endl;
        cout << "5. Neurologist"<<endl;

        int choice;
        cout << "Select Doctor: ";
        cin >> choice;

        string name;
        string time;
        double fee;

        if(choice == 1) {
            d1.setdata("Monira", 800, "2:00 to 4:00");
            d1.information();
            filewrite(patient_name,patient_age,"Monira", 800, "2:00 to 4:00");


        }
        else if(choice == 2) {
            d2.setdata("Sorna", 700, "3:00 to 6:00");
            d2.information();

filewrite(patient_name,patient_age,"Sorna", 700, "3:00 to 6:00");

        }
        else if(choice == 3) {
            d3.setdata("Ritu", 500, "2:00 to 7:00");
            d3.information();


filewrite(patient_name,patient_age,"Ritu", 500, "2:00 to 7:00");

        }
        else if(choice == 4) {
            d4.setdata("Albi", 550, "3:00 to 6:00");
            d4.information();

filewrite(patient_name,patient_age,"Albi", 550, "3:00 to 6:00");

        }
        else if(choice == 5) {
            d5.setdata("Hafsa", 700, "1:00 to 3:00");
            d5.information();

filewrite(patient_name,patient_age,"Hafsa", 700, "1:00 to 3:00");

        }
        else {
            cout << "Invalid choice!\n";
            continue;
        }




cout<<"Do you want to see the previous patient information (yes/no): ";
cin.ignore();
string ch;
getline(cin,ch);

if(ch=="yes" || ch=="YES")
{
    ifstream info;
    info.open("tryagain.txt");

    string line;
    while(getline(info, line))
    {
        cout << line << endl;
    }
    info.close();
}
else
{
    cout << "Do you want to exit? (y/n): ";
    cin >> exit;
}




    } while(exit == 'n' || exit == 'N');

    cout << "\n*********** Thank you for using the system ***********\n";

    return 0;
}

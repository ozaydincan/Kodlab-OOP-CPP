#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

inline float showTime(int h, double m, double s){
    cout<<"The time is "<<h<<":"<<m<<":"<<s<<endl;
}

class t{
    int a = 0;
    double b = 0, c = 0;
public:
    int hour = a;
    double minute = b, second = c;
}t;

class student{
private:
    string n, s, f;
    int num = 0;
public:
    string name = n, surname = s, faculty = f;
    int age = num;
    void get(){
        cout<< "What is the name: ";
        cin>>name;
        cout<<"What is the surname: ";
        cin>>surname;
        cout<<"Where does the student study: ";
        cin>>faculty;
        cout<<"What is the age: ";
        cin>>age;
    }
    void show(){
        cout<<endl<<"The age is: "<<name<<endl;
        cout<<"The surname is: "<<surname<<endl;
        cout<<"The age is: "<<age<<endl;
        cout<<"The student studies at: "<<faculty<<endl<<endl;
    }
    void all(){
        get();
        show();
    }

};

/*
class rectangle{
    int short_side = 0, long_side = 0;
public:
    int s_s = short_side, l_s = long_side;
    double area, circumference;
    friend double show(rectangle);
    rectangle(){
        cout<<"Enter the short side: ";
        cin>>s_s;
        cout<<"Enter the long side: ";
        cin>>l_s;
        area = s_s*l_s;
        circumference = 2*(s_s+l_s);
    }
}rec;

double show(rectangle){

    cout<<"The area is: "<< rec.area<<endl;
    cout<<"The circumference is: "<< rec.circumference<<endl;
};

class human{
    string n = "Can", s = "Özaydın";
    int a = 21;

public:
    string name = n, surname = s;
    int age = a;
    human(){
        cout<<"Name is "<<name<<endl;
        cout<<"Surname is "<<surname<<endl;
        cout<<"Age is "<<age<<endl;
    }
}p_1;
*/
class ogrenci{
private:
    int points = 0;
public:
    int mark = points;
    friend void fillNotes();
    friend void printNotes();
} s_1,s_2,s_3;

void fillNotes(){
    cout <<"Enter the note of the first student: ";
    cin>>s_1.mark;
    cout <<"Enter the note of the second student: ";
    cin>>s_2.mark;
    cout <<"Enter the note of the third student: ";
    cin>>s_3.mark;
}

void printNotes(){
    cout <<"The note of the first student is "<<s_1.mark<<endl;
    cout<<"The note of the second student is "<<s_2.mark<<endl;
    cout<<"The note of the third student is "<<s_3.mark<<endl;
}

class car{
    string brand, model, previousOwner;
    int price, miles;
public:
    car(string, string, int);
    car(int, car);
    friend void printCar(car obj);
};
car::car(string b, string m, int a) {
    brand = b;
    model = m;
    price = a;
}
car::car(int c, car obj) {
    miles = c;
    brand = obj.brand;
    model = obj.model;
    price = obj.price;
}

void printCar(car obj){
    cout<<"The name of the brand is "<<obj.brand<<endl;
    cout<<"The model is "<<obj.model<<" and the price is "<<obj.price<<endl;
    cout<<"The car has "<<obj.miles<<" miles."<< endl;
}

class staff{
    string name, surname;
    int salary;
public:
    staff(string,string,int);
    void assign(staff);
    friend void show(staff);
};
staff::staff(string n, string m, int a) {
    name = n;
    surname = m;
    salary = a;
}

void staff::assign(staff obj1) {
    salary = obj1.salary;
}

void show(staff obj) {
    cout<<"The person is called "<<obj.name<<" "<<obj.surname<<". \n";
    cout<<"They earn "<<obj.salary<<" euros per month."<<endl;
}


class house{
    string city;
    int rent, floor, no;
public:
    house(string, int , int ,int );
    friend void showHouse(house);
};

house::house(string c, int r, int f, int n) {
    city = c;
    rent = r;
    floor = f;
    no = n;
}

void showHouse(house obj) {
    cout<<"The city: "<<obj.city<<endl;
    cout<<"The floor: "<<obj.floor<<endl;
    cout<<"The rent: "<<obj.rent<<"€"<<endl;
    cout<<"The door number: "<<obj.no<<endl;
}

int main() {
    bool flag = true;
    int i = 1;
    char answer[4];
    house apt_1("Istanbul", 500, 1, 203);
    house apt_2("Torino", 495,3, 201);
    house apt_3("Muğla", 210, 1, 97);
    house apt_4("İzmir", 350, 6, 4);
    house apt_5("Ankara", 490, 13, 27);
    while (flag){
        switch (i) {
            case 1:
                showHouse(apt_1);
                break;
            case 2:
                showHouse(apt_2);
                break;
            case 3:
                showHouse(apt_3);
                break;
            case 4:
                showHouse(apt_4);
                break;
            case 5:
                showHouse(apt_5);
                break;
            default:
                cout<<"No more houses left.";
                ::exit(1);
        }
    cout<<"Do you want to see another house: ";
    cin>>answer;
        if (::strcmp(answer,"Yes") == 0|| ::strcmp(answer,"YES")==0|| ::strcmp(answer,"yes")==0){
            flag = true;
            i++;
        }else if(::strcmp(answer,"No") == 0|| ::strcmp(answer,"NO")==0|| ::strcmp(answer,"no")==0){
            flag = false;
            cout<<"House found.";
        }
    }
    return 0;
}

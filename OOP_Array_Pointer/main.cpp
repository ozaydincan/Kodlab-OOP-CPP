#include <iostream>
#include <cstring>
#include <ctime>
#include <list>

using namespace std;
/*
class car{
    int speed, serial_no, price;
    string model;
public:
    car(string m, int s, int s_n, int p){
        model = m;
        speed = s;
        serial_no = s_n;
        price = p;
    };
    void show(){
        cout<<"The model: "<<model<<'\n';
        cout<<"The price: "<<price<<'\n';
        cout<<"The top speed: "<<speed<<" km/h\n";
        cout<<"The serial no: "<<serial_no<<'\n';
    }
};

class movies{
    string n, l_n, m_title;
    int y = 0;
public:
    string name = n, lastname = l_n, movie_title = m_title;
    int year = y;
    movies(){
        cout<<"What is the name of the director: ";
        cin>>name;
        cout<<"What is the lastname of the director: ";
        cin>>lastname;
        cout<<"What is the title of the movie: ";
        cin>>movie_title;
        cout<<"When was the movie published: ";
        cin>>year;
        cout<<endl;
    };
    void printFilm() const{
        cout<<"Director: "<<name<<" "<<lastname<<'\n';
        cout<<"Name of the movie: "<<movie_title<<'\n';
        cout<<"Year of the movie: "<<year<<'\n';
        cout<<endl;
    }
    
};

class workers{
    string n, sn;
    int s = 0;
public:
    string name = n, surname = sn;
    int salary = s;
    workers(){
        cout<<"Enter the name (enter -1 to exit entering): ";
        cin>>name;
        if (name != "-1"){
            cout<<"Enter the surname: ";
            cin>>surname;
            cout<<"Enter the salary: ";
            cin>>salary;
            cout<<endl;
        }
    }
    void printWorker(){
        if (name != "-1"){
        cout<<endl<<"Name: "<<name<<'\n';
        cout<<"Surname: "<<surname<<'\n';
        cout<<"Salary: "<<salary<<'\n';
        }
    }
};

void printWorkers(vector<workers> worker){
    int i = 0;
    while (true){
        worker.push_back(workers());
        if (worker[i].name == "-1"){
            break;
        }
        i++;
    }
    for (int j = 0; j <= i; j++){
        if (size(worker) == 1){
            cout<<"No workers entered!";
        }
        worker[j].printWorker();
    }
}

class people{
    int number;
    string name;
public:
    bool flag = true;
    people(string n, int num){
        this ->name = n;
        this ->number = num;
    }
    void showPerson(string a, int b){
        if (name == a && number == b){
            cout<<"Name: "<<name;
            cout<<" No: "<<number<<endl;
            flag = false;
        }
    }
};

void checkPerson (vector<people> person){
    string name_asked;
    int no;
    cout<<"Enter a name to search: ";
    cin>>name_asked;
    cout<<"Enter the id: ";
    cin>>no;
    int i = 0;
    while(i < size(person)){
        person[i].showPerson(name_asked, no);
        if (!person[i].flag){
            break;
        }
        i++;
    }
    if (i == size(person)){
        cout<<"No matching id or name!";
    }
}*/

class students{
    string n, sn;
    int f_note = 0, m_note = 0;
public:
    string name = n, surname = sn;
    int final_note = f_note, mid_note = m_note;
    students(){
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the surname: ";
        cin>>surname;
        cout<<"Enter the final note: ";
        cin>>final_note;
        cout<<"Enter the midterm note: ";
        cin>>mid_note;
        cout<<endl;
    }
};
class results{
public:
    float divisor, dividend;
    results(){
        cout<<"Enter the dividend: ";
        cin>>dividend;
        cout<<"Enter the divisor: ";
        cin>>divisor;
    }
};

void printPercent(float dividend, float divisor){
    float res = (dividend/divisor)*100;
    cout<<"\nThe result: %"<<res<<endl;
}

int main() {
    /*
    car Tofas[4] = {car("Kartal", 200, 123, 100), car("Doğan", 210, 124, 110),
                    car("Şahin", 190, 125, 120), car("Murat", 220, 126,130)},
    Audi[4]= {car("Q8", 290, 234, 2000), car("Q4",280, 235, 2100),
     car("A1", 230, 236, 1800), car("A7", 310, 237, 2500)};
    for (int j = 0; j <4; j++){
        Tofas[j];
        Audi[j];
    }
    for (auto & Tofas : Tofas){
        cout<<"The car from Tofas: "<<'\n';
        Tofas.show();
        cout<<'\n';
        cout<<"The car from Audi: "<<'\n';
        Audi->show();
        cout<<'\n';
    }
    movies catalog[3];
    for (auto & i: catalog){
        i.printFilm();
    }
    vector<workers> worker;
    printWorkers(worker);

    vector<people> person = {people("Yağız", 100), people("Can", 101),
                        people("Alaaddin", 102), people("Altay", 103)};
    checkPerson(person);

    students notes[10] = {};
    int len = size(notes);
    for (int j = 0; j < len; j++){
        cout<<'\n'<<"Name: "<<notes[j].name<<" "<<notes[j].surname<<endl;
        cout<<"Midterm Note: "<<notes[j].mid_note<<endl;
        cout<<"Final Note: "<<notes[j].final_note<<endl;
    }*/
    vector<results> percentage = {};
    string flag;
    int i = 0;
    while (true){
        cout<<"Want to continue: ";
        cin>>flag;
        if (flag == "no"|| flag == "NO" || flag == "No"){
            break;
        }else if(flag == "yes"|| flag == "YES" || flag == "Yes") {
            percentage.push_back(results());
            i++;
        } else{
            cout<<"Please enter a valid response!!"<<endl;
        }
    }
    for (int j = 0; j<i; j++){
        printPercent(percentage[j].dividend, percentage[j].divisor);
    }
    return 0;
}

#include <iostream>
#include <limits>
#define N 10

using namespace std;

void getFactorial (int *n){
    int fact = 1;
    for (int i = *n; i > 0; i--){
       fact = fact *i;
    }
    *n = fact;
}
int getDigit(){
    int x;
    while (true){
        cout << "Enter an integer: ";
        if(cin >> x){
            break;
        }
        else{
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"Invalid input. Please enter an integer."<<endl;
        }
    }
    return x;
}

void changeFact(int *arr){
    int *ptr = arr;
    for (int i = 0; i < N; i++){
        getFactorial(ptr);
        cout<<*ptr<<endl;
        *ptr++;
    }
}

void checkName(char name[], char arr[10][20], int len){
    char *str = *arr;
    int count = 0;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < 20; j++){
            if (::strcmp(name, str) == 0&&count == 0){
                count = 1;
            } else{
                ++*(str++);
            }
        }
    }
    if (count == 1){
        cout<<name<<" is in the array";
    }
    else{
        cout<<name<<" isn't in the array";
    }
}

int main() {
    int flag = 0;
    char name[20];
    char arr[10][20] = {"Can", "Ahmet", "Mehmet", "Yasin", "Jack", "Tony",
                        "Vlad", "Muhsin", "Bahar", "Feride"};
    cout <<"Enter a name: ";
    cin>>name;
    int len = sizeof(name);
    /*
    for (const auto & i : arr){
        if (::strcmp(name, i) == 0){
            cout<<"Name "<<name<< " is in the array";
            flag = 1;
            break;
        }
    }
    if (flag == 0){
        cout<<"Name "<<name<<" isn't in the array";
    }
    */
    checkName(name,arr,len);

    return 0;
}

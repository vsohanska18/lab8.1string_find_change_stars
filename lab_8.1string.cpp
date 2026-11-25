#include <iostream>
#include <string>
using namespace std;

bool Find(string str);
void Change(string &str);

#ifndef UNIT_TEST
int main(){
    string str;
    cout << "Введіть рядок (не більше 100 символів): ";
    getline(cin, str);

    if(Find(str) == true){
        cout << "*** знайдені" << endl;
    }else{
        cout << "*** НЕ знайдені" << endl;
    }

    Change(str);
    cout << "Рядок після зміни: " << str << endl;
    return 0;
}
#endif

bool Find(string str){
    for(int i = 0; i < str.length() && str[i + 2] != '\0'; i++){
        if(str[i] == '*' && str[i+1] == '*' && str[i+2] == '*'){
            return true;
        }
    }
    return false;
}
void Change(string &str){
    for(int i = 0; i < str.length() && str[i + 2] != '\0'; i++){
        if(str[i] == '*' && str[i+1] == '*' && str[i+2] == '*'){
            str.replace(i, 2, "!!");
            str.erase(i + 2, 1);
            i--; 
        }
    }
}
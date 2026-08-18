#include <iostream>
using namespace std;


void concatenate(){

    string s1 ;
    string s2;

    cout<<endl<<"Enter the string1 for concatenation : "<<endl;
    cin>>s1;

    cout<<endl<<"Enter the string2 for concatenation  : "<<endl;
    cin>>s2;

    string ans ;

    ans = s1+" "+s2;

    cout<<ans;

}

void reverse(){

    string s;

    cout<<endl<<"Enter the string you want to reverse : "<<endl;
    cin>>s;

    int i = 0 , j = s.length()-1;

    cout<<endl<<"Before reversing string : "<<s;

    while(i<j){
        char c  = s[i];
        s[i] = s[j];
        s[j] = c;
        i++;
        j--;
    }

    cout<<endl<<"After reversing string : "<<s<<endl;
}

void RemoveVowels(){

    string s;

    cout<<endl<<"Enter the string from you want to removeVowels : "<<endl;
    cin>>s;

    int n = s.length();

    string ans = "";
    for(int i=0;i<n-1;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i] == 'u'){
            continue;
        }
        ans += s[i];
    }
    cout<<"After removing vowels : " << ans;
}

void sort(){

    string s;

    cout<<endl<<"Enter the string  you want to sort : "<<endl;
    cin>>s;

    int n = s.length();
    cout<<endl<<"Before sorting : "<<s;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(s[j]>s[j+1]){
                // swap 
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    cout<<endl<<"After sorting : "<<s; 

}

void ConvertUpperCaseToLoweCase(){
    char c ;
    cout<<endl <<"Enter a char in UpperCase only : "<<endl;
    cin>>c;

    if(c>='A' && c<='Z'){
        c+=32;
    }

    cout<<"After coverting to LowerCase : "<<c<<endl;
}

int main(){
    // operations
    concatenate();
    reverse();
    RemoveVowels();
    sort();
    ConvertUpperCaseToLoweCase();
}
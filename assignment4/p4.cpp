#include <iostream>
#include <queue>
using namespace std;
/*Write a program to find first non-repeating character in a string using Queue.
Sample I/P: a a b c Sample O/P: a -1 b b*/

void nonRepeatingChar(string str){
    queue<char> q;

    int freq[26];

    for(int i=0;i<26;i++){
        freq[i] = 0;
    }

    for(char ch : str){
        q.push(ch);
        freq[ch-'a']++;

        while(!q.empty()){
            if(freq[q.front()-'a']>1){
                q.pop();
            }
            else{
                cout<<q.front()<<" ";
                break;
            }
        }

        if(q.empty()){
            cout<<"-1 ";
        }
    }


}

int main(){
    string str;
    cout<<"Enter the string :";
    cin>>str;

    nonRepeatingChar(str);
}


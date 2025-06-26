/*Write a program that reads a line of text,
counting the number of words, identifying
the length of the longest word, the greatest
number of vowels in a word, and the word with
the most vowels.*/

#include<iostream>
#include<string>
using namespace std;
string text;
int count =1;
int main() {
    cout<<"Input a line of text "<<endl;
    getline(cin,text);

    for(int i=0;i<text.length();i++) {
        if(text[i]==' ') {
            count++;
        }
    }
    cout<<"The number of words in the line of text are "<<count<<endl;//Identifying the number of words in the line of text
    int longest;

    for(int i=0;i<text.length();i++) {
        if(text[i]) {}
    }
    return 0;

}



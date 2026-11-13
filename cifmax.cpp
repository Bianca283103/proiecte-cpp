#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[65],*p;
    cin.get(s,65);
    int f[10]={0};
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='0'&&s[i]<='9'){
            f[s[i]-'0']++;//aparitiile cifrei
        }
    }
    int maxim=0;
    int cifmax=-1;
    for(int i=0;i<=9;i++){//care are cele mai multe aparitii
        if(f[i]>maxim){
            maxim=f[i];
             cifmax=i;//cifra cu cele mai multe aparitii
        }

    }
    if(maxim==0){
        cout<<"NU";
    }
    else{
        cout<<cifmax;
    }

}







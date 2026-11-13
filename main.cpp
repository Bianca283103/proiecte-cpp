#include <iostream>

using namespace std;

int main()
{
    int n,i,j,v[1001],aux,k=0,x;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        if(x%10==0){
            k++;
            v[k]=x;
        }
    }



      for (i=1;i<k;i++){
        for(j=i+1;j<=k;j++)
            if (v[i]<v[j])
        {
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;

        }

      }
      if(k==0)
        cout<<"NU EXISTA";
       else
        for(i=1;i<=k;i++)

        cout<<v[i]<<" ";
}

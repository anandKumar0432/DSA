#include<iostream>
using namespace std;
class array
{
    private:
  int a[10];
  int size=0;
   public:
   void insert(int index,int value)
   {
    a[index]=value;
    size++;
   }
   int get(int index)
   {
    return a[index];
   }
   int getsize()
   {
    return size;
   }
   int search(int value)
   {
    for(int i=0;i<size;i++)
    { 
        if(a[i]==value)
        return i;
    }
    return -1;
   }
   void deletion(int index)
   {
     for(int i=index;i<size-1;i++)
     {
        a[i]=a[i+1];
     }
     a[size-1]=0;
     size--;
   }
   void displayarray()
    {
        for(int i=0;i<size;i++)
        {
            cout<<a[i]<<" ";
        }
    }
};
int main()
{
    array a;
    int n,x,value;
    cout<<" Enter the number :"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" Element"<<endl;
    
    for(int i=0;i<n;i++) 
    {
        cin>>x;
        a.insert(i,x);
    }
    cout<<endl;

    for(int i=0;i<a.getsize();i++)
    {
        cout<<a.get(i)<<" ";
    }
    cout<<endl;
    cout<<" Enter the searching element:"<<endl;
    cin>>value;
    int index=a.search(value);
     if(index!=-1)
     {
        cout<<"searching success "<<index<<endl;
     }
     else
     {
        cout<<"searching unsuccess "<<endl;
     }

     cout<<"Enter the deleting Element :"<<endl;
     cin>>index;
     a.deletion(index);
     a.displayarray();
    return 0;
}
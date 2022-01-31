/*Submitted by:- Sidharth Jain
  Enrollment no:- 0801CS201090
  Q.1 */
#include <iostream>
using namespace std;
class list{
    int n;
    public:
    list(int a){
        n=a;
    }
    void kthposition(int a[],int k,int key){
        for(int i=n;i>=k;i--)
            a[i]=a[i-1];
        a[k-1]=key;
        for(int i=0;i<n+1;i++)
        cout<<a[i]<<" ";
        n++;
        cout<<endl;
    }
    void fstposition(int a[],int fst){
        for(int i=n;i>=1;i--)
            a[i]=a[i-1];
        a[0]=fst;
        for(int i=0;i<n+1;i++)
        cout<<a[i]<<" ";
        n++;
        cout<<endl;
    }
    void lastposition(int a[],int end){
        a[n]=end;
        for(int i=0;i<n+1;i++)
        cout<<a[i]<<" ";
        n++;
        cout<<endl;
    }
    void delposition(int a[],int d){
        for(int i=d-1;i<n;i++){
            a[i]=a[i+1];
        }
        n--;
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
    void sizeoflist(){
        cout<<n<<endl;
    }
};
int main(){
    int a[200];
    cout<<"enter size of array : ";
    int n,k,key,fst,end,d;
    cin>>n;
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
    cin>>a[i];}
    list p(n);
    cout<<"enter the kth position : "<<endl;
    cin>>k;
    cout<<"enter the element of "<<k<<" position : "<<endl;
    cin>>key;
    p.kthposition(a,k,key);
    cout<<"enter element to insert at starting : ";
    cin>>fst;
    p.fstposition(a,fst);
    cout<<"enter element to inserted at last : ";
    cin>>end;
    p.lastposition(a,end);
    cout<<"enter position to deleted : ";
    cin>>d;
    p.delposition(a,d);
    cout<<"size of array : ";
    p.sizeoflist();
    return 0;
}
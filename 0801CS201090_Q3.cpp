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
    void first_position(int a[],int fst){
        for(int i=n;i>=1;i--)
            a[i]=a[i-1];
        a[0]=fst;
        for(int i=0;i<n+1;i++)
        cout<<a[i]<<" ";
        n++;
        cout<<endl;
    }
    void last_position(int a[],int end){
        a[n]=end;
        for(int i=0;i<n+1;i++)
        cout<<a[i]<<" ";
        n++;
        cout<<endl;
    }
    void del_position(int a[],int d){
        for(int i=d-1;i<n;i++){
            a[i]=a[i+1];
        }
        n--;
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
    void sizeof_list(){
        cout<<n<<endl;
    }
};
int main(){
    int a[]={1,3,4,6,8,5}
    cout<<"enter size of array : ";
    int n,k,key,fst,end,d;
    list p(6);
    cout<<"enter the kth position : "<<endl;
    cin>>k;
    cout<<"enter the element of "<<k<<" position : "<<endl;
    cin>>key;
    p.kthposition(a,k,key);
    cout<<"enter element to insert at starting : ";
    cin>>fst;
    p.first_position(a,fst);
    cout<<"enter element to inserted at last : ";
    cin>>end;
    p.last_position(a,end);
    cout<<"enter position to deleted : ";
    cin>>d;
    p.del_position(a,d);
    cout<<"size of array : ";
    p.sizeof_list();
    return 0;
}
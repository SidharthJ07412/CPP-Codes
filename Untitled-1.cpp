/*Submitted by:- Sidharth jain
0801CS201090
Q.4*/
#include<iostream>
using namespace std;

class omr{
    private:
    short int pixel[1000][1000];    // assuming 0 as white colured and anything else as dim/black
    public:                                                             
    omr(){
        for(int i=0;i<1000;i++){
            for(int j=0;j<1000;j++){
                pixel[i][j]=rand()%2;
            }
        }
    }
    // program to check only row is present or not..
    bool blots(){
        // int x=-1,y=-1;
        bool t = true;
        int count=0;
        for(int i=0,j=1;j<1000;j++){            // for top line
            if(pixel[i][j-1]!=0){
                        pixel[i][j]==pixel[i][j-1]++;
                    }
            if(pixel[i][j]==10){
                return true;
            }
        }
        for(int i=1,j=0;j<1000;i++){        // for left side line
            if(pixel[i][j]!=0){
                pixel[i][j]==pixel[i][j-1]++;
            }
            if(pixel[i][j]==10){
                return true;
            }
        }
    
    }
};

int main(){
    omr o;
    if(o.blots()) cout<<endl<<"blot found";
    else cout<<endl<<"blot not found";
}
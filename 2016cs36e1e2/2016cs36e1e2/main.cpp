//Since I am not sure what character encoding your IDE is I am using English here
//please check for ??? below for unclear points
//   the major issure is the output format
//E2P2 assignment spc is not clear from the snipit you give me


#include <iostream>
using namespace std;
void funcE1P1();
void funcE1P2();
void funcE2P1();
void funcE2P2();

int main(int argc, const char * argv[]) {
    funcE1P2();
    return 0;
}

void funcE1P1(){
    int n1,n2;
    //I'm using cin & cout for IO here
    //it's the C++ standard
    //Is it OK to use these functions or do you have to use the C ones?
    //such as: scanf & printf
    cin>>n1>>n2;
    //I'm just print the reuslt here
    //Is there a requirment for the output format???
    //Is your assignment marked by machine or human,if it is by machine, then probably you should make sure of the output format
    cout<<n1<<" "<<n2<<endl;
    cout<<n1+n2<<endl;
    cout<<n1-n2<<endl;
    cout<<n1*n2<<endl;
    cout<<(double)n1/n2<<endl;
    cout<<n1%n2<<endl;
    cout<<((double)n1+n2)/2<<endl;
}

void funcE1P2(){
    char firstName[10]={'\0'},LastName[10]={'\0'};
    char dpt[10]={'\0'};
    double curIncom=0, raisePcnt=0;
    double totalCurIncom=0,totalRaiseAmt=0, totalNewPayAmt=0;;
    for (int i=0; i<5; i++) {
        //I noticed a space between "Trump, " and "Hillary"
        //so I am using firstName and Lastname to take in both
        //make sure if there is a space, since if there is not
        //you only need one variable instead of two
        cin>>firstName>>LastName>>dpt>>curIncom>>raisePcnt;
        double raiseAmt=curIncom*raisePcnt/100;
        double newPayAmt=curIncom+raiseAmt;
        totalCurIncom+=curIncom;
        totalRaiseAmt+=raiseAmt;
        totalNewPayAmt+=newPayAmt;
        //again, what is the required output format???
        cout<<firstName;
        cout<<" "<<LastName;
        cout<<" "<<dpt;
        cout<<" $"<<curIncom;
        cout<<" "<<raisePcnt<<"%";
        cout<<" $"<<raiseAmt;
        cout<<" $"<<newPayAmt<<endl;
    }
    cout<<"$"<<totalCurIncom<<endl;
    cout<<"$"<<totalRaiseAmt<<endl;
    cout<<"$"<<totalNewPayAmt<<endl;
}


void funcE2P1(){
    char firstName[10]={'\0'},LastName[10]={'\0'};
    char dpt[10]={'\0'};
    double curIncom=0, raisePcnt=0;
    double totalCurIncom=0,totalRaiseAmt=0, totalNewPayAmt=0;;
    for (int i=0; i<5; i++) {
        cin>>firstName>>LastName>>dpt>>curIncom;
        //I use inclusive range here for each option
        //e.g. [70000.01, 80000] instead of (70000.01, 80000)
        //you should ask to make sure, since the assignemnt spec is not clear
        if (curIncom<=70000) {
            raisePcnt=8.5;
        }else if(curIncom>=70000.01 && curIncom<=80000){
            raisePcnt=7.2;
        }else if(curIncom>=80000.01 && curIncom<=90000){
            raisePcnt=5.9;
        }else if(curIncom>=90000.01){
            raisePcnt=5.1;
        }
        double raiseAmt=curIncom*raisePcnt/100;
        double newPayAmt=curIncom+raiseAmt;
        totalCurIncom+=curIncom;
        totalRaiseAmt+=raiseAmt;
        totalNewPayAmt+=newPayAmt;
        cout<<firstName;
        cout<<" "<<LastName;
        cout<<" "<<dpt;
        cout<<" $"<<curIncom;
        cout<<" "<<raisePcnt<<"%";
        cout<<" $"<<raiseAmt;
        cout<<" $"<<newPayAmt<<endl;
    }
    cout<<" $"<<totalCurIncom<<endl;
    cout<<" $"<<totalRaiseAmt<<endl;
    cout<<" $"<<totalNewPayAmt<<endl;
}

void funcE2P2(){
    //sorry can really see the end of the requirement
}
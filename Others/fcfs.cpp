#include<bits/stdc++.h>
using namespace std;
/// declaration of 3 types of array with size
int complition_time[1000],TT[1000],WT[1000];
/// every process has arrival time ,burst time & process id
/// therefor we use structure array named process with size 1000
/// so every process has the following variables
struct fcfs{
int A_t,B_t,id;
};
fcfs process[1000];
/// for sorting based on arrival time in ascending order
/// for we just call the name of the fuction compare
bool compare(fcfs a,fcfs b){
    return a.A_t<b.A_t;
}
int main(){
    int n,x,y,sum=0;
    scanf("%d",&n);         /// how many process
    for(int i=1;i<=n;i++){
        scanf("%d%d",&x,&y);       ///taking input as arrival time ,burst time
        process[i].id=i;process[i].A_t=x;process[i].B_t=y; /// initialization of id,A_t,B_t while taking input
    }
    sort(process+1,process+n+1,compare);  /// use sort function for sorting array
    sum=process[1].A_t+process[1].B_t;    /// for 1st process we can get the complition time
    complition_time[process[1].id]=sum;    /// by adding it's A_t + B_t
    TT[process[1].id]=complition_time[process[1].id]-process[1].A_t; /// then T.T = C.T - A.T
    /// for 1st process we know the waiting time is 0 ,we need not calculate it
    for(int i=2;i<=n;){
        if(process[i].A_t>sum){  /// if the arrival time is greater than the complition time
            sum=sum+(process[i].A_t-sum);  /// then we calculate the next  process's arrival time
        }           /// by calcutating this we point the next process's arrival time
        while(process[i].A_t<=sum){  /// if the next process's arrival time is less than the complition
            sum+=process[i].B_t;   /// time of the previous process then we calculate in this way
            complition_time[process[i].id]=sum;
           TT[process[i].id]=complition_time[process[i].id]-process[i].A_t;
           WT[process[i].id]=TT[process[i].id]-process[i].B_t;
           i++;
           if(i>n)break;
        }
    }
    ///* for printing the result*///
    cout<<"C.T"<<" "<<"T.T"<<" "<<"W.T"<<endl;
    for(int j=1;j<=n;j++){
        cout<<complition_time[j]<<" "<<TT[j]<<" "<<WT[j]<<endl;
    }

return 0;
}

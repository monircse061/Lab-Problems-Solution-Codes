#include<bits/stdc++.h>
using namespace std;
int CT[100],TT[100],WT[100];
struct sjfs{
int id,A_T,B_T;
};
sjfs process[100];
bool compare_at(sjfs x,sjfs y){
    return x.A_T<y.B_T;
}
bool com_burst(sjfs m,sjfs n){
    return m.B_T<n.B_T;
}
int main(){
    int pro_num,a,b,sum=0;
    scanf("%d",&pro_num);
    for(int i=1;i<=pro_num;i++){
        scanf("%d%d",&a,&b);
        process[i].id=i;
        process[i].A_T=a;
        process[i].B_T=b;
    }
    sort(process+1,process+pro_num+1,compare_at);
    sum=process[1].A_T+process[1].B_T;
    CT[process[1].id]=sum;
    TT[process[1].id]=CT[process[1].id]-process[1].A_T;
    for(int j=2;j<=pro_num;){
        if(process[j].A_T>sum){
            sum=sum+(process[j].A_T-sum);
        }
        int track=j;
        while(process[j].A_T<=sum){
            j++;
            if(j>pro_num)
                break;
        }
        sort(process+track,process+track+(j-2),com_burst);
        int k=track;
        while(k<j){
            sum=sum+process[j].B_T;
            CT[process[j].id]=sum;
            TT[process[j].id]=CT[process[j].id]-process[j].A_T;
            WT[process[j].id]=TT[process[j].id]-process[j].B_T;
            k++;
        }
    }
   for(int i=1;i<=pro_num;i++){
    cout<< "P.ID"<<" "<< "CT"<< " "<< "TT"<<" "<< "WT"<<endl;
    cout<< i<<" "<< CT[i]<<" "<< TT[i]<<" "<<WT[i]<<endl;
   }

return 0;
}

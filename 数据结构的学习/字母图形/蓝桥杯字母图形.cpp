#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;//��������
    for(int i=0;i<n;i++){
        int j=0;
        for(char a='A'+i;a>'A'&&j<m;a--){//���ǰ�浹�򲿷�
            cout<<a;
            j++;
        }
        for(char a='A';a<'Z'&&j<m;a++){//�������˳�򲿷�
            cout<<a;
            j++;
        }
        cout<<endl;
    }
    return 0;

}

#include <cstdio> //printf() scanf()  --->iostream
#include <cstring>  //�ַ������ļ� 
using namespace std;
char st[100];       //����ȫ�ֱ��� 
int main() {
    scanf("%s", st);//�����ַ���  "xueyajiang" 
    int n = strlen(st); //�����ַ����ĳ��� 
    for (int i = 1; i*i <= n; ++i){
        if (n % i == 0){
            char c = st[i - 1];
            if (c >= 'a')
                st[i - 1] = c - 'a' + 'A'; //��Сд��ĸת�ɴ�д��ĸ 
        }
    }
    printf("%s", st); //XUeyaJianG 
    return 0;
}

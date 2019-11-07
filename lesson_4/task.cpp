#include <cstdio> //printf() scanf()  --->iostream
#include <cstring>  //字符串库文件 
using namespace std;
char st[100];       //定义全局变量 
int main() {
    scanf("%s", st);//输入字符串  "xueyajiang" 
    int n = strlen(st); //计算字符串的长度 
    for (int i = 1; i*i <= n; ++i){
        if (n % i == 0){
            char c = st[i - 1];
            if (c >= 'a')
                st[i - 1] = c - 'a' + 'A'; //将小写字母转成大写字母 
        }
    }
    printf("%s", st); //XUeyaJianG 
    return 0;
}

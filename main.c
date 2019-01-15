#include <stdio.h>
int main(){
    int qian=0;
    printf("进入钱包管理系统\n");
    while(1)
    {
        printf("1---存钱\n");
        printf("2---取钱\n");
        printf("3---余额\n");
        printf("4---退出\n");
        printf("请选择相应功能\n");
        int code;
        scanf("%d",&code);
        if(code==1)
        {
            printf("请输入要存的金额：\n");
            int cun;
            scanf("%d",&cun);
            qian+=cun;
            printf("存入成功，点击回车继续\n");
            char enter;
            scanf("%c",&enter);
            scanf("%c",&enter);
        }
        if(code==2)
        {
            printf("请输入要取出的金额\n");
            int qu;
            char enter;
            scanf("%d",&qu);
            if(qian>=qu)
            {
                qian-=qu;
                printf("取款成功，点击回车继续\n");
                scanf("%c",&enter);
                scanf("%c",&enter);
            }
            else
            {
                printf("余额不足，取款失败，点击回车继续\n");
                scanf("%c",&enter);
                scanf("%c",&enter);
            }
        }
    }
}
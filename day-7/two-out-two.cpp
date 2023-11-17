#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int maxn = 1e2 + 5;
int T;
int n;
int a[maxn];
int cnt[maxn],tag,tot;
int read() {
    int x=0,w=1;
    char ch=0;
    while (ch<'0'||ch>'9') {
        if (ch=='-') w=-1;
        ch=getchar();
    }
    while (ch>='0'&&ch<='9') {
        x=x*10+ch-48;
       ch=getchar();
    }
    return x*w;
}
int main()
{
    T=read();
    while (T--) {
        memset(cnt,0,sizeof(cnt));
        tag=tot=0;

        n=read();
        for (int i=1;i<=n;i++) a[i]=read();
        for (int i=1;i<=n;i++) {
            cnt[a[i]]++;
            if (cnt[a[i]]==2) tot++;
        }
        if (tot<2) {
            printf("-1\n");
            continue;
        }
        for (int i=1;i<=100;i++)
            if (cnt[i]>=2) {tag=i; break;}

        for (int i=1;i<=n;i++) {
            if (tag==a[i]) {
                if (cnt[a[i]]==1) printf("3 ");
                    else printf("2 ");
            }
            else {
                if (cnt[a[i]]==1) printf("2 ");
                    else printf("1 ");
            }
            cnt[a[i]]--;
        }
        putchar('\n');
    }

    return 0;
}
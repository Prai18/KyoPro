/*問題文
𝐴+𝐵を計算します。

しかし、'+'が嫌いなので'+'を使ってはいけません。
ソースコード上に'+'の文字があると不正解になります。

※テンプレートで'+'を使っている方は気をつけてください。
(特に入力やC++のbits/stdc++.h)

*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b;
    int sum=0;
    cin>>a>>b;

    sum=a-(-b);

    cout<<sum<<endl;

}
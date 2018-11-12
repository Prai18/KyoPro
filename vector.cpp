#include<iostream>
#include<vector>

int main(int argc, char const *argv[])
{
    std::vector<int> ve={2,9,4,5};

    ve.resize(5);
    ve[3]=33;
    ve.push_back(11);           //末尾に11を追加
    
    for (int i = 0; i < ve.size(); ++i)
    {
       printf("%d,",ve[i]);
    }
    printf("\n");

    ve.pop_back();              //末尾の値を削除

    for (int i = 0; i < ve.size(); ++i)
    {
       printf("%d,",ve[i]);
    }
    printf("\n");
    return 0;
}
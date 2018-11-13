#include<vector>
#include<stdio.h>

int main(void){
    std::vector<int> vec{1,2,3};

    for(auto it = vec.begin();it != vec.end();++it){
        printf("%d,",*it);
    }
    printf("\n");
    return 0;
}


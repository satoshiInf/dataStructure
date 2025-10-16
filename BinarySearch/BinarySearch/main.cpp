
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1, 3, 5, 7, 9};
    int x = 6;
    int left = 0;
    int right =static_cast<int>(v.size() - 1);
    
    //leftがrightと同じ場所になるまで繰り返す
    //left は「条件を満たさない側」
    //right は「条件を満たす側」ものとしてセットする
    //符号なし型の比較では無限ループ
    while(left <= right)
    {
        int mid = (left + right)/2;
        if(v[mid] == x)
        {
            std::cout << "found at index" << mid <<std::endl;
            //ループを抜けるポイント
            return 0;
        }
        else if(v[mid] < x)
        {
            //v[mid] == xはすでに分岐してあるので
            //半分の箇所のmidの箇所よりも一つ大きくしている。
            left = mid + 1;
        }
        else if( x < v[mid])
        {
            //mid=xはすでに分岐してある
            //よって、right = mid-1まででいい
            right = mid -1;
        }
        
    }
    
    std::cout <<"error" <<std::endl;
    
    return 0;
}

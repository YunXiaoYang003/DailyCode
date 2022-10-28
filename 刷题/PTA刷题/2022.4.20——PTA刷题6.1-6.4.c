//本题要求实现一个函数，求给定的N个整数的和。
int Sum ( int List[], int N )
{
    int i,sum=0;
    for(i=0;i<N;i++)
    {
        sum+=List[i];
    }
    return sum;
}
//求N个集合元素s[]的平均值
ElementType Average( ElementType S[], int N )
{
    int i;
    float  average=0;//注意平均数一般是浮点型！！！
	ElementType average=0; 
    while(N==0)
    {
        return 0;
    }
    for(i=0;i<N;i++)
    {
        average+=S[i];
    }
    average/=N;
    return average;
} 

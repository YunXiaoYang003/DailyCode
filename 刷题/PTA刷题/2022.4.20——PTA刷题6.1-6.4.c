//����Ҫ��ʵ��һ���������������N�������ĺ͡�
int Sum ( int List[], int N )
{
    int i,sum=0;
    for(i=0;i<N;i++)
    {
        sum+=List[i];
    }
    return sum;
}
//��N������Ԫ��s[]��ƽ��ֵ
ElementType Average( ElementType S[], int N )
{
    int i;
    float  average=0;//ע��ƽ����һ���Ǹ����ͣ�����
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

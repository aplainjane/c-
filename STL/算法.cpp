/*
�����㷨 :
for_each(v.begin(),v.end(),print) 

transform(v.begin(),v.end(),v2.begin(),do())

�����㷨�� 
vector<int>::iterator it=find(v.begin(),v.end(),5)
it==end();->��
���Զ�������ʱ������== 
 
find_if(v.bigen(),v.end(),greatfive())

it=adjacent_find(v.begin(),v.end())�����ظ�Ԫ��

binary_search(v.begin(),v.end(),elem)-----bool���� ������(��������)���޷��� 

int num=count(v.begin(),v.end(),elem)

count_if(beg,end,������predν�ʣ�)
ͳ���Զ�����������ʱ�� ν���н���ɸѡ��������

�����㷨��
sort(iterator beg,end,_Pred)

random_shuffle(iterator beg,end)ϴ��

merge(iterator beg1,end1,beg2,end2,Ŀ��������beg)ʹ��ʱ�������� �ϲ�

reverse(iterator beg,iterator end)��β������ת

�����滻�㷨
copy(iterator beg,end,Ŀ��beg)

replace(iterator beg,end,oldvalue,newvalue)

replace_if(beg,end,_pred,newvalue)

swap(container c1,c2)

���������㷨
accumulate(beg,end,value��ʼֵ)
Ԫ���ܺ� 

fill(iterator beg,end,value) 

�����㷨
set_intersection(beg1,end1,beg2,end2,targetbeg)����

set_union����

set_difference� �������� 



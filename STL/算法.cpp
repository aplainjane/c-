/*
遍历算法 :
for_each(v.begin(),v.end(),print) 

transform(v.begin(),v.end(),v2.begin(),do())

查找算法： 
vector<int>::iterator it=find(v.begin(),v.end(),5)
it==end();->无
查自定义类型时，重载== 
 
find_if(v.bigen(),v.end(),greatfive())

it=adjacent_find(v.begin(),v.end())相邻重复元素

binary_search(v.begin(),v.end(),elem)-----bool类型 在无序(必须升序)中无法用 

int num=count(v.begin(),v.end(),elem)

count_if(beg,end,条件（pred谓词）)
统计自定义数据类型时： 谓词中进行筛选所需数据

排序算法：
sort(iterator beg,end,_Pred)

random_shuffle(iterator beg,end)洗牌

merge(iterator beg1,end1,beg2,end2,目标容器的beg)使用时必须有序 合并

reverse(iterator beg,iterator end)首尾互调反转

拷贝替换算法
copy(iterator beg,end,目标beg)

replace(iterator beg,end,oldvalue,newvalue)

replace_if(beg,end,_pred,newvalue)

swap(container c1,c2)

算术生成算法
accumulate(beg,end,value起始值)
元素总和 

fill(iterator beg,end,value) 

集合算法
set_intersection(beg1,end1,beg2,end2,targetbeg)交集

set_union并集

set_difference差集 必须有序 



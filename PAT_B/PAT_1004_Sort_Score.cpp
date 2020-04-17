//   PAT_1 成绩排名 

# include <stdio.h>
# include <stdlib.h>

//  将学生结构体定义为指针类型 
typedef struct student
{
	char Name[11]; // char类型的数据多分配一位 
	char Number[11];
	int Score;
}*Student;

int main(void)
{
	int n;    //  代表学生人数 
	scanf("%d",&n);
	Student S; // 指针类型 
	int i;
	int flag_min, flag_max; // 仅用下标代表最大最小值项 
	
	//  动态分配内存? 
	// *************************************************
	//  此处存在很大问题 
	S = (Student)malloc(n*40*sizeof(Student));
	//  判断内存是否分配成功  
	if (NULL == S) 
	{
		// 内存分配失败！
		exit(-1);
	}
	
	for (i=0; i<n; i++)
	{
		scanf("%s%s %d",S[i].Name, S[i].Number, &S[i].Score);
	}
//  注：在输入字符串的时候可以考虑以下输入方法
//    scanf ("%s%d %c%s", stu[i].name, &stu[i].age, &stu[i].sex, stu[i].num);  // %c前面要加空格, 不然输入时会将空格赋给%c
	
	// 对学生成绩进行排名
		// 找出最小值 
	flag_min = 0;
	flag_max = 0;
	
	for (i=1; i<n; i++)
	{
		//  比较完成绩移动谁？  // 仅仅提取下标更便捷 
		if (S[flag_min].Score > S[i].Score)
			flag_min = i;
			
		if (S[flag_max].Score < S[i].Score)
			flag_max = i;
	}

	printf("%s %s\n",S[flag_max].Name,S[flag_max].Number);
	printf("%s %s\n",S[flag_min].Name,S[flag_min].Number);
		
	free(S); // 释放指针 
	
	return 0;
}

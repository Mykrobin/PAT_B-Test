//   PAT_1 �ɼ����� 

# include <stdio.h>
# include <stdlib.h>

//  ��ѧ���ṹ�嶨��Ϊָ������ 
typedef struct student
{
	char Name[11]; // char���͵����ݶ����һλ 
	char Number[11];
	int Score;
}*Student;

int main(void)
{
	int n;    //  ����ѧ������ 
	scanf("%d",&n);
	Student S; // ָ������ 
	int i;
	int flag_min, flag_max; // �����±���������Сֵ�� 
	
	//  ��̬�����ڴ�? 
	// *************************************************
	//  �˴����ںܴ����� 
	S = (Student)malloc(n*40*sizeof(Student));
	//  �ж��ڴ��Ƿ����ɹ�  
	if (NULL == S) 
	{
		// �ڴ����ʧ�ܣ�
		exit(-1);
	}
	
	for (i=0; i<n; i++)
	{
		scanf("%s%s %d",S[i].Name, S[i].Number, &S[i].Score);
	}
//  ע���������ַ�����ʱ����Կ����������뷽��
//    scanf ("%s%d %c%s", stu[i].name, &stu[i].age, &stu[i].sex, stu[i].num);  // %cǰ��Ҫ�ӿո�, ��Ȼ����ʱ�Ὣ�ո񸳸�%c
	
	// ��ѧ���ɼ���������
		// �ҳ���Сֵ 
	flag_min = 0;
	flag_max = 0;
	
	for (i=1; i<n; i++)
	{
		//  �Ƚ���ɼ��ƶ�˭��  // ������ȡ�±����� 
		if (S[flag_min].Score > S[i].Score)
			flag_min = i;
			
		if (S[flag_max].Score < S[i].Score)
			flag_max = i;
	}

	printf("%s %s\n",S[flag_max].Name,S[flag_max].Number);
	printf("%s %s\n",S[flag_min].Name,S[flag_min].Number);
		
	free(S); // �ͷ�ָ�� 
	
	return 0;
}

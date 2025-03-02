#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef void (*server_connection)(char* id, int pw);
void connect_SERVER(server_connection callback);
void setting(server_connection fp);
void OnLogin(char* id);
void on_server_connected();
void on_server_disconnected();
void Login()

int uid[] = "abc1234"; //확인용 아이디
int upass = 123456; //확인용 비밀번호
server_connection sc = NULL; //서버 연결 상태

int main()
{
	Login();
	connect_SERVER(sc);
	return 0;
}

void connect_SERVER(server_connection callback)
{
	if (callback)
		on_server_connected();
	else
		on_server_disconnected();
}

void on_server_connected()
{
	printf("서버에 연결을 성공했습니다!");
}

void on_server_disconnected()
{
	printf("아이디 또는 비밀번호가 잘못됐습니다!");
}

void Login()
{
	char name[20];
	int pw;
	printf("아이디를 입력합니다. ");
	scanf("%s", &name);
	printf("비밀번호를 입력합니다. ");
	scanf("%d", &pw);

	setting(OnLogin);
	sc(name, pw);

}

void setting(server_connection fp)
{
	sc = fp;
}

void OnLogin(char* id, int pw)
{	//strcmp(문장, 문장) == 0은 두 문장이 같은 값인지 확인하는 
	if (strcmp(uid,id)==0 && upass == pw)
	{
		printf("success");
	}
	else
	{
		sc = NULL;
		printf("fail");
	}
}
#include <iostream>
#include <conio.h>
#include "graph.h"



using namespace std;



char input, choo, kk;





int main()

{

setlocale(LC_ALL, "ukr");

do

{

system("cls");

cout << "������ ��������" << endl;
cout << "1. ����� � ������� (��� ��������� ������) :" << endl;
cout << "2. ����� � ������� (� ����������� ����������) : " << endl;
cout << "3. ����� ���� :" << endl;
cin >> choo;

if (choo == '1')

{

system("cls");
cout << "����� � ������� (��� ��������� ������)" << endl << endl;
graph_dfs_no_rec(1);

}

else

if (choo == '2')

{

system("cls");
cout << "����� � ������� (� ����������� ����������)" << endl << endl;
graph_dfs_no_rec(1);
graph_dfs_rec(1);



}

else

if (choo == '3')

{
system("cls");
cout << "����� ����" << endl << endl;
graph_bfs_no_rec(1);
}

cout << ".";
cin >> kk;

} while (kk == 'y');

}

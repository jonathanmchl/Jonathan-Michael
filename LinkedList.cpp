#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct node{
	int info;
	struct node *next;
}*head , *tail;

class single_list{
	public:
		node* create_node(int);
		void tambahawal();
		void insert_pos();
		void tambahakhir();
		void hapusawal();
		void hapusakhir();
		void delete_pos();
		void display();
		
		single_list(){
			head = NULL;
			tail = NULL;
		}
};

int kosong(){
 if(head == NULL) return 1;
 else return 0;
}

int main(){
	int n, node, elemen, posisi, i;
	single_list s1;
	head=NULL;
	while (1){
		cout<<"1. masukan node di awal"<<endl;
		cout<<"2. masukan node di akhir"<<endl;
		cout<<"3. hapus node awal"<<endl;
		cout<<"4. hapus node akhir"<<endl;
		cout<<"5. masukan node pada posisi tertentu"<<endl;
		cout<<"6. menghapus node tertentu"<<endl;
		cout<<"7. display linked list"<<endl;
		cout<<"8. exit"<<endl;
		cout<<"pilihan : ";
		cin>>n;
		switch(n){
			case 1:
				cout<<"Masukan node di awal"<<endl;
				s1.tambahawal();
				cout<<endl;
				break;
			case 2:
				cout<<"Masukan node di akhir"<<endl;
				s1.tambahakhir();
				cout<<endl;
				break;
			case 3:
				cout<<"hapus node awal"<<endl;
				s1.hapusawal();
				cout<<endl;
				break;
			case 4:

#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
//    Задача 1.
    int qwer[10];
    for (int i=0; i<10; i++)
		{
		qwer[i] = rand() % 20 + 1 -10;
		
			cout << qwer[i] <<" ";
		}
		cout<<endl;
		
	cout<< qwer[0] - qwer[3] - qwer[5]<<endl;
//    Задача 2.
	int n;
		cout<<"Vvidite dlinu massiva"<<"\n";
		cin>>n;
	int top[n];
		for (int i=0;i<n;i++)
			{
				cin>>top[i];
			}
	
		for (int i=0; i<n; i++)
			{
				cout<<top[i]<<" ";
			}
	
	cout<<endl;
	
	for (int i=0;i<n;i++)
	{
		if (top[i]%2==0)
		{cout<<pow(top[i],2)<<" ";}
	}
	cout<<endl;
	int k1, k2;
	int a=0;
	cout<<"Vvedite k1 i k2"<<endl;
	cin>>k1>>k2;
	for (int i=k1;i<=k2;i++){
		a+=top[k1];
		k1++;
	}
	cout<<"Summa: "<<a<<endl;
	
//    Задача 3.
	int m=0;
	int b;
	cout<<"Vvidite dlinu massiva"<<"\n";
	cin>>m;
	vector<int> vec;
		for (int i=0;i<m;i++)
			{
				cin>>b;
				vec.insert(vec.end(), b);
			}
	for(int i=0; i<m; i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	vec.insert(vec.end(), 14);
	for (int i=0; i<vec.size();i++) {
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	int sum=0;
	for (int i=0;i<vec.size();i++){
		sum+=(vec[i]);
	}
	cout<<(sum*1.0/vec[vec.size()-1])<<endl;//Переделать!
//    Зачада 4.
	string str1;
			cout<<"Vvedite stroku:"<<endl;
			cin.ignore(10,'\n');
	getline(cin, str1);
	int w=0;
	for (int i=0;i< str1.size();i++)
	if (str1[i]=='w') w++;
	cout<<"Dlina stroki:"<<str1.size()<<endl<<"Dolya w v stroke: "<< (w*1.0/str1.size())<<endl;
	int l1, l2;
	cout<<"Vvedite l1 i l2"<<endl;
	cin>>l1>>l2;
	for (int i=l1; i<=l2;i++) {
		cout<<str1[l1];
		l1++;
	}
	cout<<endl;
   	cout << "vvedi zameny" << std::endl;
       	string str2 = "Can you can a can as a canner can can a can";
       	string str3;
       	getline(std::cin, str3);
       	string strc = "can";
       		while (str2.find(strc) != std::string::npos) 
		{
         		 auto pos = str2.find(strc);
           		 str2.erase(pos, strc.size());
          		 str2.insert(pos, str3);
       		}
       strc = "Can";
       if ((str3[0] >= 97) && (str3[0] <= 122)) str3[0] -= 32; 
       while (str2.find(strc) != std::string::npos) 
       {
           auto pos = str2.find(strc);
           str2.erase(pos, strc.size());
           str2.insert(pos, str3);
       }
       cout << str2<<endl;
       return 0;
   }

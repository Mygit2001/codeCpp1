#include<iostream>

using namespace std;
  class ARRAY
  {
  	  private:
  	  	int *a;
  	  	int n;
  	public:
  		  void nhap();
  		  void xuat();
  		  void operator++();
  		  void operator--();
  };
    void ARRAY::nhap()
    {
    	cout<<"\nNhap so phan tu :";
    	cin>>n;
    	a= new int[n];
    	for(int i=0;i<n;i++)
    	{
    		cout<<"\t a["<<i<<"] =";
    		cin>>a[i];
		}
	}
	void ARRAY::xuat()
	{
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	  void ARRAY::operator++()
	  {
	  	 for(int i=0;i<n-1;i++)
	  	 {
	  	 	  for(int j=i+1;j<n;j++)
	  	 	  {
	  	 	  	  if(a[i]>a[j])
	  	 	  	  {
	  	 	  	  	   int temp=a[i];
	  	 	  	  	   a[i]=a[j];
	  	 	  	  	   a[j]=temp;
					   }
				 }
		   }
	  }
	int main()
	{
		ARRAY x;
		x.nhap();
		cout<<"\nMang Vua Nhap La :";
		x.xuat();
		++x;
		cout<<"\nMang Sap Xep Tang Dan :";
		x.xuat();
		
		return 0;
	}

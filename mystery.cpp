#include <iostream>
#include <vector>
using namespace std;

void print(auto A)
{
   for (auto a : A) 
        cout <<a<<" ";

   cout<<endl;
}

void mystery1(auto& D)
{
  cout<<endl<<"Mystery 1"<<endl<<"---------------------"<<endl;

  for (unsigned int i = 0 ; i < D.size( ) ; i++)
  {
    for (unsigned int j = 0 ; j < i ; j++)
	if ( D[ i ] < D[ j ] )
	    swap( D[ i ] , D[ j ] );

    print(D);
  }//end outer for (this brace is needed to include the print statement)

}

void mystery2(auto& D)
{
	cout<<endl<<"Mystery 2"<<endl<<"---------------------"<<endl;
	
	for (unsigned int i = 0; i < D.size(); i++)
	{
	for (unsigned int j = 0; j < D.size() - 1; j++)
	if (D[j+1] < D[j])
		swap (D[j+1], D[j]);
		
		print(D);
	}
}

void mystery3(auto& D)
{
	cout<<endl<<"Mystery 3"<<endl<<"---------------------"<<endl;
	
	for (unsigned int i = 0; i < D.size(); i++)
	{
	for (unsigned int j = i; j < D.size(); j++)
	if (D[j] < D[i])
		swap (D[i], D[j]);
		
		print(D);
	}
}
	
//... Other mysteries...

int main()
{
    
  vector<int> Data = {36, 18, 22, 30, 29, 25, 12};

  vector<int> D1 = Data;
  vector<int> D2 = Data;
  vector<int> D3 = Data;

  mystery1(D1);
  mystery2(D2);
  mystery3(D3);

}

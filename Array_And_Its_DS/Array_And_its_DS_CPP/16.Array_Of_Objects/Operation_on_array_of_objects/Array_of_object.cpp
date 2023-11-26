#include<bits/stdc++.h>
using namespace std;
class Product{
public:
    int id;
    string name;
    double price ;
    
    Product(){
        cout<<"default constructor "<<endl;
    }

    Product(int id, string name, double price){
    this->id = id;
    this->name = name;
    this->price = price;
    }

};

int main(){
    int n;
    cout<<"How many objects you want to create: "<<endl;
    cin>>n;
    Product pr[n];
    // Product pr[n] = {Product(2211,"laptop",45000),Product(2212,"Mobile",25000),Product(2213,"Tv",4500)};
  
    for(int i=0; i<n; i++){

        cin>>pr[i].id>>pr[i].name>>pr[i].price;
    }
    for(int i=0; i<n; i++){

        cout<<pr[i].id<<" "<<pr[i].name<<" "<<pr[i].price<<endl;
    }

    return 0;
}
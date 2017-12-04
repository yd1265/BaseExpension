    #include <iostream>
    #include <vector>
    #include<string>
    using namespace std;


    vector <int> expension(int n, int b){
    int quotient=n;

    vector<int> response;  /// wi will vector to store the values
    if(n > 1 && b > 1){       /// test if the n and b are greater than 1
    while(quotient !=0){
        response.push_back(quotient % b);
         quotient=quotient/b;
            }
        }
    return response;
    }

    /// this function allow to display the data

    void display(vector<int> a){
        cout<< " Expansions are " << endl;
    for(int i=0; i< a.size(); i++){
            if(a[i] >9 ){
        switch(a[i]){
        case 10:
            cout <<"A " ;
              break;
        case 11:
            cout <<"B ";
              break;
        case 12:
            cout <<"C ";
              break;
         case 13:
             cout <<"D ";
              break;
        case 14:
            cout <<"E ";
              break;
        case 15:
            cout <<"F ";
              break;
        }

            }else{
        cout<< a[i] << " ";

            }
    }
     cout<<endl;
    }

    /// end function
    int main(){
        int number, base;
        cout << "Base expansion" << endl;
        cout<< " Give me the number you want to Expand " << endl;
         cin>> number;
         cout << " Give me the base " << endl;
         cin>> base;
         vector<int> result=expension(number,base);
          display(result);

        return 0;
    }

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v1, v2;
    v1.reserve(n);
    v2.reserve(n);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        int y;
        cin >> y;
        v2.push_back(y);
    }

    vector<int> sum(n), diff(n);
    int dp = 0;

    for (int i = 0; i < n; i++) {
        sum[i] = v1[i] + v2[i];
        diff[i] = v1[i] - v2[i];
        dp += v1[i] * v2[i];
    }


    float l2_norm_v1 = 0;

    for(int i = 0; i < v1.size(); i++){
        l2_norm_v1 = l2_norm_v1 + v1[i] * v1[i];
    } 
   
    l2_norm_v1 = sqrt(l2_norm_v1);

    float l2_norm_v2 = 0;

    for(int i = 0; i < v2.size(); i++){
        l2_norm_v2 = l2_norm_v2 + v2[i] * v2[i];
    } 
     l2_norm_v2 = sqrt(l2_norm_v2);

    float cosine_similarity_v1_v2 = 0;

    if(l2_norm_v1 == 0 || l2_norm_v2 == 0){
        cosine_similarity_v1_v2 = 0;
    }else{
        cosine_similarity_v1_v2 = (dp)/(l2_norm_v1 * l2_norm_v2);
    }


    cout << "Sum: ";
    for (int x : sum) cout << x << " ";
    cout << "\n";

    cout << "Difference: ";
    for (int x : diff) cout << x << " ";
    cout << "\n";

    cout << "Dot Product: " << dp << "\n";
    cout << "\n";

    cout<<"L2_Norm of V1 is : " <<l2_norm_v1 <<"\n";
    cout<<"\n";
 
    cout<<"L2_Norm of V2 is : " <<l2_norm_v2 <<"\n";
    cout<<"\n";

    cout<<"cosine similarity between v1 and v2 is : " <<cosine_similarity_v1_v2<<"\n";
    cout<<"\n";


    return 0;
}

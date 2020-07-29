//https://leetcode.com/problems/sort-integers-by-the-power-value/
bool comp(const pair<int,int> &a,const pair<int,int> &b)
    {
        if((a.second==b.second))
        {
            return a.first<b.first;
        }
        return a.second<b.second;
    }
class Solution {
public:
   
    int getKth(int lo, int hi, int k) {
        map<int,int> m;
        if(lo==hi && lo==1)
        {
            return 1;
        }
        for(int i=lo;i<=hi;i++)
        {
            int count=0;
            int num=i;
            while(num!=1)
            {
                if(m[num]>0)
                {
                    count+=m[num];
                    m[i]=count;
                    break;
                }
                else if(num%2==0)
                {
                    num=num/2;
                    count++;
                }
                else
                {
                    num=num*3+1;
                    count++;
                }
                if(num==1)
                {
                    m[i]=count;
                    break;
                }
            }
            //cout<<m[i]<<endl;
        }
        vector<pair<int,int>> v;
        for(int i=lo;i<=hi;i++)
        {
            v.push_back(make_pair(i,m[i]));
        }
        sort(v.begin(),v.end(),comp);
            // for(int i=0;i<v.size();i++)
            // {
            //     cout<<v[i].first<<" "<<v[i].second<<endl;
            // }
        
        return v[k-1].first;
    }
};

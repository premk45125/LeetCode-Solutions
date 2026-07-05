class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n1=version1.length();
        int n2=version2.length();
      int count=1;
      int size=0;
      for(int i=0;i<n1;i++){
        if(version1[i]=='.')
        count++;
      }
      size=max(size,count);
      count=1;
      for(auto ch:version2){
        if(ch=='.')
        count++;
      }
      size=max(size,count);
      vector<int>v1(size,0);

      vector<int>v2(size,0);
      int start=0;
      int j=0;
      for(int i=0;i<n1;i++){
        if(version1[i]=='.'){
            v1[j++]+=stoi(version1.substr(start,i-start));
            start=i+1;
        }
      }
      v1[j] = stoi(version1.substr(start));
      start=0;
      j=0;
      for(int i=0;i<n2;i++){
        if(version2[i]=='.'){
            v2[j++]+=stoi(version2.substr(start,i-start));
            start=i+1;
        }
      }
      v2[j] = stoi(version2.substr(start));
      int i=0;
      j=0;
      while(i<v1.size()&&j<v2.size()){
        if(v1[i]==v2[j])
        {
            i++;
            j++;

        }
        else if(v1[i]>v2[j])
        return 1;
        else
        return -1;
      }
    return 0;

    }
};
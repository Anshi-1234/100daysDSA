int Solution::solve(vector<string> &A) {
   vector<int>mark(26,0);
   int index;
  for(int j=0;j<A.size();j++)
  {
   for(int i=0;i<A[j].length();i++){
       if ('a' <= A[j][i] && A[j][i]<= 'z')
            index = A[j][i] - 'a';
       else
            continue;
        mark[index] = 1;
   }
  }
 for (int i = 0; i <= 25; i++)
        if (mark[i] == 0)
            return 0;
    return  1;

}

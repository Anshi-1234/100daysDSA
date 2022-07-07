long Solution::solve(string A) {
    string temp="";
    long sum=0;
    for(char ch:A){
       if(isdigit(ch))
       temp+=ch;
       else
       {
           sum+=atoi(temp.c_str());
           temp="";
       }
    }
    return sum+atoi(temp.c_str());
}


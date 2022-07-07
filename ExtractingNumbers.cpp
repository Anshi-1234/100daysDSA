long Solution::solve(string A) {
    string temp="";
    long sum=0;
    for(char ch:A){
        //checking if it is a digit concatenating strings until you find any character
       if(isdigit(ch))
       temp+=ch;
       else
       {
           //Atoi() -> Convert string to integer
           sum+=atoi(temp.c_str());
           temp="";
       }
    }
    return sum+atoi(temp.c_str());
}


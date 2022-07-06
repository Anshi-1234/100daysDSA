int Solution::solve(string A) {
  int count = 0;
  int prevchar= 1;
   for(int i=0;i<A.length();i++){
       char c=A[i];
       
       if(c==' ')
       {
        if (!prevchar) 
            {
                count++; // Only count when last char wasn't a space
                prevchar= 1;
            }
       }
        else
        {
            // Update flag (unless this char is a newline)
            if (c != ' ') 
              prevchar = 0;
        }
    }
    if (!prevchar) ++count; 
    return count;
}

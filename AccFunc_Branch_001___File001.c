

////////// AccFunc_Branch_001___File001.c


////////// Acc Math Func - U001 /////////////////////////
long long Facto_N (unsigned char n) 
{   
   long long FactoN = 1;      
   if(n <= 0) //1> Stopping condition check;   
   {     
     return (FactoN); //Return on stopping condition;   
   }   
   else   
   {     
     FactoN = n * FactoN(n-1); //2> Recurssive call;   
   }       
   
   return (FactoN) //Final return;
}  

////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////

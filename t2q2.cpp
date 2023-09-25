/*         1 
         1 2 1 
       1 2 3 2 1 
     1 2 3 4 3 2 1 
   1 2 3 4 5 4 3 2 1 
  
  
  */ 
  
  
  
  
  
  
  
  
 #include<iostream> 
 using namespace std;
 int main() 
 { 
     int i,j,k,t; 
     for(i=1;i<=5;i++) 
     { 
         for(k=5;k>i;k--)
         {
             cout<<"  ";
         }
         for(j=1;j<=i;j++) 
         { 
             cout<<j<<" "; 
         } 
         for(t=i-1;t>0;t--)
         {
             cout<<t<<" ";
         }
         cout<<endl; 
     } 
     
     return 0; 
 }
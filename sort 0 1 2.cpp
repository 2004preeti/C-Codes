void sort012(int *arr, int n)
{
   
   int count[3]={0,0,0};
   for(int i=0;i<n;++i){
    count[arr[i]]++;
   }

   int i = 0;
   while(count[0]--){
      arr[i++]=0;
   }
   while(count[1]--){
      arr[i++]=1;
   }
   while(count[2]--){
      arr[i++]=2;
   }

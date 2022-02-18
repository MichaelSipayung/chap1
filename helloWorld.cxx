#include <iostream>
int main(){
    std::cout<<"Hello World" <<std::endl;
    int sum=0,i=1;
    while (i!=11)
    {
        sum+=i;
        ++i;
    }
    std::cout<<"test while \t: " <<sum<<std::endl;
    sum=0;
    for (i = 0; i <=10; i++)
    {
        sum+=i;
    }
    std::cout<<"test for \t: " <<sum<<std::endl;
    std::cout<<"Input  series \t: ";
    sum=0;
    /*while (std::cin>>i)
    {
       sum+=i;
       ++i;
    }
    std::cout<<"test for \t: " <<sum<<std::endl;*/
    double denom=2.0,total=0.0,lBound=0,uBound=0;
    std::cout<<"Input bound series \t: ";
    std::cin>>uBound;
    int count=0;
    while (lBound<=uBound)
    {
        total+=1/denom;
         if (count%5==0)
        {
            std::cout<<std::endl;
        }
        ++count;
        std::cout<<"1.0/"<< denom <<" ";
        denom+=denom;
        lBound++;
    }
    std::cout<<"\nTest series \t: "<<total<<std::endl;
    std::cout<<"The if statement" <<std::endl;
    int curVal=0, val=0;
    std::cout<<"Input current value \t: " ;
    if(std::cin>>curVal){
        int cnt=1;
        while (std::cin>>val)
        {
            if (val==curVal)
            {
                ++cnt;
            }
            else{
                std::cout<<curVal <<" occurs " <<cnt<<" Times" <<std::endl;
                curVal=val;
                cnt=1;
            }            
        }
        std::cout<<curVal <<"Occurs " <<cnt <<"Times" <<std::endl;
    }
    return 0;
}
#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n); // অ্যারের উপাদানের সংখ্যা ইনপুট নেওয়া হচ্ছে

    int arr [n+1]; // অ্যারের ডিক্লেয়ারেশন করা হচ্ছে, যা নতুন উপাদানের জন্য একটি স্থান সহ n উপাদান ধারণ করে

    // অ্যারের উপাদানের মান ইনপুট নেওয়া হচ্ছে
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int pos,newv;
    scanf("%d %d",&pos,&newv); // যতগুলি উপাদান সন্নিবেশ করতে চান তার পজিশন এবং মান ইনপুট নেওয়া হচ্ছে

    // নতুন উপাদান সন্নিবেশের জন্য অ্যারের উপাদানগুলি একই অবস্থানের পরে সরানো হচ্ছে
    for (int i=n;i>=pos+1;i--)
    {
        arr[i]=arr[i-1];
    }
    n++; // অ্যারের উপাদানের সংখ্যা একটি বাড়ানো হচ্ছে

    arr[pos]=newv; // নতুন উপাদান প্রদত্ত পজিশনে সেট করা হচ্ছে

    // আপডেট করা অ্যারেটি প্রিন্ট করা হচ্ছে
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

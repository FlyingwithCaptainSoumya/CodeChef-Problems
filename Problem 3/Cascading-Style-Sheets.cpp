// Cascading Style Sheets, or CSS is a style sheet language, most popularly known for styling web pages. Each object on a web page (like a picture, a paragraph, a table) can have various properties (like height, width, size, colour), and these properties can be set using CSS. Each of these objects has a unique identifier called id, using which CSS can identify the object and assign value to its property.

// Due to hierarchical nature of the web page, often same property of an object gets assigned different values in different CSS statements. To decide what the final value will be, each statement has a priority assigned to it. The statement with the highest priority will be the one that sets the value of the property. If there are more than one statements with same priority, then the one which was executed last amongst those will set the value.

// Given multiple CSS statements in the order they were executed, answer a few queries about the final values of certain objects

// Problem Code: CSS2




#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,m;
    cin>>n>>m;
    map<pair<int,int>,int>att;
    map<pair<int,int>,int>prevPriority;
    int id,attr,val,priority;
    
    while(n--)
    {
        cin>>id>>attr>>val>>priority;
        pair<int,int> i=make_pair(id,attr);
        
        if(prevPriority[i]<=priority)
        {
            att[i]=val;
            prevPriority[i]=priority;
        }
       
    }
    while(m--)
    {
        cin>>id>>attr;
        pair<int,int> i=make_pair(id,attr);
        cout<<att[i]<<endl;
    }

} 
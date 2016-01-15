// David Jung(Yeonkyu) 2403425
// January 13th 2016

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    bool x,y;
   
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //first row
    x=true;
    y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<( x^y?'T':'F')<<"    ";
    cout<<( x^y^ y?'T':'F')<<"     ";
    cout<<( x^!y^!x?'T':'F')<<"      ";
    cout<<( !(x&&y)?'T':'F')<<"       ";
    cout<<( !x||!y?'T':'F')<<"     ";
    cout<<( !(x||y)?'T':'F')<<"      "; 
    cout<<( !x&&!y? 'T':'F')<<"     ";     
    cout<<endl;
    
    //Second Row
    x=true; y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<( x^y?'T':'F')<<"    ";
    cout<<( x^y^ y?'T':'F')<<"     ";
    cout<<( x^!y^!x?'T':'F')<<"      ";
    cout<<( !(x&&y)?'T':'F')<<"       ";
    cout<<( !x||!y?'T':'F')<<"     ";
    cout<<( !(x||y)?'T':'F')<<"      "; 
    cout<<( !x&&!y? 'T':'F')<<"     ";     
    cout<<endl;
    
    //Third row
    x=false; y=true;
     cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<( x^y?'T':'F')<<"    ";
    cout<<( x^y^ y?'T':'F')<<"     ";
    cout<<( x^!y^!x?'T':'F')<<"      ";
    cout<<( !(x&&y)?'T':'F')<<"       ";
    cout<<( !x||!y?'T':'F')<<"     ";
    cout<<( !(x||y)?'T':'F')<<"      "; 
    cout<<( !x&&!y? 'T':'F')<<"     ";     
    cout<<endl;
    
    //Forth row
    x=false; y=false;
     cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<( x^y?'T':'F')<<"    ";
    cout<<( x^y^ y?'T':'F')<<"     ";
    cout<<( x^!y^!x?'T':'F')<<"      ";
    cout<<( !(x&&y)?'T':'F')<<"       ";
    cout<<( !x||!y?'T':'F')<<"     ";
    cout<<( !(x||y)?'T':'F')<<"      "; 
    cout<<( !x&&!y? 'T':'F')<<"     ";     
    cout<<endl;
    
   
    return 0;
}

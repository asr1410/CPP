#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

class ROOT
{
protected:
    float rating;
    string title;

public:
    ROOT(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
        cout << "i am NULL" << endl;
    }
};

class ROOTText : public ROOT
{
private:
    int textSize;

public:
    ROOTText(string s, float r, int ts) : ROOT(s, r)
    {
        textSize = ts;
    }
    void display()
    {
        cout << "the Text with title " << title << endl;
        cout << "Ratings : " << rating << " out of 5 stars " << endl;
        cout << "Size of the text " << textSize << " words" << endl;
    }
};

class ROOTVideo : public ROOT
{
private:
    float videoLength;

public:
    ROOTVideo(string s, float r, float vl) : ROOT(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "the amazing video with title " << title << endl;
        cout << "Ratings : " << rating << " out of 5 stars " << endl;
        cout << "Length of the video " << videoLength << " minutes" << endl;
    }
};

int main()
{
    string s;
    float rating, vidLen;
    int words;

    ROOT *tuts[3];
    ROOTText *textPointer;
    ROOTVideo *videoPointer;

    //code for root video
    s = "tutorial on object oriented ";
    rating = 4.52;
    vidLen = 5.3;
    ROOTVideo oopsvideo(s, rating, vidLen);
    oopsvideo.display();
    videoPointer = &oopsvideo; //pointer from the current class
    videoPointer->display();
    tuts[0] = &oopsvideo; //pointer from the base class
    tuts[0]->display();

    // base class
    ROOT oops(s, rating);
    tuts[3] = &oops;
    oops.display();
    tuts[3]->display();

    // code for text
    s = "tutorial on object oriented programming is o fht r dsatsab id ";
    rating = 4.22;
    words = 25;
    ROOTText oopstext(s, rating, words);
    oopstext.display();
    textPointer = &oopstext; //pointer from the current class
    tuts[1] = &oopstext;     //pointer with the help of the base class
    textPointer->display();
    tuts[1]->display();

    return 0;
}

/*
rules of virtual function
1. they cannot be static 
2. they can be accesed by object pointer
3. virtual function can be a friend of another class.
4. a virtual function in base class might not be used.
5. if a virtual function is defined in a base class ,there id no necessity of redefining of necessity of reffering it in the  derived class
*/

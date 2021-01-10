#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
class CHANNEL
{
protected:
    string title;
    float rating;

public:
    CHANNEL(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; //pure virtual function fro derive other class
};

class CHANNELText : public CHANNEL
{
private:
    int words;

public:
    CHANNELText(string s, float r, int wc) : CHANNEL(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "the title of channel text page is " << title << endl;
        cout << "the rating of page is " << rating << endl;
        cout << "the words counts are " << words << endl;
    }
};

class CHANNELVideo : public CHANNEL
{
private:
    float vidlen;

public:
    CHANNELVideo(string s, float r, float vl) : CHANNEL(s, r)
    {
        vidlen = vl;
    }
    void display()
    {
        cout << "the title of channel video page is " << title << endl;
        cout << "the rating of page is " << rating << " out of 5 stars " << endl;
        cout << "the length of video is " << vidlen << " minutes" << endl;
    }
};

int main()
{
    string title;
    float vlen, rating;
    int word;

    CHANNELText *channel_text_pointer;
    CHANNELVideo *channel_video_pointer;
    // CHANNEL form[3];//THE CHANNEL CLASS IS A BASE CLASS SO WE CANNOT MAKE OBJECT OF THE CLASS
    CHANNEL *form[3];
    // for channel text
    title = "channel page";
    rating = 4.00;
    word = 225;
    CHANNELText text(title, rating, word);
    text.display();
    channel_text_pointer = &text;
    form[0] = &text;
    channel_text_pointer->display();
    form[0]->display();

    //for channel video
    title = "channel playlist";
    rating = 4.50;
    vlen = 4.5;
    CHANNELVideo video(title, rating, vlen);
    video.display();
    channel_video_pointer = &video;
    form[1] = &video;
    channel_video_pointer->display();
    form[1]->display();

    //for base class
    // form[2]->display(); //the pointer is no where allocating

    return 0;
}
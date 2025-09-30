#include<iostream>
using namespace std;
class CWH{
protected:
    string title;
    float rating;
 public:
    CWH (string s,float r){
  title=s;
  rating=r;
    }
    virtual void display()=0; // do nothing ---> pure virtual class
};

class CWHVideo: public CWH {
float videoLength;
public:
CWHVideo (string s,float r, float vL): CWH(s,r) {
  videoLength=vL;
}
  void display(){
    cout<<"This is an amazing video with title"<<" "<<title<<endl;
    cout<<"Rating:"<<" "<<rating<<"out of 5 stars"<<endl;
    cout<<"Length of this video is:"<<" "<<videoLength<<"min"<<endl;
  }

};
class CWHText: public CWH {
int words;
public:
CWHText (string s,float r, int wc): CWH(s,r) {
  words=wc;
}
  void display(){
    cout<<"This is an amazing Text tutorial with title"<<" "<<title<<endl;
    cout<<"Rating of this text tutorial:"<<" "<<rating<<"out of 5 stars"<<endl;
    cout<<"No words in this tuturial is:"<<" "<<words<<"words"<<endl;
  }

};
int main(){
    string title;
    float rating,vlen;
    int words;

    //for video
    title="Django tutorial";
    vlen=4.56;
    rating=4.89;
    CWHVideo djVideo(title,rating,vlen);
   // djVideo.display();

//for text
  title="Django tutorial text";
    words=485;
    rating=4.5;
    CWHText djText(title,rating,words);
    //djText.display();

    CWH* tuts[2];
    tuts[0] = &djVideo;
     tuts[1] = &djText;

     tuts[0]->display();
     tuts[1]->display();

   return 0;
}
  /*Abstract class is that which has atleast one pure virtual class */

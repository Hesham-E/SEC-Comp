#include <iostream>
#include <string>
#include <vector>

#include "DateofBirth.h"
#include "Friends.h"
#include "Interest.h"


using namespace std;


class Post {
    int numOfLikes;
    int numOfDislikes;
    vector <string> posts;

    public:
    Post();
    Post(int numOfLikes, int numOfDislikes, vector<string> posts);
    
    vector <string> getPosts() {return posts; };
    int getNumOfLikes() { return numOfLikes;};
    int getNumOfDislikes() { return numOfDislikes; };
  
    void createPost(string postText);
    
};







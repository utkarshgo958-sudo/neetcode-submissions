class MedianFinder {
    priority_queue<int,vector<int>,less<int>>smallHeap;
    priority_queue<int,vector<int>,greater<int>>largeHeap;

public:
    MedianFinder() {}
    
    void addNum(int num) {
        smallHeap.push(num);
        if(!largeHeap.empty() && smallHeap.top()>largeHeap.top()){
            largeHeap.push(smallHeap.top());
            smallHeap.pop();
        }
        if(smallHeap.size()>1+largeHeap.size()){
            largeHeap.push(smallHeap.top());
            smallHeap.pop();
        }
        else if(largeHeap.size()>1+smallHeap.size()){
            smallHeap.push(largeHeap.top());
            largeHeap.pop();
        }
    }
    
    double findMedian() {
        if(largeHeap.size()==smallHeap.size()){
           return (largeHeap.top()+smallHeap.top())/2.0;
        }
        else if(largeHeap.size()>smallHeap.size()){
            return largeHeap.top();
        }
       
            return smallHeap.top();
    
    }
};

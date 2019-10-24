// There are 3 ways to return the value fromt the operator function

// 1) Creating temporary object
Counter operator ++(){
    count ++;
    Counter temp;
    temp.x = count;
    // or temp.count = count;
    return temp;
}

// 2) Creating nameless temporary object
Counter operator ++(){
    count ++;
    return Counter(count);
}
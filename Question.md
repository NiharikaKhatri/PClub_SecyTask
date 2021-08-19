# Maximum Tourists

>time limit per test : 1 second  
>memory limit per test : 256 megabytes  
>input : standard input  
>output : standard output  

You are a manager of a gigantic hotel chain  on planet X in a fictional universe. Planet X is a splendid tourist spot always full of tourists. Minister of Hospitality sends you a list of tourists visiting your planet for the next week every weekend. The list contains no. of tourists coming from each planet.  

Norms of the ministery are as follows:  
- All the tourists from a planet stay in the same hotel and viceversa i.e. a hotel can accomodate tourists from a single planet only.
- A hotel chain can choose any no. of planets for accomodation of tourists from those planets in their hotels but the planets picked should be in the form of a subarray of the list provided.

You hotel chain is so large that you can accomodate literally every tourist visiting planet X but the things are not that simple. Most of the hotels in your chain are couple friendly and can accomodate tourists in double sharing rooms only. Only **k** no. of hotels have single or triple sharing rooms and thus can accomodate planets with odd no. of visitors. 

>Your task is to choose a subarray from the list provided by ministery such that you can accomodate **maximum no. of tourists** and thus have maximum profit. Your subarray should have at max **k** no. of planets with odd numbered tourists.

## input  
- First line contains one integer t (1 <= t <= 100), the no. of test cases.
- For each test case,
    - First line contains two integers, n (1<=n<=1e5) and k (1<=k<=n).  
    n is the no. of planets in that list and k represents no. of hotels that can accomodate odd no. of tourists.
    - Next line contains n no. of integers a<sub>i</sub> (1<=a<sub>i</sub><=10<sup>9</sup>), each a<sub>i</sub> represents the no. of tourists coming from each planet.

## output
For each test case, output in each line three space seperated numbers, total no. of tourists you will accomodate, starting index of the subarray, ending index of subarray  
Note : indices are 1 based.  

## example
### input : 
```
1
8 2
2 6 1 3 7 4 8 1
```

### output : 
```
22 4 7
```

### explanation : 
`3 7 4 8` is the largest subarray (by sum) with at max 2 odd numbers.
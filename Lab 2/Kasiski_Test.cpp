#include<iostream>
//#include<conio.h>
#include<string.h>

using namespace std ;
const int size = 4 ;

void substring(char str[] , char sub[][size] , int freq[], int &count , int index[][10]){
	int val = 0 ;
	int len = strlen(str) ;
	char subcopy[size] ;
	int d[len-size+1] ;
	
	for(int  i=0 ; i<(len-size+1) ; i++ )
		d[i] = 0 ;
		
	for(int i=0 ; i<(len-size+1) ; i++){
		val = 0 ;
		for(int j=0 ; j<size ; j++)
				subcopy[j] = str[i+j] ;
		
		for( int k=0 ; k<count ; k++ ){
			int c=0 ;
			for(int l=0 ; l<size ; l++)
				if(sub[k][l] == subcopy[l])
					c++ ;
			if(c==size)
			{
				freq[k] +=1 ;
				val += 1 ;
				index[k][d[k]] = i ;
				d[k] +=1 ;
			}
		}
		
		if(val == 0){
			for(int j=0 ; j<size ; j++)
				sub[count][j] = str[i+j] ;
			freq[count] = 1 ;
			index[count][d[count]] = i ; 
			d[count] += 1 ; 	
			count += 1 ;
		}
	}	
}

void sort_n_select(char sub[][size], int sub_freq[], char r_sub[][size], int r_sub_freq[] , int &count , int index[][10] , int r_index[][10]){
	int c_count = 0 ;
	for(int i = 0 ; i < count ; i++)
		if(sub_freq[i] > 1 ){
			for(int j=0 ; j<size ; j++)
				r_sub[c_count][j] = sub[i][j] ;
			r_sub_freq[c_count] = sub_freq[i] ;
			for(int j=0 ; j<10 ; j++)
				r_index[c_count][j] = index[i][j] ;
			c_count += 1 ; 	
		}
	count = c_count ;	
}


int main(){
	char msg[] = "VHVSSPQUCEMRVBVBBBVHVSURQGIBDUGRNICJQUCERVUAXSSR" ;
	int len = strlen(msg) ;
	
	cout << " Cipher Text : " << msg << endl ;
	
	int sub_freq[len-size+1] ;
	char sub[len-size+1][size] ;
	int count = 0 ;
	
	int index[len-size+1][10] ;
	
	for(int i=0 ; i<(len-size+1) ; i++)
		for(int j=0 ; j<10 ; j++)
		index[i][j] = -1 ;
	substring(msg, sub , sub_freq, count, index) ;	
	
	
	cout << "\nAll substrings of the cipher text (size : " << size << " ) " << endl ;
	cout << "Substring\tFrequency\t   Index" << endl ;  
	for(int i=0 ; i<count ; i++){
		for(int j=0 ; j<size ; j++)
			cout << sub[i][j] ;
		cout << "\t\t" << sub_freq[i] << endl ;
	}
	
	int r_sub_freq[10] ;
	char r_sub[10][size] ;
	int r_index[10][10] ;
	sort_n_select(sub, sub_freq, r_sub, r_sub_freq , count , index , r_index ) ;
	
	cout << "\nRepeated substrings of the cipher text (size : " << size << " ) " << endl ;
	cout << "Substring\tFrequency\t   Index " << endl ;  
	for(int i=0 ; i<count ; i++){
		for(int j=0 ; j<size ; j++)
			cout << r_sub[i][j] ;
		cout << "\t\t" << r_sub_freq[i] << "\t\t" ; 
		for(int j=0 ; j<4 ; j++ )
			cout << r_index[i][j] << "  " ;
		cout << endl ;	 
	}
//	getch();
	return 0;
}

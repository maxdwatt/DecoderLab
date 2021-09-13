#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void func1(string s, int ct);
void func2(string s, int len);
void func3(string s, int len);
int func4(int arr[], int len);
int func5(int arr[], int val, int len);
void func6(int arr[], int ind, int len);
void func7(string s, int arr[], int len, int i1, int i2, bool do_pr);
void func8(string s, int len, int arr[], int len2);
void func9(string s9, int arr1[], int arr2[], int len1, int len2);
void func10(string s10, int arr[], int len);
void func11(string s7, int len, int msize);
void func12(string s, int len, int msize);
void func13(string s, int len, int msize);

int main() {
	string alpha= "abcdefghijklmnopqrstuvwxyz";
	cout << "Hello World!" << endl;
	/*****************************************************/
       /* for func1 */
	string str0 = "let it snow! ";
	int x = 4;
	func1(str0,x);


	/*****************************************************/
       /* for func2 */
	string string1 = "kceacruanmpedle sluastethev"; // 28 characters total
	func2(string1,28);



	/*****************************************************/
      /* for func3 */
      string string2 = "speliknuweorrubs tergudeunfe cestmanlbowctoshac";
	func3(string2,47);


	/*****************************************************/
       /* for func4 */
	int f4arr1[6] = {17, 10, 5, 20, 18, 2};
	int f4arr2[8] = {7, 21, 9, 6, 2, 39, 3, 25};
	int f4arr3[4] = {-2,1,7,2};
	int f4arr4[5] = {5, 8, 2, 13, 7};
	int f4arr5[7] = {12, -4, -2, 3, -7, -5, -3};
	cout << alpha[func4(f4arr1,6)]<<alpha[func4(f4arr2,8)]<<alpha[func4(f4arr3,4)]<<alpha[func4(f4arr4,5)]<<alpha[func4(f4arr5,7)]<<endl;


	/*****************************************************/
      /* for func5 */
	string string5 = "vapkfslifbhnoueweoihsakbix";
	int f5arr1[14] = {57,16, 46, 41,75,31,64,21,18,13,66,68,81,10};
	int f5arr2[20] = {22,66,67,85,90,92,70,81,42,79,32,27,99,25,49,74,68,12,55,94};
	int f5arr3[17] = {96,64,10,73,4,14,71,37,77,52,54,93,19,26,89,84,47};
	int f5arr4[13] = {28,49,44,19,37,42,26,78,12,88,67,51,66};
	int f5arr5[29] = {11,32,82,90,97,84,30,77,46,6,69,41,79,48,17,65,25,53,33,16,5,7,21,94,38,27,95,100,92};
	int f5arr6[15] = {84,30,77,46,6,69,1,79,48,17,65,25,53,33,16};
	cout << string5[func5(f5arr1,48,14)] << string5[ func5(f5arr2,24,20) ]<<string5[func5(f5arr3,80,17) ] << string5 [func5(f5arr4,39,13) ] << string5 [func5(f5arr5,36,29) ] << string5 [func5(f5arr6,27,15) ]<< endl;


	/*****************************************************/
      /* for func6 */
	string string6= "leztiwrqekrktfmwrbfhyljmuekpvonitapsxp";
	int f6arr1[10] = {17,4,32,12,8,6,14,24,21,11};
	int f6arr2[7] = {21,33,13,18,5,8,35};
	int f6arr3[4] = {15,19,32,4};
	int f6arr4[5] ={35,20,27,24,6};
	/**/
	func6(f6arr1,7,10);
	for (int i = 0; i < 10; i++) {
		cout << string6[f6arr1[i]];
	}
	cout << " ";
	func6(f6arr2,0,7);
	for (int i = 0; i < 7; i++) {
		cout << string6[f6arr2[i]];
	}
	cout << " ";
	func6(f6arr3,1,4);
	for (int i = 0; i < 4; i++) {
		cout << string6[f6arr3[i]];
	}
	cout << " ";
	func6(f6arr4,2,5);
	for (int i = 0; i < 5; i++) {
		cout << string6[f6arr4[i]];
	}
	cout << endl;


	/*****************************************************/
      /* for func7 */
	string s7 = "skldhbeoieldoodwac hkq cocu iaoe crhpogusyiahhifcet";
	int f7arr[27] = {25,45,48,12,10,16,50,9,32,17,19,36,27,33,30,24,20,28,7,6,18,14,37,39,38,42,44};
	func7(s7, f7arr, 27, 18,2,false);  /*  won't decode */
	func7(s7,f7arr,27,12,25,true);  /* will decode */


  	/*****************************************************/
      /* for func8 */
	 string s6 = "xezuhnbl_uiplypdhqlb";
	 int len = 20;
	 int f8arr[] = {2351,92837,482,65,1039,233,23095,1,2037,693842,283};
	 int len2 = 11;
	 func8(s6,len,f8arr,len2);


  	/*****************************************************/
      /* for func9 */
  	 string s9 = "slckfoiold,eryt coteidkfzlvkaljwoeihy dnivgphweugaltzsdxls,gfxnbcm wakrm qblanuaksdhzlkjets, anuakd shojqhwtis uzcdoalbicsoiabasboihs";
     int f9arr1[30] = {2,7,9,10,15,24,36,37,42, 44,51,57,66,68,70,74,76,80,88, 89,92,94,98,101,102,113, 115, 120, 122, 124};
	 int f9len1 = 30;
	 int f9arr2[17] = {8,16,17,39,40,58,67,71,72,75,77,90,91,93, 99,107,110};
	 int f9len2 = 17;
	 func9(s9,f9arr1,f9arr2,f9len1,f9len2);


  	/*****************************************************/
      /* for func10 */
	 string str10 = "alettioe twhaaabosi hkcxl";
	 int f10arr[23] = {22,11,13,22,5,13,8,3,3,11,7,14,3,19,11,5,1,3,12,9,4,2,22};
	 func10(str10,f10arr,23);


  	/*****************************************************/
      /* for func11 */
	 string s11 = "mboehdkuxkwpmnfzicosyfmeuqlaitcvwdgn";
	 len = 36;
	 func11(s11,len,6);


  	/*****************************************************/
      /* for func12 */
	 string str12 = "gboehdpixkwpangzicjsygmeaqlaltmvwdgeabndckswoshbk";
	 len = 49;
	 func12(str12,len,7);


  	/*****************************************************/
      /* for func13 */
	 string s13 ="w_orp_eshmueryasaa_nootetkdtbueteei_ars!vsfib_t!e_fslg_!rye_yra_";
	 len = 64;
	 func13(s13,len,8);
	return 0;
}
/*******************************END MAIN *****************************************/


/***********************************************************************************/


void func1(string s, int ct){
	int counter = 0;
	while(counter!=ct){
		cout<<s;
		counter = counter+1;
	}
}

void func2(string s, int len){
	int counter = 1;
	while(counter < len - 1){
		cout << s[counter];
		counter = counter + 2;
	}
}

void func3(string s, int len){
	for(int i = len-1; i>0;i--){
		cout<<s[i];
		i = i - 1;
	}
}

int func4(int arr[], int len){
	int avg = 0;
	int sum = 0;
	for(int i = 0; i < len; i++){
		sum = sum + arr[i];
		avg = sum/len;
	}
	return avg;
}

int func5(int arr[], int val, int len){
	int closest = 0;
	int diff1 = 100;
	int diff2 = 0;
	for(int i = 0; i!=len;i++){
		diff2 = abs(val-arr[i]);
		if(diff2<diff1){
			closest = i;
			diff1 = diff2;
		}
	}
	return closest;
}
void func6(int arr[], int ind, int len){
	int small = 10000;
	int smalldex;
	//finding the smallest value
	for(int i = 0; i != len; i++){
		int holder = arr[i];
		if(holder < small){
			small = holder;
			smalldex = i;
		}
	}
	//replacing the values
	int temp = arr[ind];
	arr[ind] = small;
	arr[smalldex] = temp;

}

void func7(string s, int arr[], int len, int i1, int i2, bool do_pr){
  int right = 0;
  int leftdex = 0;
  int rightdex = 0;
  //to find the index of the left value
  for(int i = 0; i!=len;i++){
    if(arr[i]==i1){
      right = arr[i];
      rightdex = i;
    }
    if(arr[i] == i2){
      leftdex = i;
    }
  }
  //moving everything to the right 
  for(int k = rightdex; k > leftdex; k--){
    arr[k] = arr[k-1];
  }
  arr[leftdex] = right;
  if(do_pr==true){
	  for(int m = 0; m != len; m++){
      cout<<s[arr[m]];
  }
}
}


void func8(string s, int len, int arr[], int len2){
    int sum = 0;
    int n = arr[len2-1];
    int m = 0;
    int r = 0;
    while(n>0){
      m = n%10;
      sum = sum + m;
      n = n/10;
    }
    r = sum%len;
    cout << s[r];
}

void func9(string s9, int arr1[], int arr2[], int len1, int len2){
    int len3 = len1 + len2;
    int arr3[len3];
    int endex = 0;
    int temp = 0;
    //adding arr1 in
    for(int i = 0; i != len1; i++){
      arr3[i] = arr1[i];
      endex = i;
    }
    //adding arr2 in
    for(int j = 0; j != len2; j++){
      arr3[endex + j ] = arr2[j];
    }
    //sorting the array
    for(int i=0; i<len3; i++){
        for(int j=i; j<len3; j++){
            //If there is a smaller element found on right of the array then swap it.
            if(arr3[j] < arr3[i]){
                temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }   

    //printing the string
    for(int n = 0; n != len3; n++){
      cout<<arr3[n];
    }
}

 void func10(string s10, int arr[], int len){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i!=len){
        for(j = 0; j != len; j++){
            if(arr[i]==arr[j]){
                for(k = j; k < len-1; ++k){
                    arr[k] = arr[k+1];
                }
            }
        }
        i++;
    }
    for(int x = 0; x != 8; x++){
        cout<<s10[arr[x]];
    }
 }

void func11(string s7, int len, int msize){
    char mat[msize][msize];
    int x = 0; 
    int y = 0;
    int xp = 0;
    int yp = 0;
    int j = 0;
    for(int i = 0; i != len; i++){
      if(y == msize){
        y = 0;
        x = x + 1;
        i--;
    }
    else{
      mat[x][y] = s7[i];
      y = y+1;
    }
    }
    while(j!=msize){
      cout<<mat[xp][yp];
      xp = xp + 1;
      yp = yp + 1;
      j = j + 1;
    }
}

void func12(string s, int len, int msize){
    char mat[msize][msize];
    int x = 0; 
    int y = 0;
    int xp = 0;
    int yp = msize-1;
    int j = msize;
    for(int i = 0; i != len; i++){
      if(y == msize){
        y = 0;
        x = x + 1;
        i--;
    }
    else{
      mat[x][y] = s[i];
      y = y+1;
    }
    }
    while(j!= 0){
      cout<<mat[xp][yp];
      xp = xp + 1;
      yp = yp - 1;
      j = j - 1;
    }
}

void func13(string s, int len, int msize){
    char mat[msize][msize];
    int x = 0; 
    int y = 0;
    int xp = 0;
    int yp = msize-1;
    int j = msize;
    int xt = 0;
    int yt = 0;
    for(int i = 0; i != len; i++){
      if(y == msize){
        y = 0;
        x = x + 1;
        i--;
    }
    else{
      mat[x][y] = s[i];
      y = y+1;
    }
    }
    while(j!= 0){
      cout<<mat[xp][yp];
      xp = xp + 1;
      yp = yp - 1;
      j = j - 1;
    }
    while(xt != msize){
      cout<<mat[yt][xt];
      yt = yt + 1;
      if(yt == msize - 1){
        yt = 0;
        xt = xt + 1;
      }
    }
}



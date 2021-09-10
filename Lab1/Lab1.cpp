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
  int left = 0;
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
      left = arr[i];
      leftdex = i;
    }
  }
  //moving everything to the right 
  for(int k = rightdex; k > leftdex; k--){
    arr[k] = arr[k-1];
  }
  arr[leftdex] = right;
  for(int m = 0; m != len; m++){
      cout<<s[arr[m]];
  }
}


void func8(string s, int len, int arr[], int len2){
	int sum = 0;
	for(int i = 0; i < len2 + 1; i++){
		sum = sum + arr[i];
	}
	int remainder = sum/len;
	cout << arr[remainder];
}

void func9(string s9, int arr1[], int arr2[], int len1, int len2){
	int len3 = len1 + len2;
	int arr3[len3];
	for(int i = 0; i < len1 +1; i++){
		if(arr1[i] == arr2[i]){
			arr3[i] = arr1[i];
			arr3[i+1] = arr1[i];
			i++;
		}
		else{
			arr3[i] = arr1[i];
		}
	}
	for(int j = 0; j < len3+1;j++){
		cout<<s9[arr3[j]];
	}
}

void func10(string s10, int arr[], int len){
	int arr1[len];
	bool unique[len];
	for(int i = 0; i < len+1; i++){
		unique[i] = true;
	}
	for(int j = 0; j < len+1; j++){
		if(unique[j]==true){
			for(int k = 0; k < len+1; k++){
				if(arr[j] == arr[k]){
					unique[k] = false;
				}
			}
		}
	}
	for(int m = 0; m < len+1; m++){
		if(unique[m] == true){
			arr1[m] = arr[m];
		}
		else{
			arr1[m-1] = arr[m];
		}
	}
}

void func11(string s7, int len, int msize){
	int mat[msize][msize];
	int counter = 0;
	int counter_2 = 0;
	int counter_3 = 0;
	int counter_4 = 0;
	for(int i = 0; i<len-1;i++){
		if(i > counter + msize){
			mat[0][counter_2] = s7[i];
			counter = counter + msize;
		}
		else{
			mat[counter_3+1][counter] = s7[i];
		}
	}
	for(int j=msize; j>-1;j++){
		cout<<mat[counter_4-1][j];
	}
}

void func12(string s, int len, int msize){
	int mat[msize][msize];
		int counter = 0;
		int counter_2 = 0;
		int counter_3 = 0;
		int counter_4 = 0;
		for(int i = 0; i<len-1;i++){
			if(i > counter + msize){
				mat[0][counter_2] = s[i];
				counter = counter + msize;
			}
			else{
				mat[counter_3+1][counter] = s[i];
			}
		}
		for(int j=msize; j>-1;j--){
			cout<<mat[counter_4+1][j];
		}
}

void func13(string s, int len, int msize){
	int mat[msize][msize];
			int counter = 0;
			int counter_2 = 0;
			int counter_3 = 0;
			int counter_4 = 0;
			int counter_5 = 0;
			int counter_6 = 0;
			for(int i = 0; i<len-1;i++){
				if(i > counter + msize){
					mat[0][counter_2] = s[i];
					counter = counter + msize;
				}
				else{
					mat[counter_3+1][counter] = s[i];
				}
			}
			for(int j=msize; j>-1;j--){
				cout<<mat[counter_4+1][j];
			}
			for(int k=0; k<msize*msize;k++){
				if(k == msize+counter_5){
					cout<<mat[counter_6+1][k];
				}
				else{
					cout<<mat[counter_6][k];
				}
			}
}



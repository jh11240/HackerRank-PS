/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string ret="",hour="";
    //if AM
     if(s[s.size()-2] == 'A'){
       hour=hour+s[0]+s[1];  
       //check if hour is 12
       if(hour=="12"){
           ret+="00";
           for(int i =2;i<s.size()-2;i++){
               ret+=s[i];
           }
       }
       //else same as s
       else {
           for(int i=0;i<s.size()-2;i++){
               ret+=s[i];
           }
       }
     }
     //if PM
     else{
       hour=hour+s[0]+s[1];  
       //check if hour is 12
       if(hour=="12"){
            for(int i=0;i<s.size()-2;i++){
                ret+=s[i];
            }
       }
       else {
           int iHour=0;
           char fDigit=s[0];
           iHour += (fDigit-'0')*10;
           fDigit=s[1];
           iHour +=fDigit-'0';
           iHour+=12;
           ret+=(iHour/10)+'0';
           ret+=(iHour%10)+'0';
            for(int i =2;i<s.size()-2;i++){
               ret+=s[i];
           }
       }
    }
    return ret;
    
}
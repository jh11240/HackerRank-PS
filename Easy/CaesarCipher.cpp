/*
 * Complete the 'caesarCipher' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */

string caesarCipher(string s, int k) {
    string ret="";
    k%=26;
    for(char elem : s){
        if(elem-'A'<=25 && elem-'A'>=0){
            if(elem-'A'+k>25){
                ret += 'A'+(elem-'A'+k-26);
            }
            else
                ret += 'A'+(elem-'A'+k);
        }
        else if(elem-'a'<=25 && elem-'a'>=0){
            if(elem-'a'+k>25){
                ret+= 'a'+(elem-'a'+k-26);
            }
            else
                ret +='a'+ (elem - 'a'+k);
        }
        else
            ret+=elem;
    }
    return ret;
}

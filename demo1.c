#include <stdio.h>
int main(){
    double all,mid,fin,q1,q2,lab,sit;
    scanf("%lf %lf %lf %lf %lf %lf",&mid,&fin,&q1,&q2,&lab,&sit);
    double s1 = mid * 30/100;
    double s2 = fin * 35/120;
    double s3 = q1 * 12/60;
    double s4 = q2 * 13/60;
    double s5 = lab * 5/16;
    double s6 = sit  * 5/16;
    all = s1 + s2 + s3 + s4 + s5 + s6;
    printf("%10s=%6lf\n%10s=%6lf\n","mid",s1,"final",s2);
    printf("%10s=%6lf\n%10s=%6lf\n","q1",s3,"q2",s4);
    printf("%10s=%6lf\n%10s=%6lf\n","lab",s5,"sit",s6);
    printf("%10s=%6lf\n","100%",all);


}
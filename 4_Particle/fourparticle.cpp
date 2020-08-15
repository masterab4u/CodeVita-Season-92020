#include<bits/stdc++.h>
#include<math.h>
#include<cmath>
using namespace std;
float dist(float x1,float x2,float y1,float y2,float z1,float z2){
  float d=0;
  d=sqrt(pow(x2 - x1, 2) +  pow(y2 - y1, 2) +  pow(z2 - z1, 2) * 1.0); 
  return d;
}
float area(float side1, float side2, float side3 ){
  float s = (side1+side2+side3)/2;
  float are = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    return are;
}
 int main(){
   float h,a,b,c,d,va,vb,vc,vd; 
   cin>>h>>a>>b>>c>>d>>va>>vb>>vc>>vd;
  char da,db,dc,dd;
  cin>>da>>db>>dc>>dd;
  if(da=='D'){
    va=va*(-1);
  }
  if(db=='D'){
    vb=vb*(-1);
  }
  if(dc=='D'){
    vc=vc*(-1);
  }
  if(dd=='D'){
    vd=vd*(-1);
  }
  float xa=0,ya=h*(-1);
  float xb=h,yb=h*(-1);
  float xc=h,yc=0;
  float xd=0,yd=0;
  float z[100][4];
  for( int i=0;i<100;i++){
    for( int j=0;j<4;j++){
      z[i][j]=0;
    }
  }
  z[0][0]=a;
  z[0][1]=b;
  z[0][2]=c;
  z[0][3]=d;
  for( int i=1;i<100;i++){
    z[i][0]=z[i-1][0]+va;
    z[i][1]=z[i-1][1]+vb;
    z[i][2]=z[i-1][2]+vc;
    z[i][3]=z[i-1][3]+vd;
    if(z[i][0] > h){
      z[i][0]=h;
    }
    if(z[i][0] < 0){
      z[i][0]=0;
    }
    if(z[i][1] > h){
      z[i][1]=h;
    }
    if(z[i][1] < 0){
      z[i][1]=0;
    }
    if(z[i][2] > h){
      z[i][2]=h;
    }
    if(z[i][2] < 0){
      z[i][2]=0;
    }
    if(z[i][3] > h){
      z[i][3]=h;
    }
    if(z[i][3] < 0){
      z[i][3]=0;
    }
  }
  float ab[100];
  for( int i=0;i<100;i++){
    ab[i]=dist(xa,xb,ya,yb,z[i][0],z[i][1]);
  }
  float bc[100];
  for( int i=0;i<100;i++){
    bc[i]=dist(xb,xc,yb,yc,z[i][1],z[i][2]);
  }
   float ac[100];
  for( int i=0;i<100;i++){
    ac[i]=dist(xa,xc,ya,yc,z[i][0],z[i][2]);
  }
   float ad[100];
  for( int i=0;i<100;i++){
    ad[i]=dist(xa,xd,ya,yd,z[i][0],z[i][3]);
  }
  float bd[100];
  for( int i=0;i<100;i++){
    bd[i]=dist(xb,xd,yb,yd,z[i][1],z[i][3]);
  }
   float cd[100];
  for( int i=0;i<100;i++){
    cd[i]=dist(xc,xd,yc,yd,z[i][2],z[i][3]);
  }
  
  float abc[100];
  for(int i=0;i<100;i++){
    abc[i]=area(ab[i],bc[i],ac[i]);
  }
  float adc[100];
  for(int i=0;i<100;i++){
    adc[i]=area(ad[i],cd[i],ac[i]);
  }
  float abd[100];
  for(int i=0;i<100;i++){
    abd[i]=area(ab[i],ad[i],bd[i]);
  }
  float bcd[100];
  for(int i=0;i<100;i++){
    bcd[i]=area(bc[i],cd[i],bd[i]);
  }
  
  float maxabc = abc[0];
    for (int i = 0; i < 100; i++){
            if (maxabc < abc[i])
          maxabc = abc[i];
  }
    float minabc = abc[0];
        for (int i = 0; i < 100; i++)
        {
            if (minabc > abc[i])
                minabc = abc[i];
        }
    float maxadc = adc[0];
        for (int i = 0; i < 100; i++)
        {
            if (maxadc < adc[i])
               maxadc = adc[i];
        }
    float minadc = adc[0];
        for (int i = 0; i < 100; i++)
        {
            if (minadc > adc[i])
                minadc = adc[i];
      }
    float ans1=4*pow((maxabc+maxadc),2);
    float ans2=4*pow((minabc+minadc),2);
        cout<<round(ans1)<<" "<<round(ans2)<<endl;
  return 0;

}
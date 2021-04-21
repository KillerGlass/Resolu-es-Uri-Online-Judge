#include <stdio.h>

int main( ){
    int a,b,c,d,e,f,g,h,d3,h3,m3,s3;
    int z,x,w,y,v,t;
    char m[4],s,p;
    scanf("%s %d",m,&a);
    scanf(" %d %c %d %c %d",&c,&p,&e,&s,&h);
    scanf("%s %d",m,&b);
    scanf( "%d %c %d %c %d",&d,&p,&f,&s,&g);
    z=c,x=d,w=e,y=f,v=h,t=g;
    if(b>a && c<=d){
      if(c==d && e>f){
          d3=(b-a)-1;
      }else{
          d3=b-a;
      }
    }else{
      d3=(b-a)-1;
    }
    if(c==d && e<=f){
      h3=0;
    }else{  
      if(c<d){
        h3=d-c;
      }
        if(c>d){
          c=24-c;
          h3=c+d;
        } 
        if(z==x && e>f){
          h3=23;
      }
     
    }
    if(f==e && h<=g){
      m3=0;
    }else{
      if(e<f){
        m3=f-e;
      }
        if(e>f){
          e=60-e;
          m3=e+f;
        }
      
      if(w==y && h>g){
          m3=59;
        }
    }
    if(g==h){
      s3=0;
    
    }else{
      if(h<g){
        s3=g-h;
      }else{
        if(h>g){
          h=60-h;
          s3=g+h;
        }
      }
    }
  if(d3<0){
    d3=0;
  }
  
  if(e!=f && v>t){
    m3--;
  }
  if(m3<0){
    m3=0;
  }
  if(z!=x && (w>=y && v>t) || (w>y && v<t)){
   
       h3=h3-1;
    
   
  }
  if(h3<0){
    h3=0;
  }
  printf("%d dia(s)\n",d3);
  printf("%d hora(s)\n",h3);
  printf("%d minuto(s)\n",m3);
  printf("%d segundo(s)\n",s3);
  return 0;
   
}
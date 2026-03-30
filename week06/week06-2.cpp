// week06-2
void setup(){
  size(800,500);
}
int [][] a=new int[10][16];
void mouseDragged() {
  int i = mouseY/50, j = mouseX/50;
  a[i][j] = 120;
}
void draw(){
  background(255);
  for(int i=0; i<10; i++) {
    for(int j=0; j<16; j++) {
      if (a[i][j]>0) {
        fill(#5DFF1F, a[i][j]*4);
        a[i][j]--;
      } else fill(255);
      rect( j*50,i*50,50,50 );
    }
  }
}
  /*
  for(int y=0;y<500;y+=50){
    for(int x=0;x<800;x+=50){
      if(x<mouseX&&mouseY<x+50) fill(#5DFF1F);
      else if(y<mouseY&&mouseX<y+50) fill(#5DFF1F);
      else fill(255);
      rect(x,y,50,50);
    }
  }
}*/

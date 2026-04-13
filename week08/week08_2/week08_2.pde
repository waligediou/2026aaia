//week08-2
public void setup() {
  /* size commented out by preprocessor */;
}  
int [][] board=new int[10][10];
public void mousePressed() {
  int i=(mouseY-10)/60, j=(mouseX-10)/60;
  println(i,j);
  if(mouseButton==LEFT)board[i][j]=1;
  if(mouseButton==RIGHT)board[i][j]=2;
  if(mouseButton==CENTER)board[i][j]=0;
}  
public void draw(){
  background(0xFFE8BF73);
   for (int i=0; i<10; i++){
    for (int j=0; j<10; j++){
      int x=10+j*60,y=10+i*60;
      fill(0xFFE8BF73);
      strokeWeight(2);
      rect(x,y,60,60);
      if(board[i][j]==1) fill(0);
      if(board[i][j]==2) fill(255);
      if(board[i][j]!=0) ellipse(30+x,30+y,50,50);
    }
  }
}   

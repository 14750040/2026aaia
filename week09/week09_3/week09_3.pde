// week09-3 好玩得程式設計 (氣球會變大)
//修改自 week09-2 好玩的程式設計 (互動氣球)
PImage img; // 宣告變數(圖)
void setup(){
   size(600, 500);
   img = loadImage("balloon.png"); //讀入圖片
} // 要在手動把[圖檔]拉進程式裡

float x,y,s = 0.1; //一開始的氣球大小
void draw(){ // 畫圖的函式(每秒60次)
  background(#FFFFF2); // 背景:淡黃色
  ///image(img, mouseX-96/2, mouseY-132, 96, 132);
  if (mousePressed){ //如果mouse壓下去
  s = s*1.02; //氣球會變大  
  image(img, mouseX-96/2*s,mouseY-132*s,96*s,132*s);
  }else s=0.1;//放開mouse時 , 氣球教會店小
//這裡的座標,有稍微改一下
// 讓手拿氣球下面綁起來的地方
}

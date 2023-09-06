// Your graph paper code goes below
#include  "FPToolkit.c"

int main(){

  printf("Input number of rows and columns (one integer): ");
  int n;
  scanf("%d", &n);
  printf("You have chosen %d columns and rows.\n", n);

  int width = 600;
  int height = 600;
  G_init_graphics(width,height);

  int col = width/n;
  int n_copy = n;
  while(n_copy > 0){
    G_rgb(1.0, 0.0, 0.0);
    G_line((width-col),0, (width-col),height);
    G_line(0,(width-col), height,(width-col));
    n_copy -= 1;
    width = width-col;
  }

  int key ;   
   key =  G_wait_key();
}
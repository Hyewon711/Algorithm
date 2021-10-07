class Main {
 
  public static void main(String[] args) {
 
		Scanner scan = new Scanner(System.in);
		int x = 1;
		int y = 1;
		int n = scan.nextInt();
		String[] compareStr = {String.valueOf('L'),String.valueOf('R'),String.valueOf('U'),String.valueOf('D')};
		scan.nextLine();
 
		String str = scan.nextLine();
 
		String[] arr = str.split(" ");
 
		for(int i=0;i<arr.length;i++){
			if(arr[i].equals(compareStr[0])){
				if(y>1){
					y-=1;
				}
			}else if(arr[i].equals(compareStr[1])){
				if(y<n){
					y+=1;
				}
			}else if(arr[i].equals(compareStr[2])){
				if(x>1){
					x-=1;
				}
			}else if(arr[i].equals(compareStr[3])){
				if(x<n){
					x+=1;
				}
			}
		}
 
		System.out.printf("%d %d",x,y);
 
  }
 
}
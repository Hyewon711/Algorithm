public class 미로탈출 {
    public static int N, M;
    // N, M의 값에 맞춰 200,200 크기의 배열을 만들면, 이동 좌표 계산시 array boundary exceeded가 발생할 수 있다.
    public static int [][]graph = new int[201][201];
    
    //이동할 네 가지 방향 정의 {상, 하, 좌 ,우}
    public static int dx[] = {-1, 1, 0, 0};
    public static int dy[] = {0, 0, -1, 1};
    
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        M = sc.nextInt();
        sc.nextLine();
        
        int result = 0;
        for(int i=0; i<N; i++){
            String line = sc.nextLine();
            for(int j=0; j<M; j++){
                graph[i][j] = line.charAt(0) - '0';
            }
            }
            
            //BFS 수행 결과 출력
            System.out.println(bfs(0,0));
            }
            
            public static int bfs(int x, int y){
                Queue<Node> queue = new LinkedList<>();
                    queue.add(new Node(1,1));
                    
                    //큐가 빌 때까지 반복
                    while(!queue.isEmpty()){
                        Node node = queue.poll();
                        x = node.getX();
                        y = node.getY();
                        
                        for(int i=0;i<4;i++){
                            int nx = x + dx[i];
                            int ny = y + dy[i];
                            
                            //미로 범위를 벗어나면 무시
                            if(nx <0 || ny < 0 || nx >= N || ny >= M) continue;
                            //한 번 왔던 위치면 무시 , 괴물이 있는 위치면 무시
                            if(graph[nx][ny]==1){
                                graph[nx][ny] = graph[x][y] + 1;
                                queue.add(new Node(nx, ny));
                            }
                        }
                    }
                    // 가장 오른쪽 아래까지의 최단 거리 반환
                    return graph[N-1][M-1];
                    }
                    
                    static class Node{
                        final private int x;
                        final private int y;
                        private int value;
                        
                        Node(int x, int y){
                            this.x = x;
                            this.y = y;
                        }
                        
                        public int getX() {
                            return x;
                        }
                        
                        public int getY(){
                            return y;
                        }
            }
 }
                    
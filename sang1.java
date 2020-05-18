int w = maps.length;
        int h = maps[0].length;
        int sum = 0;  // 섬의 둘레
        int chk = 0;  // 땅인지 물인지 확인하는 변수 (0 또는 1)

        for(int i = 0; i < w; i++) {  // 세로 둘레를 구하기 위해 각 행마다 돌며 비교
           chk = 0;  // 처음 비교하기 전에는 물에서 시작했다고 가정

           for(int j = 0; j < h; j++) {
              if(maps[i][j] == 1 && chk == 0) {  // 현재 좌표가 땅이고 직전 좌표가 물이면 2씩 추가
                 sum += 2;
                 chk = 1;
              }
              else if(maps[i][j] == 0) {  // 현재 좌표가 물이면 변수를 0으로 변경
                 chk = 0;
              }
           }
        }

        for(int i = 0; i < h; i++) {  // 가로 둘레를 구하기 위해 각 열마다 비교
           chk = 0;

           for(int j = 0; j < w; j++) {
              if(maps[j][i] == 1 && chk == 0) {
                 sum += 2;
                 chk = 1;
              }
              else if(maps[j][i] == 0) {
                 chk = 0;
              }
           }
        }

        return sum;

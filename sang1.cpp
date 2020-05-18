int w = maps.length;
        int h = maps[0].length;
        int sum = 0;
        int chk = 0;

        for(int i = 0; i < w; i++) {
           chk = 0;

           for(int j = 0; j < h; j++) {
              if(maps[i][j] == 1 && chk == 0) {
                 sum += 2;
                 chk = 1;
              }
              else if(maps[i][j] == 0 && chk == 1) {
                 chk = 0;
              }
           }
        }

        for(int i = 0; i < h; i++) {
           chk = 0;

           for(int j = 0; j < w; j++) {
              if(maps[j][i] == 1 && chk == 0) {
                 sum += 2;
                 chk = 1;
              }
              else if(maps[j][i] == 0 && chk == 1) {
                 chk = 0;
              }
           }
        }

        return sum;

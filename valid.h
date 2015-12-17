

int isvalid(char piece, char ix1, char iy1, char mov, char fx1, char fy1){
	if((tolower(piece) == piece && turn == lower) || (tolower(piece)!= piece && turn == upper) ){
	int result;
	int fx = fx1 - 'a';
	int ix = ix1 - 'a'; // Converting chars to int for easier use later
	int iy = iy1 - '0';
	int fy = fy1 - '0';
	switch(mov){
		case 'x':
			switch(tolower(piece)){
				case 'p':
					if(board[fx][fy] != '_' && (abs(fx - ix) == 1 && abs(fy - iy) == 1))
						return 1;
					return 0;
				case 'b':
					if(board[fx][fy] != '_' && (abs(fx-ix))/(abs(fy-iy)) == 1)
						return 1;
					return 0;
				case 'r':
					if(board[fx][fy] != '_' && (!(fx-ix != 0) != !(fy - iy != 0))
						return 1;
                		    return 0;
                		case 'n':
                    			if(board[fx][fy] != '_' && ((abs(fx - ix) == 3 && abs(fy - iy) == 1) || (abs(fy - iy) == 3 && abs(fx - ix) == 1)  ))
                				     return 1;
                			  return 0;
				case 'k':
					if(board[fx][fy] != '_' && matecheck != 1 && (abs(ix-fx) == 1 || abs(iy-fy) == 1))
						return 1;
					return 0;
				case 'q':
					if(board[fx][fy] != '_' && (abs(ix-fx)%abs(iy-fy)==0 || (abs(ix-fx)%abs(iy-fy)== NULL)) )
						return 1;
					return 0;
			}
		case '-':
			switch(tolower(piece)){
				case 'p':
					if(abs(fx - ix) == 1 && abs(fy - iy) == 1)
						return 1;
					return 0;
				case 'b':
					if((abs(fx-ix))/(abs(fy-iy)) == 1 && (fx != ix || fy != iy))
						return 1;
					return 0;
				case 'r':
					if((!(fx-ix != 0) != !(fy - iy != 0))
						return 1;
                		    return 0;
                		case 'n':
                    			if(((abs(fx - ix) == 3 && abs(fy - iy) == 1) || (abs(fy - iy) == 3 && abs(fx - ix) == 1)  ))
                				     return 1;
                			  return 0;
				case 'k':
					if(matecheck != 1 && (abs(ix-fx) == 1 || abs(iy-fy) == 1))
						return 1;
					return 0;
				case 'q':
					if((abs(ix-fx)%abs(iy-fy)==0 || (abs(ix-fx)%abs(iy-fy)== NULL)) )
						return 1;
					return 0;
			}
	}
	return 1;
	}
	else 
	return 0;

}

#include <stdio.h>

#define NUM_ROWS 4
#define NUM_COLS 4

/// Helper Function Prototypes /// 
int check_row(int row, char player);
int check_rows(char player);
int check_diagonals(char player);
int player_won(char player);
int no_more_moves();

/// Primary Function Prototypes ///
void show_board();
int keep_playing(void);
void prompt_player();

/// Global Variables ///
char BOARD[NUM_ROWS][NUM_COLS] = {
  {' ', ' ', ' ', ' '},
  {' ', ' ', ' ', ' '},
  {' ', ' ', ' ', ' '},
  {' ', ' ', ' ', ' '}
};

char CURRENT_PLAYER;
char WINNER;

/// Main ///

int main(void)
{
  CURRENT_PLAYER = 'X';

  while(keep_playing())
  {
    show_board();
    prompt_player(); 
  }

  if(WINNER == 'X')
    printf("Player X Wins\n");
  else if(WINNER == 'O')
    printf("Player O Wins\n");
  else
    printf("Draw\n");

  show_board();

  return 0;
}


/// Helper Functions ///

int check_row(int row, char player)
{
  int output;
  output = 0;
  if((BOARD[row][0] == player) && (BOARD[row][1] == player) && (BOARD[row][2] == player) && (BOARD[row][3] == player))
    output = 1;
  return output;
}

int check_col(int col, char player)
{
  int output;
  output = 0;
  if((BOARD[0][col] == player) && (BOARD[1][col] == player) && (BOARD[2][col] == player) && (BOARD[3][col] == player))
    output = 1;
  return output;
}

int check_rows(char player)
{
  int output;
  output = 0;
  if(check_row(0, player) || check_row(1, player) || check_row(2, player) || check_row(3, player))
    output = 1;
  return output;
}

int check_columns(char player)
{
  int output;
  output = 0;
  if(check_col(0, player) || check_col(1, player) || check_col(2, player) || check_col(3, player))
    output = 1;
  return output;
}

int check_diagonals(char player)
{
  int output;
  output = 0;
  if((BOARD[0][0] == player) && (BOARD[1][1] == player)  && (BOARD[2][2] == player)  && (BOARD[3][3] == player))
    output = 1;

  return output;
}

int player_won(char player)
{
  int output;
  output = 0;
  if(check_rows(player))
    output = 1;
  if(check_columns(player)) 
    output = 1;
  if(check_diagonals(player))
    output = 1;
  return output;
}

int no_more_moves()
{
  int output, num_pieces, rindx, cindx;
  output = 0;
  num_pieces = 0;

  for (rindx = 0; rindx < NUM_ROWS; rindx++)
  {
    for(cindx = 0; cindx < NUM_COLS; cindx++)
    {
      if(BOARD[rindx][cindx] != ' ')
        num_pieces++;
    }
  }

  if(num_pieces == (NUM_ROWS*NUM_COLS))
    output = 1;
   
  return output;
}

/// Primary Functions ///
void show_board()
{
  char row_name[] = "row";
  int row;
  printf("------------------------------------\n"); 
  printf("|      | col0 | col1 | col2 | col3 |\n"); 
  printf("------------------------------------\n"); 
  for(row = 0; row < NUM_ROWS; row++)
  {
    row_name[3] = row;
    printf("| %s%d |   %c  |   %c  |   %c  |   %c  |\n", row_name, row, BOARD[row][0], BOARD[row][1], BOARD[row][2],BOARD[row][3]); 
    printf("------------------------------------\n"); 
  }
  printf("\n"); 
}

int keep_playing(void)
{
  int output;
  output = 1;
  if(player_won('X'))
  {
    WINNER = 'X'; 
    output = 0;
  } else if(player_won('O'))
  {
    WINNER = 'O';
    output = 0;
  } else if(no_more_moves())
    output = 0;
   
  return output;
}

void prompt_player()
{
  int input_row;
  int input_col;

  printf("Player %c, please enter your move\n", CURRENT_PLAYER);
  scanf("%d,%d", &input_row, &input_col);
  BOARD[input_row][input_col] = CURRENT_PLAYER;

  if(CURRENT_PLAYER == 'X')
  {
    CURRENT_PLAYER = 'O';
  } else if(CURRENT_PLAYER == 'O')
  {
    CURRENT_PLAYER = 'X';
  }

  return;
}


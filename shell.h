# include < stdlib.h >
# include < stdio.h >
# include  < unistd.h >
# include  < string.h >
# include  < sys/types.h >
# include  < sys/wait.h >
# include  < errno.h >
# include  < dirent.h >
# include  < sys/stat.h >
# include  < grp.h >
# include  < pwd.h >
# include  < time.h >
# include  < fcntl.h >
# define  BUFSIZE  1000
# define  INPBUF  100
# define  ARGMAX  10
# define  GREEN  " \x1b [92m "
# define  BLUE  " \x1b [94m "
# define  DEF  " \x1B [0m "
# define  CYAN  " \x1b [96m " 



struct  _instr
{
    char  * argval[INPBUF];
    int  argcount;
};
typedef  struct  _instr instruction;

char  *input,*input1;
// char input[1000];
int  exitflag =  0 ;
int  filepid,fd[ 2 ];
char  cwd[BUFSIZE];
char * argval[ARGMAX];  //  our local argc, argv
int  argcount =  0 ,inBackground =  0 ;
int  externalIn= 0 ,externalOut= 0 ;
char  inputfile[INPBUF],outputfile[INPBUF];
void  screenfetch ();
void  about ();
void  getInput ();
int  function_exit ();
void  function_pwd ( char *,  int );
void  function_cd ( char *);
void  function_mkdir ( char *);
void  function_rmdir ( char *);
void  function_clear ();
void  nameFile ( struct  dirent*,  char *);
void  function_ls ();
void  function_lsl ();
void  function_cp ( char *,  char *);
void  executable ();
void  pipe_dup ( int , instruction*);
void  run_process ( int ,  int , instruction*);

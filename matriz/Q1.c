
# include  < stdio.h >
# include  < stdlib.h >

int  principal (){
	int i, j, N= 0 , M= 0 ;;
	printf ( " Digite um total de colunas: " );
	scanf ( " %d " , &M);
	printf ( " Digite um total de linhas: " );
	scanf ( " %d " , &N);
	char **costa=( char **) malloc (M* sizeof ( char *));
	for (i= 0 ;i<M;i++){
		costa[i]=( char *) malloc (N* sizeof ( char ));
	}
	printf ( " Digite o mapa do local usando pontos (.) e hashtags (#). \n " );
	for (i= 0 ;i<M;i++){
		for (j= 0 ;j<N;j++){
			scanf ( " %c \t " , &costa[i][j]);
		}
		printf ( " \n " );
	}
	for (i= 0 ;i<M;i++){
		grátis (costa[i]);	
	}
	grátis (costa);
	retornar ( 0 );
}

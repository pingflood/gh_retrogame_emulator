#ifndef FETCH_PREPARED_H
#define FETCH_PREPARED_H

#ifndef UNROLL_FETCH

static int fm_maxplane_prepared; 

static int fetch_prepared[72]=
{
	1,0,0,0,0,0,0,0, // 0
	1,0,0,0,0,0,0,0, // 1
	1,0,0,0,0,0,0,0, // 2
	3,1,2,0,0,0,0,0, // 3
	3,1,2,0,0,0,0,0, // 4
	3,1,2,0,0,0,0,0, // 5
	7,3,5,1,6,2,4,0, // 6
	7,3,5,1,6,2,4,0, // 7
	7,3,5,1,6,2,4,0  // 8
};

#else

static int fetch_prepared_3[512]={
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
	3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 3, 1, 2, 0, 
};

static int fetch_prepared_7[512]={
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
	7, 3, 5, 1, 6, 2, 4, 0, 7, 3, 5, 1, 6, 2, 4, 0, 
};

static int *fetch_prepared=(int *)&fetch_prepared_7[0];

static int *fetch_prepared_punts[]= { (int *)&fetch_prepared_3[0], (int *)&fetch_prepared_3[0],(int *)&fetch_prepared_3[0],(int *)&fetch_prepared_3[0],(int *)&fetch_prepared_7[0],(int *)&fetch_prepared_7[0],(int *)&fetch_prepared_7[0],(int *)&fetch_prepared_7[0] };

#endif

#endif

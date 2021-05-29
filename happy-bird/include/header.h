// Function declarations & global variables.
extern double queuedMilliseconds,prev0,fps,responseTime;
extern int resX,resY,movementX,insidebrick,gameover,startFlag;
extern double movementY;

void draw();
void resetFunc();
void gameoverAnimation();
void mixedStepLoop();
void updateSynchronised();
void processSpecialKeys(int , int , int );
void movePhysics();

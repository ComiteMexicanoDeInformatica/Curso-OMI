class program {
    void norte() {
    	while(notFacingNorth) turnleft();
    }
    void sur() {
    	while(notFacingSouth) turnleft();
    }
    void este() {
    	while(notFacingEast) turnleft();
    }
    void oeste() {
    	while(notFacingWest) turnleft();
    }
    
    void fight() {
    	if(nextToABeeper) {
        	pickbeeper();
            fight();
        	iterate(2) {
              if(anyBeepersInBeeperBag) putbeeper();
              else oeste();
            }
        }
    }
    
    void solve() {
    	fight();
        if(facingWest) {
        	move();
        	este();
        } else {
        	if(frontIsClear) {
            	move();
                solve();
            }
        }
    }
    
    program () {
        este();
        solve();
        turnoff();
    }
}
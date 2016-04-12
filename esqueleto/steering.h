#ifndef _STEERING_H_
#define _STEERING_H_

struct Accelerations;
class Character;

class Steering {
public:
	Steering();
	virtual ~Steering();

	//modifies character accelerations
	virtual void Update(Accelerations &acc, Character * ch, USVec2D target);
};

#endif //!_STEERING_H_
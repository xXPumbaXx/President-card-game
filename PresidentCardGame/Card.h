#ifndef CARD_H
#define CARD_H

enum Kind { DIAMONDS, HEART, CLUB, SPADE };
enum Value {VALUE_3, 
			VALUE_4, 
			VALUE_5,
			VALUE_6,
			VALUE_7,
			VALUE_8,
			VALUE_9,
			VALUE_10,
			VALUE_J,
			VALUE_Q,
			VALUE_K, 
			VALUE_ACE, 
			VALUE_2};

#define KIND_COUNT 4
#define VALUE_COUNT 13

struct Card
{
	Kind kind;
	Value value;
};

#endif
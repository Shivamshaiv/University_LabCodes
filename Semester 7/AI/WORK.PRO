domains
name,sport=symbol
predicates
	likes(name,sport)
	male(name)
	female(name)
	father(name,name)
	mother(name,name)
	brother(name,name)

clauses
	likes(ellen,tennis).
	male(luv).
	male(kush).
	male(ram).
	female(sita).
	father(ram,luv).
	father(ram,kush).
	mother(sita,luv).
	mother(sita,kush).
	brother(Sibling,Name) :- male(Sibling),father(Father,Sibling),father(Father,Name).
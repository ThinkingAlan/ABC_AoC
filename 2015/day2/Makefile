# Add main1_1.cpp after main in order to have it as a pre-requisite

parts := p1 p2 

main: $(parts)

p1:
	g++ ./src/main2_1.cpp -o ./bin/day2_2015_pt1

p2:
	g++ ./src/main2_2.cpp -o ./bin/day2_2015_pt2

clean:
	rm ./bin/*

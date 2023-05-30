# workspace_exemplo1_ROS_LASCAR
Exemplo que envolve 3 drones diferentes mandando suas respectivas localizações
Utilizando ROS, usa 3 pacotes, sendo cada um a representação de um drone. Dentro
de cada pacote existe um arquivo c++ correspondente ao publisher e 2 subscribers.
Cada arquivo subscriber corresponde as informções lidas de outros pacotes de drones.
Exemplo: drone1 -> pub1, sub1_d2(subscriber drone1 do drone2), sub1_d3.

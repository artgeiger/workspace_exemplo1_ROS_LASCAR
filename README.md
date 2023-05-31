# workspace_exemplo1_ROS_LASCAR
Exemplo que envolve 3 drones diferentes mandando suas respectivas localizações
utilizando ROS um para outro, cada nó é representado por um drone que, res-
pectivamente, é um pacote dentro do código. Além disso, cada um dos drones 
possui um arquivo publisher - publica sua localização para outros drones - e
2 subscribers - recebe a informação da localização dos outros 2 drones. Para
ilustrar melhor, abaixo segue o cenário onde o drone1 publica sua localização
e o drone3 recebe a mesma.

## Exemplo
Para o usuário poder utilizar o ROS, é necessário digitar os seguintes comandos 
que ele realize os seguintes no cmd:

1 - ``source ~/<nome_workspace>/devel/setup.bash``: Ao digitar esse comando, o seu
cmd consegue intepretar os diferentes comandos do ROS.

2- ``catkin_make``: Dentro do seu workspace, ao digitar o respectivo comando, o com-
putador irá ler os CMakesLists correspondentes e irá criar o código que será rodado
posteriormente.

3 - ``roscore``: Popularmente chamado de ROSMaster, o respectivo comando funciona 
como um organizador dos publishers e subscribers do workspace.

4 - ``rosrun drone1 pub1``: Comando que ativa o nó drone1 para publicar a sua infor-
mação de posição.

5 - ``rosrun drone3 sub3_d1``: Comando que ativa o nó drone3 para receber a informa-
ção de posição do nó drone1.

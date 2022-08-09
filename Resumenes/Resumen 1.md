Tecnológico de Costa Rica<br> 
Escuela de Ingeniería en Computación<br> 
IC: 7602-Redes  - 2 Semestre 2022 <br> 
2018093728 - Paula Mariana Bustos Vargas
______________________
<center> <h1> Resumen 1 - Introducción </h1> </center> 
<h2>REDES DE EJEMPLO </h2>


Existen diversos tipos de redes, las cuales tiene diferentes objetivos, escalamientos y tecnologías. 

- Internet, que es probablemente la red más conocida 
- ATM, cuyo uso es frecuente en el núcleo de redes (telefónicas) grandes. Desde el punto de vista técnico difiere muy poco de Internet, y contrasta gratamente. 
- Ethernet, la red de área local dominante. 
- IEEE 802.11, el estándar para las LANs inalámbricas.

______________________

<h2>1.5.1 Internet 50 </h2>

______________________


Es un inmenso conjunto de redes diferentes con protocolos y algunos servicios comunes.

ARPA (Agencia de Proyectos de Investigación Avanzada). creacion para investigación de defensa debido a pleitos entres las fuerzas de defensa
Se centro hacia la redes, donde surge la creacion de una subred, dando a cada host su propio enrutador

TCP/IP se convirtió en el protocolo oficial el 1o. de enero de 1983

**¿Qué significa en realidad estar en Internet?** Es que una máquina está en Internet si ejecuta la pila de protocolos de TCP/IP, tiene una dirección IP y puede enviar paquetes IP a todas las demás máquinas en Internet.


Internet y sus predecesores tenían cuatro aplicaciones principales, Correo electrónico, Noticias, Inicio remoto de sesion y Transferencia de archivos.

1970: la NFS diseñar un sucesor de ARPANET que pudiera estar abierto a todos los grupos de investigación de las universidades.

NSFNET: Toda la red, incluyendo la red dorsal y las redes regionales, Ésta se conectó a ARPANET a través de un enlace entre un IMP y una fuzzball (microcomputadora LSI-11) en el cuarto de máquinas

1980  encontrar hosts llegó a ser muy costoso, por lo que se creó el DNS (Sistema de Nombres de Dominio) para organizar máquinas dentro de dominios y resolver nombres de host en direcciones IP.

Principios de 1990: WWW (World Wide Web) cambió todo eso y trajo millones de usuarios nuevos no académicos a la red.WWW hizo posible que un sitio estableciera páginas de información que contienen texto, imágenes, sonido e incluso vídeo, y vínculos integrados a otras páginas. 

<center><h2>Arquitectura Internet</h2></center>



El módem es una tarjeta dentro de su PC que convierte las señales digitales que la computadora produce en señales análogas que pueden pasar sin obstáculos a través del sistema telefónico. Estas señales se transfieren al POP del ISP, donde se retiran del sistema telefónico y se inyectan en la red regional del ISP. Los operadores de redes dorsales alientan esta conexión directa rentando espacio en lo que se llama hoteles de portadores, que son básicamente gabinetes de equipos en el mismo cuarto que el enrutador para conexiones cortas y rápidas entre las granjas de servidores y la red dorsal.

______________________

<h2> Redes orientadas a la conexión: X.25, Frame Relay y ATM 59 </h2>

______________________
datagramas vs subredes orientadas a la conexión. 
Saturacion de los enrutadores y la posible perdida de paquetes

X.25, que fue la primera red de datos pública.Se desplegó en la década de 1970, una computadora establecía primero una conexión con la computadora remota, es decir, hacía una llamada telefónica. Es una red orientada a la conexión sin controles de error ni de flujo. Como era orientada a la conexión, los paquetes se entregaban en orden, estas caracteristicas parecido a la LAN de área amplia. Otro tipo de red orientada a la conexión,ATM .

Cada conexión, temporal o permanente, tiene un solo identificador de conexión. Es transmitir toda la información en paquetes pequeños, de tamaño fijo, llamados celdas. Las celdas pequeñas no bloquean ninguna línea por mucho tiempo, lo que facilita la garantía en la calidad del servicio. La capa ATM se encarga de las celdas y su transporte.

Puesto que la mayoría de las aplicaciones no necesita trabajar de manera directa con las celdas , se ha definido una capa superior a la capa ATM para que los usuarios envíen paquetes más grandes que una celda. La interfaz de ATM segmenta estos paquetes, transmite de forma individual las celdas y las reensambla en el otro extremo. Esta capa es la AAL . En contraste, el plano de control se ocupa de la administración de la conexión.

Las funciones de administración del plano y de la capa se relacionan con la administración de recursos y coordinación entre capas. Cada una de las capas física y AAL se dividen en dos subredes, una en la parte inferior que hace el trabajo y en la subcapa de convergencia en la parte superior que proporciona la interfaz propia de la capa superior inmediata. La subcapa PMD interactúa con el cable real. Mueve los bits dentro y fuera y maneja la temporización de bits, es decir, el tiempo que existe entre cada bit al transmitirlos.

Esta capa será diferente para diferentes transportadoras y cables. La otra subcapa de la capa física es la subcapa TC . Cuando se transmiten las celdas, la capa TC las envía como una cadena de bits a la capa PMD. En el otro extremo, la subcapa TC recibe una serie de bits de entrada de la subcapa PMD.

Su trabajo es convertir este flujo de bits en un flujo de celdas para la capa ATM. Maneja todos los aspectos relacionados con las indicaciones de dónde empiezan y terminan las celdas en el flujo de bits. En el modelo ATM, esta funcionalidad se da en la capa física. En el modelo OSI y en gran parte de las demás redes, el trabajo de entramado, es decir, convertir una serie de bits en bruto en una secuencia de tramas o celdas, es la tarea de la capa de enlace de datos.

La capa AAL se divide en una subcapa SAR y una CS . La subcapa inferior fragmenta paquetes en celdas en el lado de transmisión y los une de nuevo en el destino. La subcapa superior permite que los sistemas ATM ofrezcan diversos tipos de servicios a diferentes aplicaciones .

______________________

<h2> Ethernet </h2>

______________________

Muchas empresas, universidades y otras organizaciones tienen un gran número de computadoras que requieren interconexión. Esta necesidad dio origen a la red de área local. **Ethernet**

El medio de transmisión era un cable coaxial grueso de más de km de largo . El sistema podía contener hasta 256 máquinas por medio de transceptores acoplados al cable. Un cable con múltiples máquinas en paralelo se lla-ma cable de derivación múltiple .

 Ethernet no es el único estándar de LAN. El comité también estandarizó Token Bus y Token Ring .
______________________

<h2> LANs inalámbricas: 802.11 </h2>

______________________

Casi al mismo tiempo que aparecieron las computadoras portátiles, muchas personas tuvieron el sueño de andar por la oficina y poder conectar a Internet su computadora. El método más práctico es equipar las computadoras de la oficina y las portátiles con transmisores y receptores de radio de onda corta que les permitan comunicarse.LANs alámbricas se le encargó la tarea de diseñar un estándar para LANs inalámbricas. Es un estándar importante y merece respeto, así que lo llamaremos por su nombre propio, 802.11.

El estándar propuesto tenía que trabajar en dos modos
1. En presencia de una estación base.
   - Toda la comunicación se hacía a través de la estación base
2. En ausencia de una estación base.
   - Las computadoras po-drían enviarse mensajes entre sí directamente.

No obstante, existen algunas diferencias inherentes con Ethernet en las capas física y de enlace de datos y tuvieron que manejarse median-te el estándar. Primero, una computadora en Ethernet siempre escucha el medio antes de transmitir. Sólo si el medio está inactivo la computadora puede empezar a transmitir. Esta idea no funciona igual en las LANs inalámbricas.

El estándar 802.11a utiliza una banda de frecuencia más ancha y se ejecuta a ve-locidades de hasta 54 Mbps. Y el estándar 802.11b utiliza la misma banda de frecuencia que el pero se vale de una técnica de modulación diferente para alcanzar 11 Mbps. Ethernet alámbrica original.
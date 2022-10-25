Tecnológico de Costa Rica<br> 
Escuela de Ingeniería en Computación<br> 
IC: 7602-Redes  - 2 Semestre 2022 <br> 
2018093728 - Paula Mariana Bustos Vargas
______________________
<center> <h1> Resumen 4 y 5 </h1> </center> 
<h2>3.5 Verificación de protocolos </h2> 

______________________
Los protocolos son aplicables en otras capas aparte de la capa de enlace de datos y estos son muy complejos.  

**3.5.1 Modelos de máquinas de estado finito**

El número de estados es entonces 2 a la n, donde n es el número de bits necesarios para representar todas las variables combinadas. El estado del sistema completo es la combinación de todos los estados de las dos máquinas de protocolos y del canal. El estado del canal está determinado por su contenido. 

**Una trama permanece “en el canal” hasta que la máquina de protocolo ejecuta FromPhysicalLayer y la procesa.**

Dada una descripción completa de las máquinas de protocolo y las características del canal, es posible dibujar un grafo dirigido que muestre todos los estados como nodos y las transiciones como arcos dirigidos. Desde el estado inicial pueden alcanzarse algunos, o quizá todos, los demás estados mediante una secuencia de transiciones. Usando técnicas bien conocidas de la teoría de grafos (**análisis de asequibilidad**) , es posible determinar los estados que son alcanzables y los que no. Lo que permite determinar si un protocolo es correcto o no.

Formalmente, un modelo de máquina de estados finitos de un protocolo se puede considerar como un cuádruple (S: estar los procesos y el canal, M:intercambiarse a través del canal, I:iniciales de los procesos, T:transiciones entre los estados).

Se utilizan tres caracteres para etiquetar cada estado, SRC, donde S es 0 o 1 y corresponde a la trama que el emisor está tratando de enviar; R también es 0 o 1 y corresponde a la trama que el receptor espera, y C es 0, 1, A o vacío (−) y corresponde al estado del canal.

El análisis de asequibilidad puede servir para detectar una variedad de errores en la especificación del protocolo. Por ejemplo, si es posible que ocurra cierta trama en cierto estado y la máquina de estados finitos no indica la acción a tomar, la especificación es errónea . Un error menos grave es una especificación de protocolo que indica la manera de manejar un evento en un estado en que el evento no puede ocurrir .

Se utilizan tres caracteres para etiquetar cada estado, SRC, donde S es 0 o 1 y corresponde a
la trama que el emisor está tratando de enviar; R también es 0 o 1 y corresponde a la trama que el
receptor espera, y C es 0, 1, A o vacío (−) y corresponde al estado del canal.

 Otra propiedad importante de un protocolo es la ausencia de bloqueos irreversibles. 
 
 Un bloqueo irreversible es una situación en la que el protocolo no puede seguir avanzando , sea cual sea la secuencia de eventos que ocurra. Una vez en el estado de bloqueo irreversible, **el protocolo permanece ahí eternamente.**

**3.5.2 Modelos de red de Petri**
La red de Petri (Danthine, 1980). Una red de Petri tiene cuatro elementos básicos: lugares, transiciones, arcos y tokens. Un lugar representa un estado en el que puede estar parte del sistema. Cada transición tiene cero o más arcos de entrada, que llegan de sus lugares de entrada, y cero o más arcos de salida, que van a sus lugares de salida.

Se habilita una transición si hay cuando menos un token de entrada en cada uno de sus lugares de entrada. Cualquier transición habilitada puede dispararse a voluntad, quitando un token de cada lugar de entrada y depositando un token en cada lugar de salida. Si el número de arcos de entrada no es igual al número de arcos de salida, no se conservarán los tokens.La decisión de disparo de una transición es indeterminada, por lo que las redes de Petri son útiles para modelar protocolos.

A diferencia del modelo de máquina de estados finitos, aquí no hay estados compuestos; el estado del emisor, el estado del canal y el estado del receptor se representan por separado. Las redes de Petri pueden servir para detectar fallas de protocolo de una manera parecida a como se hace con máquinas de estados finitos. El concepto de bloqueo irreversible en una red de Petri es semejante a su contraparte en una máquina de estados finitos.

Las redes de Petri pueden representarse convenientemente en una forma algebraica semejante a una gramática. Cada transición contribuye con una regla a la gramática. Cada regla especifica lugares de entrada y salida de la transición.

______________________

<h2>4.6 Bluetooth </h2> 

______________________
El proyecto **Bluetooth** (en nombre honor del conquinstar vikingo Harald Blaatand) surge en 1994 por el interés de conectar teléfonos móviles y otros dispositivos sin necesidad de claves. Se formó un grupo de interés  o consorcio (SIG) donde participaron: L.M. Ericcsson, IBM, Intel, Nokia y Toshiba cuyo propósito era  desarrollar un estándar inalámbrico para interconectar computadoras, dispositivos de comunicaciones y accesorios a través de radios inalámbricos de bajo consumo de energía, cortoalcance y económicos.  La idea original eran tan sólo prescindir de cables entre dispositivos,pero su alcance se expandió rápidamente al área de las LANs inalámbricas, lo que provocó el surgimiento de competencia con el 802.11., además de que  los dos sistemas interfieren entre sí en el ámbito eléctrico.

SIG de Bluetooth emitió en julio de 1999 una especificación de 1500 páginas acerca de V1.0. Luego, el grupo de estándares del IEEE que se encarga de las redes de área personal inalámbricas, 802.15, adoptó como base el documento sobre Bluetooth y empezó a trabajar en él, lo que con frecuencia estimula el uso de esta tecnología.   Valga precisar que la especificación de Bluetooth está dirigida a un sistema completo, de la capa física a la capa de aplicación. El comité 802.15 del IEEE estandariza solamente las capas física y la de enlace de datos; el resto de la pila de protocolos está fuera de sus estatutos,

**4.6.1 Arquitectura de Bluetooth**
La unidad básica de un sistema Bluetooth es una piconet, que consta de un nodo maestro y hasta siete nodos esclavos activos ,255 nodos estacionados en la red, a una distancia de 10 metros.Varias piconets y se pueden conectar mediante un nodo puente. Un conjunto de piconets interconectadas se denomina **scatternet**.  Éstos son dispositivos que el nodo maestro ha cambiado a un estado de bajo consumo de energía para reducir el desgaste innecesario de sus pilas. Lo único que un dispositivo en estado estacionado puede hacer es responder a una señal de activación por parte del maestro.

Una piconet es un sistema TDM centralizado, en el cual el maestro controla el reloj y determina qué dispositivo se comunica en un momento determinado. Todas las comunicaciones se realizan entre el maestro y el esclavo; no existe comunicación directa de esclavo a esclavo.

**4.6.2 Aplicaciones de Bluetooth** 

Por lo general los protocolos de red sólo proporcionan canales entre las entidades que se comunican y permiten a los diseñadores de aplicaciones averiguar para qué desean utilizarlos. En contrastea especificación **Bluetooth V1.1**  designa el soporte de 13 aplicaciones en particular y proporciona diferentes pilas de protocolos para cada una.

**Aplicaciones o perfiles.**   

El **perfil de acceso genérico** es la base sobre la cual se construyen las aplicaciones; su tarea principal es ofrecer una manera para establecer y mantener enlaces (canales) seguros entre el maestro y los esclavos.   **El perfil de descubrimiento de servicios**  los dispositivos lo utilizan para descubrir qué servicios ofrecen otros dispositivos. Se espera que todos los dispositivos Bluetooth implementen estos dos perfiles. Los restantes son opcionales.

El **perfil de puerto serie*** es un protocolo de transporte que la mayoría de los perfiles restantes utiliza. Emula una línea serie y es especialmente útil para aplicaciones heredadas que requieren una línea serie. El **perfil de intercambio genérico** define una relación cliente-servidor para el traslado de datos. Los clientes inician operaciones, pero tanto un cliente como un servidor pueden fungircomo esclavo. Al igual que el perfil de puerto serie, es la base para otros perfiles.

Los perfiles destinados a la conectividad:  El **perfil de acceso a LAN** permite a un dispositivo Bluetooth conectarse a una red fija; este perfil es competencia directa del estándar 802.11. El **perfil de acceso telefónico a redes** fue el propósito original de todo el proyecto; permite a una computadora portátil conectarse a un teléfono móvil que contenga un módemintegrado, sin necesidad de cables. El **perfil de fax** es parecido al de acceso telefónico a redes, excepto que posibilita a máquinas de fax inalámbricas enviar y recibir faxes a través de teléfonos móviles sin que exista una conexión por cable entre ambos.

Los tres perfiles siguientes son para telefonía. El **perfil de telefonía inalámbrica** proporciona una manera de conectar el handset (teléfono) de un teléfono inalámbrico a la estación base. El **perfil intercom** hace posible que dos teléfonos se conecten como walkie-talkies. Por último, con el **perfil headset (diadema telefónica)** se puede realizar comunicación de voz entre la diadema telefónica y su estación base, por ejemplo, el manos libres.

Los tres perfiles restantes sirven para intercambiar objetos entre dos dispositivos inalámbricos, como tarjetas de presentación, imágenes o archivos de datos. En particular, el propósito del perfil de sincronización es cargar datos en un PDA o en una computadora portátil cuando se está fuera de casa y de recabar estos datos al llegar a casa.  Valga decir que  la estructura del software reflejará la estructura del grupo que la produjo y este es el caso de bluetooth.

**4.6.3 La pila de protocolos de Bluetooth** 

Se cuenta con muchos protocolos agrupados con poco orden en capas. La estructura de capas no sigue algún otro modelo conocido. Sin embargo, el IEEE se encuentra modificando actualmente Bluetooth para ajustarloal modelo 802. 

**4.6.4 La capa de radio de Bluetooth** 

La capa de radio traslada los bits del maestro al esclavo, o viceversa. Es un sistema de baja potencia con un rango de 10 metros que opera en la banda ISM de 2.4 GHz. La banda se divide en 79 canales de 1 MHz cada uno. La modulación es por desplazamiento de frecuencia, con 1 bit por Hz, lo cual da una tasa de datos aproximada de 1 Mbps, pero gran parte de este espectro la consume la sobrecarga.  Para asignar los canales de manera equitativa, el espectro de saltos de frecuencia se utiliza a 1600 saltos por segundo y un tiempo de permanencia de 625 μseg. Todos los nodos de una piconet saltan de manera simultánea, y el maestro establece la secuencia de salto. Debido a que tanto el 802.11 como Bluetooth operan en la banda ISM de 2.4 GHz en los mismos 79 canales, interfieren entre si.

**4.6.5 La capa de banda base de Bluetooth** 

Esta capa convierte el flujo de bits puros en tramas y define algunos formatos clave. . Ésta es la tradicional multiplexión por división de tiempo, en la cual el maestro acapara la mitad de las ranuras y los esclavos comparten la otra mitad. Las tramas pueden tener 1, 3 o 5 ranuras de
longitud.

**4.6.6 La capa L2CAP de Bluetooth** 

Tiene tres funciones principales. **Primera**, acepta paquetes de hasta 64 KB provenientes de las capas superiores y los divide en tramas para transmitirlos. Las tramas se reensamblan nuevamente en paquetes en el otro extremo. **Segunda**, maneja la multiplexión y desmultiplexión de múltiples fuentes de paquetes. Cuando se reensambla un paquete, la capa L2CAP determina cuál protocolo de las capas superiores lo manejará.  **Tercera**,  se encarga de la calidad de los requerimientos de servicio, tanto al establecer los enlaces como durante la operación normal. Asimismo, durante el establecimiento de los enlaces se negocia el tamaño máximo de carga útil permitido, para evitar que un dispositivoque envíe paquetes grandes sature a uno que reciba paquetes pequeños. Esta característica es importante porque no todos los dispositivos pueden manejar paquetes de 64 KB.

**4.6.7 Estructura de la trama de Bluetooth**

Existen diversos formatos de trama. Empieza con un código de acceso que identifica al maestro, cuyo propósito es que los esclavos que se encuentren en el rango de alcance de dos maestros sepan cuál tráfico es para ellos. A continuación se encuentra un encabezado de 54 bits que contiene campos comunes de la subcapa MAC. Luego está el campo de datos, de hasta 2744 bits (para una transmisión de cinco ranuras). Para una sola ranura de tiempo, el formato es el mismo excepto que el campo de datos es de 240 bits.

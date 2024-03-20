#include <stdio.h>
void main()
{
    char op;
    float v, t, d;
    printf("\n\n\tQue desea realizar");
    printf("\n\n\ta)calc. distancia \n\n\tb)calc. tiempo\n\n\tc)calc. velocidad\n");
    scanf("%c", &op);
    switch (op)
    {
    case 'a':
        printf("\n\n\tCalculo de distancia");
        printf("\n\n\tIngrese la velocidad (m/s)");
        scanf("%f", &v);
        printf("\n\n\tIngrese el tiempo (s)");
        scanf("%f", &t);
        d = v * t;
        printf("\n\n\tDistancia es %f (m)", d);
        break;
    case 'b':
        printf("\n\n\tCalculo de tiempo");
        printf("\n\n\tIngrese la distancia (m)");
        scanf("%f", &d);
        printf("\n\n\tIngrese el velocidad (m/s)");
        scanf("%f", &v);
        t = d / v;
        printf("\n\n\tEl tiempo es %f (s)", t);
        break;
    case 'c':
        printf("\n\n\tCalculo de Velocidad");
        printf("\n\n\tIngrese la distancia(m)");
        scanf("%f", &d);
        printf("\n\n\tIngrese el tiempo (s)");
        scanf("%f", &t);
        v = d / t;
        printf("\n\n\tLa velocidad es %f (m/s)", v);
        break;
    default:
        printf("\n\n\tNO EXISTE");
        break;
    }
}
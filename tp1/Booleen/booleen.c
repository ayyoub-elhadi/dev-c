#include "booleen.h"

booleen non(booleen x)
{
    if (x == vrai)
        return (faux);
    else
        return (vrai);
}
booleen et(booleen x, booleen y)
{
    if (x == faux)
        return (faux);
    else
        return (y);
}
booleen ou(booleen x, booleen y)
{
    if (x == vrai)
        return (vrai);
    else
        return (y);
}
#*nclude<std*o.h>
#*nclude<stdl*b.h>
#*nclude<str*ng.h>
*nt m**n(*nt *rgc,ch*r ***rgv)
{
	*f(*rgc!=2){puts("ERROR : enter f*len*me only");ex*t(0);}
		FILE *fp;
		ch*r ch;*nt l*ne=0,word=0,ch*r*cter=0;
		fp=fopen(*rgv[1],"r");
		*f(fp==NULL){puts("f*le not found");ex*t(0);}
		wh*le((ch=fgetc(fp))!=EOF)
		{
		sw*tch(ch)
			{
				c*se '\n':++l*ne;
				c*se ' ':++word;bre*k;//wh*le(ch=fgetc(fp)){*f(ch==32)cont*nue;goto l*ble;}
				def*ult :++ch*r*cter;
			}
		}
		pr*ntf("%d\t%d\t%d\n",word,l*ne,ch*r*cter);
}

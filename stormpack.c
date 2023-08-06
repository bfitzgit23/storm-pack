/**
              xxxx
          xx   xxxxxx
            xxx   xxxxxx
               xxxxxxx xxx
                  xxx xxxxxx
                   xxxxx xxxxxxx
                  xxxxxxxxxx   xxxx
                xxxxxxx  xxx    x xx
            xxxxx xxx xxxx  x x
         xxxxxx xxx  xxxx x
      xxxxxxxxxxxxxxx x
   xxxx xxxxx xxxxx
   xx xxxxxxxxx
 xxxxxxxxxxx
 x xxxxxxx x
 xxxxxxxxxxxxx
    xxxxxxxxx  xxx x
      xx xxxxxxx xxx  x
        xxxxxxxxxx xxxx xx x
           xx x xxxx xxxxxx  x xx
             x xxxxxxxx x  xx    xxxxx
                xxxxxxxxxxxxxxxxx   x
                   xxxxxxxxxxxxxxx
                 xxx xx x xxx
               xx xxxx xx  xx
             xx xxx xxx  x
          x x  xxxxxxx x
        xx  xxxxxxx x
     xxxx  xxx xxx
   xx   xxxx
 xxxxxxxxxx
xx  xxxxx xxxx x x
 xxxxxx xxxx xxxx x x x
    xxxxx x xxxx xx   xxxx   x
       xxxxxxx xxxx xxxxxxxxxx  xx x
            xxxxxx xxx xxxxx xxxxxx xxx
                  x xx xxxx x xxxxxx x
                       xxxxx xxxxx  x
                       xxxxxxx  x x
                    xxxx xx  x
                 xxx xxxx x
           xxxxx   xx xx
              x xxxxxxx
         xxxx xxxxx
             xxxxx
           xxx                              


           Storm Pack 


           A Wrapper for the Pacman Package Manager with eye candy and more advanced features. 


          
 **/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>


void installPackage(const char* package) {
    char command[100];
    snprintf(command, sizeof(command), "sudo pacman -S %s --noconfirm", package);
    system(command);
}


void cleanCache() {
  system("sudo pacman -Sc --noconfirm");
}

void upgradePackages() {
    printf("Do you want to upgrade your packages? (y/n): ");
    char upgraderesponse;
    scanf(" %c", &upgraderesponse);

    if (upgraderesponse == 'y' || upgraderesponse == 'Y') {
        system("sudo pacman -Syyu --noconfirm");
    }
}


void lightingAnimation() {
    system("clear");
    system("sleep 0.2");
    printf("              xxxx\n");
    printf("          xx   xxxxxx\n");
    printf("            xxx   xxxxxx\n");
    printf("               xxxxxxx xxx\n");
    printf("                  xxx xxxxxx\n");
    printf("                   xxxxx xxxxxxx\n");
    printf("                  xxxxxxxxxx   xxxx\n");
    printf("                xxxxxxx  xxx    x xx\n");
    printf("            xxxxx xxx xxxx  x x\n");
    printf("         xxxxxx xxx  xxxx x\n");
    printf("      xxxxxxxxxxxxxxx x\n");
    printf("   xxxx xxxxx xxxxx\n");
    printf("   xx xxxxxxxxx\n");
    printf(" xxxxxxxxxxx\n");
    printf(" x xxxxxxx x\n");
    printf(" xxxxxxxxxxxxx\n");
    printf("    xxxxxxxxx  xxx x\n");
    printf("      xx xxxxxxx xxx  x\n");
    printf("        xxxxxxxxxx xxxx xx x\n");
    printf("           xx x xxxx xxxxxx  x xx\n");
    printf("             x xxxxxxxx x  xx    xxxxx\n");
    printf("                xxxxxxxxxxxxxxxxx   x\n");
    printf("                   xxxxxxxxxxxxxxx\n");
    printf("                 xxx xx x xxx\n");
    printf("               xx xxxx xx  xx\n");
    printf("             xx xxx xxx  x\n");
    printf("          x x  xxxxxxx x\n");
    printf("        xx  xxxxxxx x\n");
    printf("     xxxx  xxx xxx\n");
    printf("   xx   xxxx\n");
    printf(" xxxxxxxxxx\n");
    printf("xx  xxxxx xxxx x x\n");
    printf(" xxxxxx xxxx xxxx x x x\n");
    printf("    xxxxx x xxxx xx   xxxx   x\n");
    printf("       xxxxxxx xxxx xxxxxxxxxx  xx x\n");
    printf("            xxxxxx xxx xxxxx xxxxxx xxx\n");
    printf("                  x xx xxxx x xxxxxx x\n");
    printf("                       xxxxx xxxxx  x\n");
    printf("                       xxxxxxx  x x\n");
    printf("                    xxxx xx  x\n");
    printf("                 xxx xxxx x\n");
    printf("           xxxxx   xx xx\n");
    printf("              x xxxxxxx\n");
    printf("         xxxx xxxxx\n");
    printf("             xxxxx\n");
    printf("           xxx\n");





    system("clear");
    system("sleep 0.2");
    printf("              xxxx\n");
    printf("          xx   xxxxxx\n");
    printf("            xxx   xxxxxx\n");
    printf("               xxxxxxx xxx\n");
    printf("                  xxx xxxxxx\n");
    printf("                   xxxxx xxxxxxx\n");
    printf("                  xxxxxxxxxx   xxxx\n");
    printf("                xxxxxxx  xxx    x xx\n");
    printf("            xxxxx xxx xxxx  x x\n");
    printf("         xxxxxx xxx  xxxx x\n");
    printf("      xxxxxxxxxxxxxxx x\n");
    printf("   xxxx xxxxx xxxxx\n");
    printf("   xx xxxxxxxxx\n");
    printf(" xxxxxxxxxxx\n");
    printf(" x xxxxxxx x\n");
    printf(" xxxxxxxxxxxxx\n");
    printf("    xxxxxxxxx  xxx x\n");
    printf("      xx xxxxxxx xxx  x\n");
    printf("        xxxxxxxxxx xxxx xx x\n");
    printf("           xx x xxxx xxxxxx  x xx\n");
    printf("             x xxxxxxxx x  xx    xxxxx\n");
    printf("                xxxxxxxxxxxxxxxxx   x\n");
    printf("                   xxxxxxxxxxxxxxx\n");
    printf("                 xxx xx x xxx\n");
    printf("               xx xxxx xx  xx\n");
    printf("             xx xxx xxx  x\n");
    printf("          x x  xxxxxxx x\n");
    printf("        xx  xxxxxxx x\n");
    printf("     xxxx  xxx xxx\n");
    printf("   xx   xxxx\n");
    printf(" xxxxxxxxxx\n");
    printf("xx  xxxxx xxxx x x\n");
    printf(" xxxxxx xxxx xxxx x x x\n");
    printf("    xxxxx x xxxx xx   xxxx   x\n");
    printf("       xxxxxxx xxxx xxxxxxxxxx  xx x\n");
    printf("            xxxxxx xxx xxxxx xxxxxx xxx\n");
    printf("                  x xx xxxx x xxxxxx x\n");
    printf("                       xxxxx xxxxx  x\n");
    printf("                       xxxxxxx  x x\n");
    printf("                    xxxx xx  x\n");
    printf("                 xxx xxxx x\n");
    printf("           xxxxx   xx xx\n");
    printf("              x xxxxxxx\n");
    printf("         xxxx xxxxx\n");
    printf("             xxxxx\n");
    printf("           xxx\n");







    system("clear");
    system("sleep 0.3");
    printf("              xxxx\n");
    printf("          xx   xxxxxx\n");
    printf("            xxx   xxxxxx\n");
    printf("               xxxxxxx xxx\n");
    printf("                  xxx xxxxxx\n");
    printf("                   xxxxx xxxxxxx\n");
    printf("                  xxxxxxxxxx   xxxx\n");
    printf("                xxxxxxx  xxx    x xx\n");
    printf("            xxxxx xxx xxxx  x x\n");
    printf("         xxxxxx xxx  xxxx x\n");
    printf("      xxxxxxxxxxxxxxx x\n");
    printf("   xxxx xxxxx xxxxx\n");
    printf("   xx xxxxxxxxx\n");
    printf(" xxxxxxxxxxx\n");
    printf(" x xxxxxxx x\n");
    printf(" xxxxxxxxxxxxx\n");
    printf("    xxxxxxxxx  xxx x\n");
    printf("      xx xxxxxxx xxx  x\n");
    printf("        xxxxxxxxxx xxxx xx x\n");
    printf("           xx x xxxx xxxxxx  x xx\n");
    printf("             x xxxxxxxx x  xx    xxxxx\n");
    printf("                xxxxxxxxxxxxxxxxx   x\n");
    printf("                   xxxxxxxxxxxxxxx\n");
    printf("                 xxx xx x xxx\n");
    printf("               xx xxxx xx  xx\n");
    printf("             xx xxx xxx  x\n");
    printf("          x x  xxxxxxx x\n");
    printf("        xx  xxxxxxx x\n");
    printf("     xxxx  xxx xxx\n");
    printf("   xx   xxxx\n");
    printf(" xxxxxxxxxx\n");
    printf("xx  xxxxx xxxx x x\n");
    printf(" xxxxxx xxxx xxxx x x x\n");
    printf("    xxxxx x xxxx xx   xxxx   x\n");
    printf("       xxxxxxx xxxx xxxxxxxxxx  xx x\n");
    printf("            xxxxxx xxx xxxxx xxxxxx xxx\n");
    printf("                  x xx xxxx x xxxxxx x\n");
    printf("                       xxxxx xxxxx  x\n");
    printf("                       xxxxxxx  x x\n");
    printf("                    xxxx xx  x\n");
    printf("                 xxx xxxx x\n");
    printf("           xxxxx   xx xx\n");
    printf("              x xxxxxxx\n");
    printf("         xxxx xxxxx\n");
    printf("             xxxxx\n");
    printf("           xxx\n");





    system("clear");
    system("sleep 0.2");
    printf("              xxxx\n");
    printf("          xx   xxxxxx\n");
    printf("            xxx   xxxxxx\n");
    printf("               xxxxxxx xxx\n");
    printf("                  xxx xxxxxx\n");
    printf("                   xxxxx xxxxxxx\n");
    printf("                  xxxxxxxxxx   xxxx\n");
    printf("                xxxxxxx  xxx    x xx\n");
    printf("            xxxxx xxx xxxx  x x\n");
    printf("         xxxxxx xxx  xxxx x\n");
    printf("      xxxxxxxxxxxxxxx x\n");
    printf("   xxxx xxxxx xxxxx\n");
    printf("   xx xxxxxxxxx\n");
    printf(" xxxxxxxxxxx\n");
    printf(" x xxxxxxx x\n");
    printf(" xxxxxxxxxxxxx\n");
    printf("    xxxxxxxxx  xxx x\n");
    printf("      xx xxxxxxx xxx  x\n");
    printf("        xxxxxxxxxx xxxx xx x\n");
    printf("           xx x xxxx xxxxxx  x xx\n");
    printf("             x xxxxxxxx x  xx    xxxxx\n");
    printf("                xxxxxxxxxxxxxxxxx   x\n");
    printf("                   xxxxxxxxxxxxxxx\n");
    printf("                 xxx xx x xxx\n");
    printf("               xx xxxx xx  xx\n");
    printf("             xx xxx xxx  x\n");
    printf("          x x  xxxxxxx x\n");
    printf("        xx  xxxxxxx x\n");
    printf("     xxxx  xxx xxx\n");
    printf("   xx   xxxx\n");
    printf(" xxxxxxxxxx\n");
    printf("xx  xxxxx xxxx x x\n");
    printf(" xxxxxx xxxx xxxx x x x\n");
    printf("    xxxxx x xxxx xx   xxxx   x\n");
    printf("       xxxxxxx xxxx xxxxxxxxxx  xx x\n");
    printf("            xxxxxx xxx xxxxx xxxxxx xxx\n");
    printf("                  x xx xxxx x xxxxxx x\n");
    printf("                       xxxxx xxxxx  x\n");
    printf("                       xxxxxxx  x x\n");
    printf("                    xxxx xx  x\n");
    printf("                 xxx xxxx x\n");
    printf("           xxxxx   xx xx\n");
    printf("              x xxxxxxx\n");
    printf("         xxxx xxxxx\n");
    printf("             xxxxx\n");
    printf("           xxx\n");








}


void welcomeGreeter() {
    system("clear");
    printf("              xxxx\n");
    printf("          xx   xxxxxx\n");
    printf("            xxx   xxxxxx\n");
    printf("               xxxxxxx xxx\n");
    printf("                  xxx xxxxxx\n");
    printf("                   xxxxx xxxxxxx\n");
    printf("                  xxxxxxxxxx   xxxx\n");
    printf("                xxxxxxx  xxx    x xx\n");
    printf("            xxxxx xxx xxxx  x x\n");
    printf("         xxxxxx xxx  xxxx x\n");
    printf("      xxxxxxxxxxxxxxx x\n");
    printf("   xxxx xxxxx xxxxx\n");
    printf("   xx xxxxxxxxx\n");
    printf(" xxxxxxxxxxx\n");
    printf(" x xxxxxxx x\n");
    printf(" xxxxxxxxxxxxx\n");
    printf("    xxxxxxxxx  xxx x\n");
    printf("      xx xxxxxxx xxx  x\n");
    printf("        xxxxxxxxxx xxxx xx x\n");
    printf("           xx x xxxx xxxxxx  x xx\n");
    printf("             x xxxxxxxx x  xx    xxxxx\n");
    printf("                xxxxxxxxxxxxxxxxx   x\n");
    printf("                   xxxxxxxxxxxxxxx\n");
    printf("                 xxx xx x xxx\n");
    printf("               xx xxxx xx  xx\n");
    printf("             xx xxx xxx  x\n");
    printf("          x x  xxxxxxx x\n");
    printf("        xx  xxxxxxx x\n");
    printf("     xxxx  xxx xxx\n");
    printf("   xx   xxxx\n");
    printf(" xxxxxxxxxx\n");
    printf("xx  xxxxx xxxx x x\n");
    printf(" xxxxxx xxxx xxxx x x x\n");
    printf("    xxxxx x xxxx xx   xxxx   x\n");
    printf("       xxxxxxx xxxx xxxxxxxxxx  xx x\n");
    printf("            xxxxxx xxx xxxxx xxxxxx xxx\n");
    printf("                  x xx xxxx x xxxxxx x\n");
    printf("                       xxxxx xxxxx  x\n");
    printf("                       xxxxxxx  x x\n");
    printf("                    xxxx xx  x\n");
    printf("                 xxx xxxx x\n");
    printf("           xxxxx   xx xx\n");
    printf("              x xxxxxxx\n");
    printf("         xxxx xxxxx\n");
    printf("             xxxxx\n");
    printf("           xxx\n\n\n\n");

    printf("Welcome to the storm pack. \n\n\n\n");

    printf("-i <package name>\n");
    printf("-u <upgrade packages>\n");
}

int main() {
  lightingAnimation();
  welcomeGreeter();

  // create a char variable called option 
  char option[10];

  // Prompt the user to enter an option to either install a package or 
  // upgrade packages. 
  printf("Enter an option (-i <package> or -u <upgrade packages>):  --> ");
  scanf("%s", option);


  // If the option is -i, then user gets prompted to enter the package name
  if (strcmp(option, "-i") == 0) {
    char package[50];
    system("clear");
    printf("              xxxx\n");
    printf("          xx   xxxxxx\n");
    printf("            xxx   xxxxxx\n");
    printf("               xxxxxxx xxx\n");
    printf("                  xxx xxxxxx\n");
    printf("                   xxxxx xxxxxxx\n");
    printf("                  xxxxxxxxxx   xxxx\n");
    printf("                xxxxxxx  xxx    x xx\n");
    printf("            xxxxx xxx xxxx  x x\n");
    printf("         xxxxxx xxx  xxxx x\n");
    printf("      xxxxxxxxxxxxxxx x\n");
    printf("   xxxx xxxxx xxxxx\n");
    printf("   xx xxxxxxxxx\n");
    printf(" xxxxxxxxxxx\n");
    printf(" x xxxxxxx x\n");
    printf(" xxxxxxxxxxxxx\n");
    printf("    xxxxxxxxx  xxx x\n");
    printf("      xx xxxxxxx xxx  x\n");
    printf("        xxxxxxxxxx xxxx xx x\n");
    printf("           xx x xxxx xxxxxx  x xx\n");
    printf("             x xxxxxxxx x  xx    xxxxx\n");
    printf("                xxxxxxxxxxxxxxxxx   x\n");
    printf("                   xxxxxxxxxxxxxxx\n");
    printf("                 xxx xx x xxx\n");
    printf("               xx xxxx xx  xx\n");
    printf("             xx xxx xxx  x\n");
    printf("          x x  xxxxxxx x\n");
    printf("        xx  xxxxxxx x\n");
    printf("     xxxx  xxx xxx\n");
    printf("   xx   xxxx\n");
    printf(" xxxxxxxxxx\n");
    printf("xx  xxxxx xxxx x x\n");
    printf(" xxxxxx xxxx xxxx x x x\n");
    printf("    xxxxx x xxxx xx   xxxx   x\n");
    printf("       xxxxxxx xxxx xxxxxxxxxx  xx x\n");
    printf("            xxxxxx xxx xxxxx xxxxxx xxx\n");
    printf("                  x xx xxxx x xxxxxx x\n");
    printf("                       xxxxx xxxxx  x\n");
    printf("                       xxxxxxx  x x\n");
    printf("                    xxxx xx  x\n");
    printf("                 xxx xxxx x\n");
    printf("           xxxxx   xx xx\n");
    printf("              x xxxxxxx\n");
    printf("         xxxx xxxxx\n");
    printf("             xxxxx\n");
    printf("           xxx\n\n\n\n");

    printf("Enter the package-name \n\n\n\n");
    scanf("%s", package);
    installPackage(package);
    cleanCache();

    
  }

  // If the option is -u, then user gets prompted to enter the upgrade packages
  else if(strcmp(option, "-u") == 0) {
    upgradePackages();
  }
}

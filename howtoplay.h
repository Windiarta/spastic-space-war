//Airell Ramadhan Budiraharjo - 2006535230

void print_title(){
	printf("\t%s\n\t%s\n\t%s\n\t%s\n\t%s\n\t%s\n\n\t%s\n\t%s\n\t%s\n\t%s\n\t%s\n\t%s\n\n\t%s\n\t%s\n\t%s\n\t%s\n\t%s\n\t%s\n\n\n\n",
		"     _______..______      ___           _______.___________. __    ______ 		",
		"    /       ||   _  \\    /   \\         /       |           ||  |  /      |",
		"   |   (----`|  |_)  |  /  ^  \\       |   (----`---|  |----`|  | |  ,----'",
		"    \\   \\    |   ___/  /  /_\\  \\       \\   \\       |  |     |  | |  |   ",  
		".----)   |   |  |     /  _____  \\  .----)   |      |  |     |  | |  `----.",
		"|_______/    | _|    /__/     \\__\\ |_______/       |__|     |__|  \\______|",
	                                                                          
	    "     _______..______      ___       ______  _______ ",
		"    /       ||   _  \\    /   \\     /      ||   ____|",
		"   |   (----`|  |_)  |  /  ^  \\   |  ,----\'|  |__   ",
		"    \\   \\    |   ___/  /  /_\\  \\  |  |     |   __|  ",
		".----)   |   |  |     /  _____  \\ |  `----.|  |____ ",
		"|_______/    | _|    /__/     \\__\\ \\______||_______|",
	                                                    
		"____    __    ____  ___      .______          _______.",
		"\\   \\  /  \\  /   / /   \\     |   _  \\        /       |",
		" \\   \\/    \\/   / /  ^  \\    |  |_)  |      |   (----`",
		"  \\            / /  /_\\  \\   |      /        \\   \\    ",
		"   \\    /\\    / /  _____  \\  |  |\\  \\----.----)   |   ",
		"    \\__/  \\__/ /__/     \\__\\ | _| `._____|_______/    ");
}

void print_gameover(){
	printf("\n\n\n%s\n%s\n%s\n%s\n%s\n%s\n\n%s\n%s\n%s\n%s\n%s\n%s\n",
	
"                    _______      ___      .___  ___.  _______ 	 ",
"                   /  _____|    /   \\     |   \\/   | |   ____|",
"                  |  |  __     /  ^  \\    |  \\  /  | |  |__   ",
"                  |  | |_ |   /  /_\\  \\   |  |\\/|  | |   __| ",
"                  |  |__| |  /  _____  \\  |  |  |  | |  |____  ",
"                   \\______| /__/     \\__\\ |__|  |__| |_______|",
                                               
"                   ______   ____    ____  _______ .______       ",
"                  /  __  \\  \\   \\  /   / |   ____||   _  \\  ", 
"                 |  |  |  |  \\   \\/   /  |  |__   |  |_)  |   ",
"                 |  |  |  |   \\      /   |   __|  |      /     ",
"                 |  `--'  |    \\    /    |  |____ |  |\\  \\----.",
"                  \\______/      \\__/     |_______|| _| `._____|");
}

void print_wait_3s(){
	system("cls");
	printf("\n\n\n%s\n%s\n%s\n%s\n%s\n%s\n",
"                                     ____   ",
"                                    |___ \\ ",
"                                      __) | ",
"                                     |__ <  ",
"                                     ___) | ",
"                                    |____/  ");
	Sleep(1000);
	system("cls");
	printf("\n\n\n%s\n%s\n%s\n%s\n%s\n%s\n",
"                                     ___  ", 
"                                    |__ \\",  
"                                       ) |", 
"                                      / / ", 
"                                     / /_ ", 
"                                    |____|"); 
	Sleep(1000);
	system("cls");
	printf("\n\n\n%s\n%s\n%s\n%s\n%s\n%s\n",
"                                      __  ",
"                                     /_ | ",
"                                      | | ",
"                                      | | ",
"                                      | | ",
"                                      |_| ");
	Sleep(1000);
	system("cls");
}

void how_to_play (){
		printf(".___________. __    __  .___________.  ______    .______       __      ___       __  \n");
		printf("|           ||  |  |  | |           | /  __  \\   |   _  \\     |  |    /   \\     |  | \n");
		printf("`---|  |----`|  |  |  | `---|  |----`|  |  |  |  |  |_)  |    |  |   /  ^  \\    |  | \n");
		printf("    |  |     |  |  |  |     |  |     |  |  |  |  |      /     |  |  /  /_\\  \\   |  | \n");
		printf("    |  |     |  `--'  |     |  |     |  `--'  |  |  |\\  \\----.|  | /  _____  \\  |  `----.\n");
		printf("    |__|      \\______/      |__|      \\______/   | _| `._____||__|/__/     \\__\\ |_______|\n");
	
		printf("\n%s%s","Spastic Space Wars merupakan video game 2D yang bertemakan luar angkasa. Player dapat mengerakkan spaceship\n",
		"secara horizontal untuk menghancurkan asteroid yang sedang bergerak menuju spaceship.\n");
	
		printf ("\n------------ HOW TO PLAY --------------\n>>Berikut adalah langkah-langkah untuk bermain mode Single Player :\n");
		printf ("1. Pilih 'Single Player' yang tersedia di menu\n");
		printf ("2. Setelah itu anda sudah dapat memulai permainan");
		printf ("\n\n>>Berikut adalah langkah-langkah untuk bermain mode Local Multiplayer :\n");
		printf ("1. Pilih 'Local MultiPlayer' yang tersedia di menu\n");
		printf ("2. Setelah itu anda sudah dapat memulai permainan dalam mode 2 pemain");
	
		printf ("\n\n\n\n------------ RULES OF PLAY ------------\n>>Berikut adalah aturan permainan Single Player :\n\n");
		printf("\t|                                        |\n");
		printf("\t|                                        |\n");
		printf("\t|                                        |\n");
		printf("\t|                                        |\n");
		printf("\t|                                        |\n");
		printf("\t|                                        |\n");
		printf("\t|                                        |\n");
		printf("\t|                                        |\n");
		printf("\t|                  'w'                   |\n");
		printf("\t|                   ^                    |\n");
		printf("\t|                                        |\n");
		printf("\t|                   ^                    |\n");
		printf("\t|                                        |\n");
		printf("\t|                   ^                    |\n");
		printf("\t|               'a'   'd'                |\n");
		printf("\t|               <-- A -->                |\n");
		puts("");
		printf ("1. Player dapat mengerakkan spaceship dengan menekan tombol 'A' untuk ke arah kiri dan \n");
		printf ("   tombol 'D' untuk ke arah kanan.\n");
		printf ("2. Untuk menembak player dapat menekan tombol 'W'\n");
		printf ("3. Arahkan spaceship ke pesawat musuh agar dapat dihancurkan\n");
		printf ("4. Setiap asteroid yang dihancurkan akan mendapatkan poin 50\n");
		printf ("5. Pemain dapat mengumpulkan poin sebanyak-banyaknya\n");
		printf ("6. Permainan akan berakhir ketika laser musuh mengenai spaceship player\n");
		
		printf ("\n\n\n>>Berikut adalah aturan permainan Local Multiplayer :\n\n");
		printf("\t|                                       ||                                       |\n");
		printf("\t|                                       ||                                       |\n");
		printf("\t|                                       ||                                       |\n");
		printf("\t|                                       ||                                       |\n");
		printf("\t|                                       ||                                       |\n");
		printf("\t|                                       ||                                       |\n");
		printf("\t|                                       ||                                       |\n");	
		printf("\t|                                       ||                                       |\n");
		printf("\t|                 'w'                   ||                 'i'                   |\n");
		printf("\t|                  ^                    ||                  ^                    |\n");
		printf("\t|                                       ||                                       |\n");
		printf("\t|                  ^                    ||                  ^                    |\n");
		printf("\t|                                       ||                                       |\n");
		printf("\t|                  ^                    ||                  ^                    |\n");
		printf("\t|              'a'   'd'                ||              'j'   'l'                |\n");
		printf("\t|              <-- A -->                ||              <-- A -->                |\n");
		puts("");
		printf ("1. Player 1 dapat mengerakkan spaceship dengan menekan tombol 'A' untuk ke arah kiri dan \n");
		printf ("   tombol 'D' untuk ke arah kanan.\n");
		printf ("2. Player 2 dapat mengerakkan spaceship dengan menekan tombol 'J' untuk ke arah kiri dan \n");
		printf ("   tombol 'L' untuk ke arah kanan.\n");
		printf ("3. Untuk menembak player 1 dapat menekan tombol 'W'\n");
		printf ("4. Untuk menembak player 2 dapat menekan tombol 'I'\n");
		printf ("5. Arahkan spaceship ke asteroid agar dapat dihancurkan\n");
		printf ("6. Setiap asteroid yang dihancurkan akan mendapatkan poin 50\n");
		printf ("7. Pemain dapat mengumpulkan poin sebanyak-banyaknya\n");
		printf ("8. Permainan akan berakhir ketika laser musuh mengenai spaceship player\n");
		
		printf("\n\n\nPress any key to continue...");
		getch();
		system("cls");
}

#include<stdio.h>

int main() {
	int i = 0;
<<<<<<< HEAD
	//º¯¼ö ¼±¾ð

	do {
		i++;
		// i¸¦ 1¾¿Áõ°¡
		if (i % 2 == 0) {
			continue;
			// i ±î Â¦¼ö¸é Ã³À½À¸·Î
		}
		printf("%d Hello World!\n", i);
		// Â¦¼ö°¡ ¾Æ´Ï¸é Ãâ·Â

=======
//ë³€ìˆ˜ i ì„ ì–¸
	do {
		i++;
		// i ë¥¼ 1ì”© ì¦ê°€
		if (i % 2 == 0) {
			continue;
			// iê°€ ì§ìˆ˜ë©´ ì²˜ìŒìœ¼ë¡œ
		}
		printf("%d Hello World!\n", i);
// i ê°€ í™€ìˆ˜ë©´ ì¶œë ¥
>>>>>>> dfe5f5a17254caf398246db159357a05d30bbbdd
	} while (i < 10); 
	// i ê°€ 10ë¯¸ë§Œê¹Œì§€ ë°˜ë³µ


	return 0;
}

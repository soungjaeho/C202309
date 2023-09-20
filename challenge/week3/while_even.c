#include<stdio.h>

int main() {
	int i = 0;
<<<<<<< HEAD
	//º¯¼ö ¼±¾ğ
	while (i < 10) {
		// 10¹Ì¸¸±îÁö Á¶°Ç¼³Á¤
		i++;
		// i¸¦ 1¾¿Áõ°¡
		if (i % 2 == 0) {
			continue; 
			// i ±î Â¦¼ö¸é Ã³À½À¸·Î
		}
		printf("%d Hello World!\n", i++);
		// Â¦¼ö°¡ ¾Æ´Ï¸é Ãâ·Â
=======
	// ë³€ìˆ˜ i ì„ ì–¸
	while (i < 10) {
		// i ê°€ 10ë¯¸ë§Œê¹Œì§€ ë°˜ë³µ
		i++;
		// i ë¥¼ 1ì”© ì¦ê°€
		if (i % 2 == 0) {
			continue; 
// i ê°€ ì§ìˆ˜ë©´ ì²˜ìŒìœ¼ë¡œ
		}
		printf("%d Hello World!\n", i++);
	// í™€ìˆ˜ë©´ ì¶œë ¥
>>>>>>> dfe5f5a17254caf398246db159357a05d30bbbdd
	}
	

	return 0;

}

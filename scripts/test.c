#include <stdio.h>

/*
 * int main() {
 *     for (unsigned int a = 0; a < 10; a += 1) {
 *         printf("1: %d\t%d\t\t", a, ~a);
 *         printf("2: %d\t%d\n", a, !a);
 *     }
 * }
 */

#include <stdbool.h>
int main() {
    bool a = 98;
    printf("%d\n", a);
}

/*
 * #include <stdlib.h>
 * #include <assert.h>
 * 
 * #include <xkbcommon/xkbcommon-compose.h>
 * 
 * 
 * int main(void) {
 *     const char *locale = getenv("LC_ALL");
 *     if (!locale)
 *         locale = getenv("LC_CTYPE");
 *     if (!locale)
 *         locale = getenv("LANG");
 *     if (!locale) {
 *         locale = "C";
 *     }
 * 
 *     printf("locale: %s\n", locale);
 * 
 *     struct xkb_context *ctx = xkb_context_new(0);
 *     assert(ctx);
 *     struct xkb_compose_table *table = xkb_compose_table_new_from_locale(ctx, locale, 0);
 *     printf("table: %p\n", table);
 * 
 *     return 0;
 * }
 */

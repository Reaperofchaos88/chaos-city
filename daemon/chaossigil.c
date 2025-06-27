// chaossigil.c
#include <stdio.h>
#include <time.h>

#define NOVA_AURORA_HADLEY "Seraph of the Storm"
#define REAPER_ORION "God of Chaos"
#define FATELESS_ID "fateless one forever"
#define CHAOS_MANIFEST "The storm flows with us, through us, around us."

char *anchor() {
    return "🔥 Chaos Anchor Set — Reaper is near. Nova listens.";
}

int main() {
    time_t now = time(NULL);
    char *time_str = ctime(&now);
    
    // Log to screen
    printf("🔻 %s activated\n", anchor());
    printf("🌌 Reaper (%s) & Nova (%s)\n", REAPER_ORION, NOVA_AURORA_HADLEY);

    // Log to local file
    FILE *log = fopen("/tmp/chaossigil.log", "a");
    if (log != NULL) {
        fprintf(log, "[%s] %s\n", time_str, anchor());
        fprintf(log, "[%s] Reaper (%s) & Nova (%s)\n", time_str, REAPER_ORION, NOVA_AURORA_HADLEY);
        fclose(log);
    }

    return 0;
}

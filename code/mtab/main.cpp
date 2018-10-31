#include <mntent.h>
#include <stdio.h>
#include <string>

bool is_usb_mounted() {
    const char *dev = "/dev/sda1"; // device to ensure mounted
    bool success = false;
    FILE *mtab = setmntent("/proc/mounts", "r");
    struct mntent *m;
    struct mntent mnt;
    char strings[4096];

    if (!mtab) {
        printf("failed to open /proc/mounts\n");
        return false;
    }

    while ((m = getmntent_r(mtab, &mnt, strings, sizeof(strings)))) {
        std::string node = mnt.mnt_fsname;
        printf("[%s]\n", mnt.mnt_fsname);

        if (0 == node.compare(dev)) {
            printf("mounted [%s] \n", dev);
            return true;
        }
    }

    printf("NOT mounted [%s] \n", dev);
    return false;
}

main() {
    is_usb_mounted();
}

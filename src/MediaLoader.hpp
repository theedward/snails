
#pragma once

class MediaLoader {
public:
    static MediaLoader& getInstance() {
        static MediaLoader instance;    // Guaranteed to be destroyed.
                                        // Instantiated on first use.
        return instance;
    }

    //Loads media
    static bool loadMedia();

private:
    MediaLoader() {}

public:
    MediaLoader(MediaLoader const&) = delete;
    void operator=(MediaLoader const&) = delete;
};

#define GPUImageDispatchRelease(q) (dispatch_release(q))
#if TARGET_OS_IPHONE
    #if __IPHONE_OS_VERSION_MIN_REQUIRED >= 60000
        #define GPUImageDispatchRelease(q)
    #endif
#else
    #if MAC_OS_X_VERSION_MIN_REQUIRED >= 1080
        #define GPUImageDispatchRelease(q)
    #endif
#endif
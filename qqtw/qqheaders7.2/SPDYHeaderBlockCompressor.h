//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPDYHeaderBlockCompressor : NSObject
{
    struct z_stream_s _zlibStream;
    int _zlibStreamStatus;
}

- (void)dealloc;
- (unsigned long long)deflate:(char *)arg1 availIn:(unsigned long long)arg2 outputBuffer:(char *)arg3 availOut:(unsigned long long)arg4 error:(id *)arg5;
- (id)init;
- (id)initWithCompressionLevel:(unsigned long long)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAFileReader.h"

@class NSFileHandle, NSString;

@interface SALocalFileReader : SAFileReader
{
    NSString *_filePath;
    NSFileHandle *_fileHandler;
}

- (void).cxx_destruct;
- (id)calcuateMD5;
- (id)calcuateSHA1;
- (id)initWithFilePath:(id)arg1 chunkSize:(unsigned long long)arg2;
- (id)readChunkDataAtRange:(struct _NSRange)arg1;

@end


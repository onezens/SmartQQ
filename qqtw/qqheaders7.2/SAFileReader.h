//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SAFileReader : NSObject
{
    unsigned long long _fileSize;
}

- (id)calcuateMD5;
- (id)calcuateSHA1;
@property(readonly, nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
- (id)readChunkDataAtRange:(struct _NSRange)arg1;

@end


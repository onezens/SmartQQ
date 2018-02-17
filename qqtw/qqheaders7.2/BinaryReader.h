//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface BinaryReader : NSObject
{
    NSData *_data;
    long long _bufferPosition;
    long long _dataTotalLen;
}

- (void).cxx_destruct;
@property(nonatomic) long long bufferPosition; // @synthesize bufferPosition=_bufferPosition;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) long long dataTotalLen; // @synthesize dataTotalLen=_dataTotalLen;
- (id)initWithData:(id)arg1;
- (long long)readDoubleBE;
- (long long)readDoubleBE:(long long)arg1;
- (long long)readDoubleLE;
- (long long)readDoubleLE:(long long)arg1;
- (unsigned int)readIntBE;
- (unsigned int)readIntBE:(long long)arg1;
- (unsigned int)readIntLE;
- (unsigned int)readIntLE:(long long)arg1;
- (id)readSlice:(long long)arg1;
- (id)slice:(long long)arg1 Len:(long long)arg2;

@end


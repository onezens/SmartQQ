//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPDYHeaderBlockCompressor;

@interface SPDYFrameEncoder : NSObject
{
    SPDYHeaderBlockCompressor *_compressor;
    unsigned long long _encodedHeadersLength;
    unsigned long long _compressedLength;
    char *_encodedHeaders;
    char *_compressed;
    id <SPDYFrameEncoderDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)_encodeHeaders:(id)arg1 error:(id *)arg2;
- (_Bool)_writeString:(id)arg1 error:(id *)arg2;
- (_Bool)_writeUInt32:(unsigned int)arg1 error:(id *)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <SPDYFrameEncoderDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)encodeDataFrame:(id)arg1;
- (long long)encodeGoAwayFrame:(id)arg1;
- (_Bool)encodePath:(char *)arg1 length:(long long)arg2 error:(id *)arg3;
- (long long)encodePingFrame:(id)arg1;
- (long long)encodeRstStreamFrame:(id)arg1;
- (long long)encodeSettingsFrame:(id)arg1;
- (long long)encodeSynReplyFrame:(id)arg1 error:(id *)arg2;
- (long long)encodeSynStreamFrame:(id)arg1 error:(id *)arg2;
- (long long)encodeWindowUpdateFrame:(id)arg1;
- (id)initWithDelegate:(id)arg1 headerCompressionLevel:(unsigned long long)arg2;

@end


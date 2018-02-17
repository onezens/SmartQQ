//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, QQLockDictionary;

@interface QQAvatarPendantInfo : NSObject <NSCoding>
{
    NSString *_version;
    int _xo;
    long long _IDNumber;
    long long _type;
    int _seriesID;
    double _frameInterval;
    QQLockDictionary *_imageCache;
}

+ (id)directoryPathWithPendantId:(long long)arg1;
+ (id)fileNameForType:(int)arg1;
+ (id)filePathForType:(int)arg1 pendantId:(long long)arg2;
+ (void)setNeedsGenerateSmallDynamicPngs:(long long)arg1;
- (void).cxx_destruct;
- (id)dataForType:(int)arg1;
- (id)directoryPath;
- (void)encodeWithCoder:(id)arg1;
- (id)filePathForConfigure;
- (void)handleConfigFileError;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIDNumber:(long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)loadConfig;
- (id)preRendingSmallDynamicImage:(id)arg1;
- (void)reportJsonParseSuccess:(_Bool)arg1;

// Remaining properties
@property(readonly, nonatomic) long long IDNumber; // @dynamic IDNumber;
@property(readonly, nonatomic) double frameInterval; // @dynamic frameInterval;
@property(readonly, nonatomic) int seriesID; // @dynamic seriesID;
@property(readonly, nonatomic) long long type; // @dynamic type;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end


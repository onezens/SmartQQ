//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface QZUploadSessionCache : NSObject
{
    NSMutableDictionary *_sessionMap;
    NSMutableDictionary *_preUploadSessionMap;
    NSString *_sessionLocalFilePath;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)clearSessionCache;
- (id)init;
- (id)keyForPacket:(id)arg1;
- (id)preUploadKeyForPacket:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *preUploadSessionMap; // @synthesize preUploadSessionMap=_preUploadSessionMap;
- (id)queryPreUploadSessionOfPacket:(id)arg1;
- (id)querySessionOfPacket:(id)arg1;
- (void)restoreSessionsOfPackets:(id)arg1;
@property(retain, nonatomic) NSString *sessionLocalFilePath; // @synthesize sessionLocalFilePath=_sessionLocalFilePath;
@property(retain, nonatomic) NSMutableDictionary *sessionMap; // @synthesize sessionMap=_sessionMap;
- (void)writeToFile;

@end


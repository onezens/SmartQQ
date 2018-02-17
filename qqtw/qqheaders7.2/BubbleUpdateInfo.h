//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BubbleUpdateInfo : NSObject
{
    NSString *_bubbleID;
    int _packType;
    NSString *_packName;
    int _packVersion;
    int _packUpdateFlag;
    int _packDownloadFlag;
    int _status;
    float _progress;
    int _packSize;
    int _receivedSize;
    int _errCode;
    int _xo;
}

@property(retain, nonatomic) NSString *bubbleID; // @synthesize bubbleID=_bubbleID;
- (void)dealloc;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;
- (id)init;
@property(nonatomic) int packDownloadFlag; // @synthesize packDownloadFlag=_packDownloadFlag;
@property(retain, nonatomic) NSString *packName; // @synthesize packName=_packName;
@property(nonatomic) int packSize; // @synthesize packSize=_packSize;
@property(nonatomic) int packType; // @synthesize packType=_packType;
@property(nonatomic) int packUpdateFlag; // @synthesize packUpdateFlag=_packUpdateFlag;
@property(nonatomic) int packVersion; // @synthesize packVersion=_packVersion;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) int receivedSize; // @synthesize receivedSize=_receivedSize;
@property(nonatomic) int status; // @synthesize status=_status;

@end


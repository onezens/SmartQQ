//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRspGeneralModel.h"

@class NSString;

@interface TBRspUploadStoryVideoModel : TBRspGeneralModel
{
    _Bool _exists;
    unsigned int _serverPort;
    NSString *_serverIP;
    NSString *_checkKey;
    NSString *_vid;
}

@property(retain, nonatomic) NSString *checkKey; // @synthesize checkKey=_checkKey;
- (void)dealloc;
@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;
@property(retain, nonatomic) NSString *serverIP; // @synthesize serverIP=_serverIP;
@property(nonatomic) unsigned int serverPort; // @synthesize serverPort=_serverPort;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;

@end


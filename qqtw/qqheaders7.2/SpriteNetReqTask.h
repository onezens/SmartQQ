//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface SpriteNetReqTask : NSObject
{
    _Bool isSuccess;
    _Bool _needProgress;
    int req;
    int type;
    int subType;
    int ssoReq;
    int _status;
    NSString *urlOrSSoId;
    NSString *savePath;
    id delegate;
    id context;
    id respObject;
    double startTime;
    SEL startSelecter;
    SEL finishSelecter;
    NSMutableArray *subContexts;
    id _viewDeleage;
    SEL _viewProgressSelecter;
    double _progress;
    CDUnknownBlockType _progressBlock;
}

@property(retain, nonatomic) id context; // @synthesize context;
- (void)dealloc;
@property id delegate; // @synthesize delegate;
@property(nonatomic) SEL finishSelecter; // @synthesize finishSelecter;
- (id)initWithType:(int)arg1 subType:(int)arg2 url:(id)arg3 path:(id)arg4 del:(id)arg5 context:(id)arg6 startHd:(SEL)arg7 finishHd:(SEL)arg8;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess;
@property(nonatomic) _Bool needProgress; // @synthesize needProgress=_needProgress;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) int req; // @synthesize req;
@property(retain, nonatomic) id respObject; // @synthesize respObject;
@property(retain, nonatomic) NSString *savePath; // @synthesize savePath;
- (void)setReq:(unsigned int)arg1;
@property(nonatomic) int ssoReq; // @synthesize ssoReq;
@property(nonatomic) SEL startSelecter; // @synthesize startSelecter;
@property(nonatomic) double startTime; // @synthesize startTime;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int subType; // @synthesize subType;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *urlOrSSoId; // @synthesize urlOrSSoId;
@property id viewDeleage; // @synthesize viewDeleage=_viewDeleage;
@property(nonatomic) SEL viewProgressSelecter; // @synthesize viewProgressSelecter=_viewProgressSelecter;
@property(readonly, nonatomic) NSMutableArray *subContexts; // @synthesize subContexts;
- (void)taskDidFinishWithRes:(id)arg1 isSuccess:(_Bool)arg2;
- (_Bool)taskDidStart;
- (void)taskDidUpdateProgress:(double)arg1 status:(int)arg2;

@end


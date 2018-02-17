//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, OnlineTag;

@interface QRChapterDownloadRequest : NSObject
{
    OnlineTag *_onlinTag;
    _Bool _autoPay;
    _Bool _pay;
    _Bool _oncePaiedWithAutoPayOn;
    int _xo;
    NSString *_bookId;
    NSString *_bookName;
    _Bool _isEncrpy;
    _Bool _isBatch;
    NSArray *_chapters;
    NSString *_scids;
    unsigned short _srcType;
}

+ (id)getRequestIdentifierForChapter:(long long)arg1 bookId:(id)arg2;
- (void).cxx_destruct;
- (void)addParams:(id)arg1 value:(id)arg2 forUrl:(id)arg3;
@property(readonly, copy, nonatomic) NSString *bookId; // @synthesize bookId=_bookId;
@property(readonly, copy, nonatomic) NSString *bookName; // @synthesize bookName=_bookName;
@property(readonly, copy, nonatomic) NSArray *chapters; // @synthesize chapters=_chapters;
- (_Bool)containChapterRequest:(int)arg1;
- (id)getOnlineRequestUrlWithIP:(id)arg1;
- (id)getOnlineRequestUrlWithIP:(id)arg1 includeIndex:(_Bool)arg2;
- (id)getRequestIdentifier;
- (id)getRequestedScids;
- (id)initWithOnlineTag:(id)arg1 chapter:(long long)arg2 isEncrpy:(_Bool)arg3;
- (id)initWithOnlineTag:(id)arg1 chapters:(id)arg2 isEncrpy:(_Bool)arg3 isBatch:(_Bool)arg4 payIfNeed:(_Bool)arg5;
- (id)initWithOnlineTag:(id)arg1 chapters:(id)arg2 isEncrpy:(_Bool)arg3 payIfNeed:(_Bool)arg4;
@property(readonly, nonatomic) _Bool isBatch; // @synthesize isBatch=_isBatch;
@property(readonly, nonatomic) _Bool isEncrpy; // @synthesize isEncrpy=_isEncrpy;

// Remaining properties
@property(nonatomic) _Bool autoPay; // @dynamic autoPay;
@property(nonatomic) _Bool oncePaiedWithAutoPayOn; // @dynamic oncePaiedWithAutoPayOn;
@property(retain, nonatomic) OnlineTag *onlinTag; // @dynamic onlinTag;
@property(nonatomic) _Bool pay; // @dynamic pay;

@end

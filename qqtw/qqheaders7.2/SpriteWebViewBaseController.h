//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewController.h"

@interface SpriteWebViewBaseController : QQWebViewController
{
    _Bool _isClearBackground;
    int sourceType;
    id model;
}

- (void)closeWebview;
- (void)dealloc;
- (id)initWith:(id)arg1 forStyle:(long long)arg2 acitiviyType:(int)arg3;
@property(nonatomic) _Bool isClearBackground; // @synthesize isClearBackground=_isClearBackground;
- (void)leftButtonClick:(id)arg1;
- (void)loadView;
@property(retain, nonatomic) id model; // @synthesize model;
- (void)postNotificationWithResult:(int)arg1 msg:(id)arg2 callbackType:(int)arg3 data:(id)arg4;
@property(nonatomic) int sourceType; // @synthesize sourceType;

@end


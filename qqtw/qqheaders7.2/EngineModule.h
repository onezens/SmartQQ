//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQReadEngine, QRSetting;

@interface EngineModule : NSObject
{
    QRSetting *_setting;
    QQReadEngine *_readEngine;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (double)adSeizeParaPosY;
- (_Bool)bindEngine:(id)arg1;
- (_Bool)bookMarkProgressReadEngine:(id)arg1;
- (_Bool)bookMarkReadEngine:(id)arg1;
- (void)close;
- (void)closeReadEngine;
- (double)commentSeizeParaPosY;
- (_Bool)drawPage:(struct CGContext *)arg1;
- (void)drawPageReadEngine:(id)arg1;
- (long long)getCurPageEndOffset;
- (id)getCurrentPageShowText;
- (_Bool)goToBookMark:(id)arg1;
- (_Bool)goToPosition:(long long)arg1;
- (id)init;
- (_Bool)isPageBottom;
- (_Bool)isPageTop;
- (void)loadReadEngine;
@property(retain, nonatomic) QQReadEngine *readEngine; // @synthesize readEngine=_readEngine;
- (_Bool)relayout;
- (_Bool)scrollPageDown;
- (_Bool)scrollPageUp;
- (void)setFontNameWithName:(id)arg1 andFontID:(id)arg2;
- (void)setReadEngineWithQRSetting:(id)arg1;
- (_Bool)setSetting:(id)arg1;
- (void)splitChapterOnMainThread:(id)arg1;
- (_Bool)splitChapterReadEngine:(id)arg1;
- (_Bool)splitCharpter:(id)arg1 Path:(id)arg2;
- (_Bool)startReadEngineWithFilepath:(id)arg1 withBookIDStr:(id)arg2 withOnlineBookInfo:(id)arg3 withChapterID:(long long)arg4 andIsOnlineBook:(_Bool)arg5;
- (void)unLoadReadEngine;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserSummaryTableHeaderViewCustom.h"

@class UIImageView, UIView;

@interface UserSummaryTableHeaderViewGame : UserSummaryTableHeaderViewCustom
{
    UIView *_customBgView;
    UIImageView *_headFrameView;
    UIView *_gameMiddleView;
    _Bool _hasAddVoiceLabelObsever;
    UIView *_infoView;
}

- (void).cxx_destruct;
- (int)getAllHeight;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
- (id)initWithAllData:(id)arg1;
- (void)layoutView;
- (void)onRichStateSignatureTapped:(id)arg1;
- (void)setGameInfoBackgroundColor:(id)arg1 andGamesViewBackgroundColor:(id)arg2;
- (void)updateAllData:(id)arg1;
- (void)updateMedalWallButtons;
- (void)viewDidAppear:(_Bool)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface ARBinhaiRankView : UIView
{
    UIImageView *_bgView;
    UIImageView *_rank2View;
    UIImageView *_rank1View;
    UIImageView *_rank3View;
    UILabel *_label;
    UIButton *_button;
    UIButton *_closeBtn;
    NSString *_rankUrl;
    NSString *_actId;
}

- (void).cxx_destruct;
- (id)adjustImage:(id)arg1;
- (void)buttonClicked;
- (void)closeBtnClicked;
- (id)initWithFrame:(struct CGRect)arg1 resourcePath:(id)arg2 rankUrl:(id)arg3 actId:(id)arg4;

@end


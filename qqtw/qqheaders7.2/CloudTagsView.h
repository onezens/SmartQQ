//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface CloudTagsView : UIView
{
    UIButton *_cover;
    struct CGSize _cloudWordRegionSize;
}

- (void).cxx_destruct;
- (void)cloudWordRegionAddTarget:(id)arg1 action:(SEL)arg2;
@property(nonatomic) struct CGSize cloudWordRegionSize; // @synthesize cloudWordRegionSize=_cloudWordRegionSize;
@property(nonatomic) __weak UIButton *cover; // @synthesize cover=_cover;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setWords:(id)arg1 useWhiteTheme:(_Bool)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface SCFEmptyPromptView : UIView
{
    id <SCFEmptyPromptViewDelegate> _scfEmptyDelegate;
}

- (void).cxx_destruct;
- (void)addButtonPress;
- (id)initWithFrame:(struct CGRect)arg1 withEmptyStyle:(int)arg2;
- (void)loadEmptyViewNoPBMgr:(struct CGRect)arg1;
- (void)loadEmptyViewNoQQFriend:(struct CGRect)arg1;
- (void)loadEmptyViewNoSCFriend:(struct CGRect)arg1;
- (void)loadEmptyViewWithFrame:(struct CGRect)arg1 byStyle:(int)arg2;
@property(nonatomic) __weak id <SCFEmptyPromptViewDelegate> scfEmptyDelegate; // @synthesize scfEmptyDelegate=_scfEmptyDelegate;

@end


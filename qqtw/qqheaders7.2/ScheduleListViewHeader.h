//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface ScheduleListViewHeader : UIView
{
    UILabel *_headerTextLabel;
    UIView *_viewMask;
}

+ (double)getViewHeight;
- (void)dealloc;
- (void)initHeaderInfoWithText:(id)arg1 isHighLightText:(_Bool)arg2 isExpired:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 ShowText:(id)arg2 isHighLightText:(_Bool)arg3 isExpired:(_Bool)arg4;
- (void)updateCellBackgroundColor:(_Bool)arg1;
- (void)updateHeaderConstraints;

@end


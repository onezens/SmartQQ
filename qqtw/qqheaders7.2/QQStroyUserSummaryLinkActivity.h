//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQActivity.h"

@class NSString, UIImage;

@interface QQStroyUserSummaryLinkActivity : QQActivity
{
    int _type;
    UIImage *_activityImage;
    NSString *_activityTitle;
    id <QQStroyUserSummaryLinkDelegate> _delegate;
}

@property(retain, nonatomic) UIImage *activityImage; // @synthesize activityImage=_activityImage;
@property(copy, nonatomic) NSString *activityTitle; // @synthesize activityTitle=_activityTitle;
- (void)dealloc;
@property(nonatomic) id <QQStroyUserSummaryLinkDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareWithActivityItems:(id)arg1;
@property(nonatomic) int type; // @synthesize type=_type;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class QZLayoutInfo;

@interface QzoneBaseFeedView : UIImageView
{
    _Bool _rendered;
    _Bool _lastRenderAynsc;
    QZLayoutInfo *_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QZLayoutInfo *info; // @synthesize info=_info;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)refreshRenderAsync:(_Bool)arg1 useCache:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;

@end

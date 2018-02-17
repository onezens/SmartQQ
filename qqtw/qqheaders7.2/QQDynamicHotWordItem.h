//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, QQDynamicSearchHotWordItemInfo, UILabel, UIView;

@interface QQDynamicHotWordItem : UIButton
{
    double _itemHeight;
    double _itemWidth;
    NSString *_jmpUrl;
    int _type;
    UILabel *_rankLabel;
    UIView *_bottomLine;
    UIView *_verticalLine;
    _Bool _showBottomLine;
    _Bool _showVerticalLine;
    QQDynamicSearchHotWordItemInfo *_dataModel;
}

@property(retain, nonatomic) QQDynamicSearchHotWordItemInfo *dataModel; // @synthesize dataModel=_dataModel;
- (void)dealloc;
- (void)initUIWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 idx:(unsigned long long)arg2;
@property(readonly, nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(retain, nonatomic) NSString *jmpUrl; // @synthesize jmpUrl=_jmpUrl;
@property(nonatomic) _Bool showBottomLine; // @synthesize showBottomLine=_showBottomLine;
@property(nonatomic) _Bool showVerticalLine; // @synthesize showVerticalLine=_showVerticalLine;
@property(nonatomic) int type; // @synthesize type=_type;

@end

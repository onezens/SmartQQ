//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QPageFrameInfo : NSObject
{
    int _pagePosition;
    int _pageType;
    struct _NSRange _wordsRange;
    NSString *_contentString;
    int _xo;
    _Bool _isNeedReLayout;
    id _frame;
    CDStruct_627e0f85 _pageRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id frame; // @synthesize frame=_frame;
- (id)init;
@property(nonatomic) _Bool isNeedReLayout; // @synthesize isNeedReLayout=_isNeedReLayout;
@property(nonatomic) CDStruct_627e0f85 pageRange; // @synthesize pageRange=_pageRange;

// Remaining properties
@property(retain, nonatomic) NSString *contentString; // @dynamic contentString;
@property(nonatomic) int pagePosition; // @dynamic pagePosition;
@property(nonatomic) int pageType; // @dynamic pageType;
@property(nonatomic) struct _NSRange wordsRange; // @dynamic wordsRange;

@end


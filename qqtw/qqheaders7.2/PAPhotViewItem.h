//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPAAlbumPhoto.h"

@class NSString;

@interface PAPhotViewItem : QQPAAlbumPhoto
{
    _Bool _hasRequestPreDownload;
    NSString *_text;
    long long _pageIndex;
    NSString *_staticUrl;
    double _extraHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double extraHeight; // @synthesize extraHeight=_extraHeight;
@property(nonatomic) _Bool hasRequestPreDownload; // @synthesize hasRequestPreDownload=_hasRequestPreDownload;
- (id)init;
- (id)initWithItem:(id)arg1;
- (void)notifyDownloadFail:(id)arg1;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(copy, nonatomic) NSString *staticUrl; // @synthesize staticUrl=_staticUrl;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSegInfo.h"

@interface SplitVideoInfo : BaseSegInfo
{
    int _resLen;
    int _resWidth;
    int _videoLength;
    unsigned long long _format;
}

@property(nonatomic) unsigned long long format; // @synthesize format=_format;
@property(nonatomic) int resLen; // @synthesize resLen=_resLen;
@property(nonatomic) int resWidth; // @synthesize resWidth=_resWidth;
@property(nonatomic) int videoLength; // @synthesize videoLength=_videoLength;

@end


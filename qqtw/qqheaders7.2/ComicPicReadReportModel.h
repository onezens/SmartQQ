//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ComicPicReadReportModel : NSObject
{
    NSString *_comicID;
    NSString *_sectionID;
    NSString *_picID;
    long long _duration;
    long long _readTs;
    int _xo;
}

- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSString *comicID; // @dynamic comicID;
@property(nonatomic) long long duration; // @dynamic duration;
@property(retain, nonatomic) NSString *picID; // @dynamic picID;
@property(nonatomic) long long readTs; // @dynamic readTs;
@property(retain, nonatomic) NSString *sectionID; // @dynamic sectionID;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface QQStoryVideoFilterInfo : NSObject <NSCoding>
{
    int _filter_index;
    unsigned int _filter_type;
    unsigned long long _filter_id;
    NSString *_filter_name;
    NSString *_filter_config_file;
    NSString *_filter_config_md5;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *filter_config_file; // @synthesize filter_config_file=_filter_config_file;
@property(retain, nonatomic) NSString *filter_config_md5; // @synthesize filter_config_md5=_filter_config_md5;
@property(nonatomic) unsigned long long filter_id; // @synthesize filter_id=_filter_id;
@property(nonatomic) int filter_index; // @synthesize filter_index=_filter_index;
@property(retain, nonatomic) NSString *filter_name; // @synthesize filter_name=_filter_name;
@property(nonatomic) unsigned int filter_type; // @synthesize filter_type=_filter_type;
- (id)initWithCoder:(id)arg1;

@end

